/*
Generate Sunkenland Item id markdown table
Copyleft (C) 2024 Michaelange007 / mysticreddit
*/
#define VERSION 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Consts
	const int MAX_RES_NAME  = 120;
	const int MAX_CAT_NAME  =  32;
	const int MAX_TYPE_NAME =   8;

enum Flag_t
{
	FLAG_RUBBISH = (1 << 0),
	FLAG_UNICODE = (1 << 1),
	FLAG_TIERED  = (1 << 2)
};

// Types
	struct Item
	{
		int   id;
		int   stack;
		char  resource[ MAX_RES_NAME  ];
		char  type    [ MAX_TYPE_NAME ]; // first prefix of resource name
		char  category[ MAX_CAT_NAME  ]; // second prefix of resource name
		int   price;
		int   flags;
	};

// Globals
	int  gnItems = 0;
	Item gaItems[ 32768 ];

	size_t gnMaximumLength = 0;
	int    giMaximumLength = -1;

	bool gbVerbose        = false;
	bool gbInfoNoName     = false;
	bool gbInfoRubbish    = false;
	bool gbInfoUnderscore = false;
	bool gbWarnUnicode    = false;
	bool gbQuiet          = false;

// Util

// ======================================================================
const char* TextFind( const char* haystack, const char needle )
{
	if (!haystack) return nullptr;

	while (*haystack && (*haystack != needle ))
		haystack++;

	if (! *haystack) return nullptr;
	return haystack;
}

// ======================================================================
const char* TextSkip( const char* haystack, const char needle )
{
	if (!haystack) return nullptr;

	while (*haystack && (*haystack == needle ))
		haystack++;

	if (! *haystack) return nullptr;
	return haystack;
}

// On C++17 we could use std::filesystem

	// AssetPath
	struct Path
	{
		size_t length;
		char name[ 128 ];

		void Copy( const char *start, const char *end)
		{
			memset( name, 0, sizeof(name) );
			length = end - start;
			strncpy( name, start, length );
			name[ length ] = 0;
		}

		void GetFilename()
		{
			Path        tPrev;
			const char *pTail;
			do
			{
				tPrev = *this;
				pTail = StripPrefix();
			} while (!pTail);
		}

		// Updates the pathname by "popping" the first directory and returning the remaining path		
		//
		// Example:					   pathname       returns
		//     dir1/dir2/filename  ->  dir2/filename  dir2/filename
		//     filename                filename       filename
		char* StripPrefix()
		{
			const char *pDir = PopDirectory();
			return name;
		}

		// Updates the pathname by "popping" the first directory and returning it
		// If there is no directory returns nullptr
		//
		// Example:					   pathname       returns
		//     dir1/dir2/filename  ->  dir2/filename  dir1
		//     filename                filename       nullptr
		char* PopDirectory()
		{
			const char *pDir = TextFind( name, '/' );
			if (pDir)
			{
				Path temp = *this; // avoid overlapped memcpy() even though it is safe

				// "pop" first directory
				pDir++; // skip trailing /
				const size_t offset = (pDir - name);
				const size_t remain = length - offset;
				char *dst = nullptr;

				if (remain > 0)
				{
					memcpy( name, temp.name + offset, remain ); 
					name[ remain ] = 0;
					length = remain;

					dst = name + remain + 1;
					strncpy( dst, temp.name, offset - 1 ); // move prefix to past new null sentinel
					// We don't need to null terminate since the string is the same length and we can re-use the existing one
				}
				return dst;
			}
			return nullptr;
		}
		
		char* StripExtension()
		{
			const char *pEnd = TextFind( name, '.' ); // TODO: This should be reverse search
			if (pEnd)
			{
				length = pEnd - name;
				name[ length ] = 0;
			}
			return name;
		}
	};

	enum Categories
	{
		  CAT_UNKNOWN      // 0
		, CAT_AMMO         // 1
		, CAT_ARMOR        // 2
		, CAT_BLUEPRINT    // 3
		, CAT_CLOTHES      // 4
		, CAT_DAMAGED_BP   // 5
		, CAT_DAMAGED_COMP // 6
		, CAT_DECORATION   // 7
		, CAT_FOOD         // 8
		, CAT_GIFT         // 9
		, CAT_GOODS        //10
		, CAT_HERB         //11
		, CAT_MACHINE      //12
		, CAT_MATERIAL     //13
		, CAT_MEDS         //14
		, CAT_TEMP         //15
		, CAT_TOOLS        //16
		, CAT_TRADE        //17
		, CAT_WEAPON       //18
		, NUM_CATEGORIES
	};

	const char* gaCategories[NUM_CATEGORIES] =
	{
		  "Unknown"      // CAT_UNKNOWN
		, "Ammo"         // CAT_AMMO
		, "Armor"        // CAT_ARMOR
		, "Blueprint"    // CAT_BLUEPRINT
		, "Clothes"      // CAT_CLOTHES
		, "Damaged BP"   // CAT_DAMAGED_BP
		, "Damaged Comp" // CAT_DAMAGED_COMP
		, "Decoration"   // CAT_DECORATION
		, "Food"         // CAT_FOOD
		, "Gift"         // CAT_GIFT
		, "Goods"        // CAT_GOODS
		, "Herb"         // CAT_HERB
		, "Machine"      // CAT_MACHINE
		, "Material"     // CAT_MATERIAL
		, "Meds"         // CAT_MEDS
		, "Temp"         // CAT_TEMP
		, "Tools"        // CAT_TOOLS
		, "Trade"        // CAT_TRADE
		, "Weapon"       // CAT_WEAPON  
	};

// Remap Category
// Category (2nd from resource name)
//   #_Ammos         (# is Tier)  -> Ammo
//   # Armors        (# is Tier)  -> Armor
//   # Armors Broken (# is Tier)  -> Armor
//   # Tools         (# is Tier)  -> Tools
//   # Weapons       (# is Tier)  -> Weapons
//   Blueprint Decoration/#/      -> Blueprints
//   Blueprints/#/                -> Blueprints 
//   Blueprints/Trader/           -> Blueprints  
//   Clothes                      -> Clothes
//   Food                         -> Food
//   GiftPack                     -> Gift
//   Heavy Machinery"             -> Machine
//   Herbs                        -> Herbs
//   Materials                    -> Materials
//   Meds                         -> Meds
//   Rubbish                      -> Damaged BP
//   Special Loots                -> Goods
//   Temp                         -> Temp
//   Trader Only                  -> Trade
//   WeaponParts                  -> Weapons
//   WeaponPartsBP                -> Blueprints
// ======================================================================
const char* categorize( const Item &Entry, const char *Category )
{
	if (Category)
	{
		if (strstr(Category, "Rubbish") != NULL)
		{
			if (gbInfoRubbish)
				fprintf( stderr, "INFO: Item %d has Rubbish category.\n", Entry.id );
			return gaCategories[ CAT_DAMAGED_BP ];
		}

		if (strstr( Category, "Special Loots" ) != NULL)
			return gaCategories[ CAT_GOODS ];

		if (strstr( Category, "WeaponPartsBP" ) != NULL)
		{
			return gaCategories[ CAT_BLUEPRINT ];
		}

		for( int iCat = CAT_UNKNOWN+1; iCat < NUM_CATEGORIES; ++iCat ) // Start with known categories
		{
			const char *pCat = gaCategories[ iCat ];
			if (strstr( Category, pCat ) != NULL)
			{
				// Exceptions:
				//     24037 "Assets/Resources/Items/WeaponParts/capitalist times‘s alloy barrel.prefab",
				//     Has Unicode but is NOT rubbish
				if (Entry.flags & FLAG_UNICODE)
					return gaCategories[ CAT_DAMAGED_COMP ];

				return pCat;
			}
		}
		fprintf( stderr, "WARN: UNKNOWN category! %s\n", Category );
		exit(-1);
	}

	return gaCategories[ CAT_UNKNOWN ];
}


// Check if name has `_` and remove prefix
// Check if \r\n in name
// ======================================================================
void cleanup( Item &Entry, Path* Path )
{
	// NOTE: If you use `strings64` to dump "resource.assets" some ResourceName entries will
	// split U-2018, '‘' Left Single Quotation Mark, as '\r\n' due not parsing Unicode correctly.
	//     16003 "Assets/Resources/Items/Rubbish/Blueprint capitalist times‘s scrap iron barrel.prefab"
	//     16003 "Assets/Resources/Items/Rubbish/Blueprint capitalist times\r\ns scrap iron barrel.prefab"
	//     :
	//     24037 "Assets/Resources/Items/WeaponParts/capitalist times\r\ns alloy barrel.prefab"
	// To inspect:
	//     console.log( '‘'.charCodeAt(0) );
	// To see it in UTF-8:
	//     console.log( encodeURIComponent( '‘' ));
	// which is encoded as:
	//     %E2%80%98
	for( int offset = 0; offset < Path->length; ++offset )
	{
		// NOTE: char is signed so 0xE2 is true for (c < 0x20)
		char c = Path->name[ offset ];
		if (c < 0x20)
		{
			if (gbWarnUnicode)
				fprintf( stderr, "WARN: Item %d has Unicode 0x%02X at offset %d.\n", 
					Entry.id,
					c,
					offset
				);

			// check for CR,LF
			if (Path->name[offset + 1] < 0x20)
			{
				for( int remain = offset; remain <= Path->length; remain++ )
					Path->name[ remain ] = Path->name[ remain+2 ];
				Path->length -= 2;
			}

			Path->name[ offset ] = '\'';
			Entry.flags |= FLAG_UNICODE;
		}
	}

	// some items have an '_' in their resource name?! The prefix for that WORD isn't displayed.
	//  1001 "Assets/Resources/Items/2 Weapons/1/A1_Crude Axe.prefab"
	// 15112 "Assets/Resources/Items/Blueprints/3/Blueprint Z_AmmunitionPouch.prefab"
	char *underscore = strstr( Path->name, "_");
	if (underscore != NULL)
	{
		char  *dst = underscore++;
		while (dst > Path->name)
		{
			if (*dst == ' ')
			{
				dst++;
				break;
			}
			dst--;
		}

		const size_t head   = dst - Path->name;
		const size_t offset = underscore - Path->name;
		const size_t remain = Path->length - offset;
		strncpy( dst, underscore, remain );
		Path->name[ head + remain ] = 0;

		Entry.flags |= FLAG_TIERED;

		if (gbInfoUnderscore)
			fprintf( stderr, "INFO: Item %d has _ at offset %zd.\n", 
				Entry.id,
				offset
			);
	}
}

// ======================================================================
void item( const char *Start, const char *End )
{
	Item   entry;
	memset( &entry, 0, sizeof( entry ) );

	const char *text = Start;
	do
	{
		const char *pKey1 = TextFind( text , '"' ); if (!pKey1) break; pKey1++;
		const char *pKey2 = TextFind( pKey1, '"' ); if (!pKey2) break;
		const char *pSep1 = TextFind( pKey2, ':' ); if (!pSep1) break; pSep1++;
		const char *pVal1 = TextSkip( pSep1, ' ' ); if (!pVal1) break;
		const char *pVal2 = TextFind( pVal1, ',' ); if (!pVal2) break;
		            text =            pVal2 + 1;    if (text >= End) break;

		size_t nKey = pKey2 - pKey1; 
		size_t nVal = pVal2 - pVal1;

		if (nKey == 2)
		{ 
			if (strncmp( pKey1, "ID", nKey) == 0)
				entry.id = atoi( pVal1 );
		}
		else
		if (nKey == 5)
		{
			if (strncmp( pKey1, "Price", nKey) == 0)
				entry.price = atoi( pVal1 );
		}	
		else
		if (nKey == 11)
		{
			if (strncmp( pKey1, "StackaMount", nKey) == 0)
				entry.stack = atoi( pVal1 );
		}
		else
		if (nKey == 12)
			if (strncmp( pKey1, "ResourceName", nKey) == 0)
			{
				// "Assets/Resources/Foo.prefab",
				// ^                            ^
				// pVal1                        pVal2
				if (*pVal1 == '"') pVal1++; // Skip " prefix
				if (*pVal2 == ',') pVal2--; // Skip , suffix

				nVal = pVal2 - pVal1;
				if (nVal < 1)
				{
					// 4014	"ResourceName": "",
					// gbInfoEmptyName
					if (gbInfoNoName)
						fprintf( stderr, "INFO: Skipping %d due to resource name being length %zd\n", entry.id, nVal );
					entry.id = 0;
					return;
				}

				Path path;
				path.Copy( pVal1, pVal2 );

				path.StripPrefix(); // Strip off "Assets/Resources/" prefix
				path.StripPrefix(); 
				path.StripExtension(); // strip `.prefab` extension

				// Type     (1st from resource name)
				//     Items
				//     Temp
				Path item = path;
				const char  *pType = path.PopDirectory();
				const size_t nType = strlen( pType );

				Path cat = path;
				const char  *pRaw = path.PopDirectory();
				const char  *pCat = nullptr;
					  size_t nCat = 0;

				if (!pRaw)
				{
					// TradeContractItem
					// BuildingContainer
					pCat = pType;
					nCat = nType;
				}
				else
				{
					path.GetFilename();
					cleanup( entry, &path );

					if (strcmp( pRaw, "Rubbish") == 0)
						entry.flags |= FLAG_RUBBISH;

					pCat = categorize( entry, pRaw );
					nCat = strlen( pCat );
				}

				if (gnMaximumLength < path.length)
				{
					gnMaximumLength = path.length;
					giMaximumLength = entry.id;
				}

				assert( nVal  < MAX_RES_NAME );
				assert( nType < MAX_CAT_NAME );

				strncpy( entry.resource, path.name, path.length  );
				strncpy( entry.type    , pType, nType );
				strncpy( entry.category, pCat , nCat  );
			}
	} while (true);

	if (entry.id && !gbQuiet)
	{
		char sPrice[8];
		sprintf( sPrice, "$%d", entry.price );

		printf( "|%5d|",      entry.id       );
		printf( "%*s"  , -62, entry.resource ); // -MAX_RES_NAME or gnMaximumLength
		printf( "|%3d|",      entry.stack    );
		printf( "%*s|" , -12, entry.category );
		printf( "%*s|",    5, sPrice         );
		printf( "\n" );
	}
}

// ======================================================================
void parse( const size_t Size, const char *Buffer )
{
	const char *pText = Buffer;
	const char *pEnd = Buffer + Size;

	gnItems = 0;
	while (pText < pEnd)
	{
		if (*pText == '{')
		{
			const char *pStart = pText + 1;
			while (*pText != '}')
			{
				pText++;
			}
			const char *pEnd = pText;
			item( pStart, pEnd );
			gnItems++;
		}
		pText++;
	}

	if (gbVerbose) printf( "Processed %d items\n", gnItems );
}

// -q -u ..\data\item_data.txt
// ======================================================================
int main( int nArg, char *aArg[] )
{
	bool bHaveFilename = false;

	int iArg = 1;
	for( ; iArg < nArg; ++iArg )
	{
		if (strcmp( aArg[ iArg ], "-v") == 0)
		{
			gbVerbose = true;
			gbQuiet   = false;
			gbWarnUnicode    = true;
			gbInfoUnderscore = true;
			gbInfoRubbish    = true;
		}
		else
		if (strcmp( aArg[ iArg ], "-u") == 0)
			gbWarnUnicode = true;
		else
		if (strcmp( aArg[ iArg ], "-_") == 0)
			gbInfoUnderscore = true;
		else
		if (strcmp( aArg[ iArg ], "-q") == 0)
			gbQuiet = true;
		else
		if (strcmp( aArg[ iArg ], "-r") == 0)
			gbInfoRubbish = true;
		else
		if (strcmp( aArg[ iArg ], "-?") == 0)
		{
			printf( "Build Sunkenland Item Markdown Table\n" );
			printf( "Version %d\n", VERSION );
			printf(
"Usage:  [OPTIONS] [ITEMFILE.JSON]"
"\n"
"-?  Display this help\n"
"-_  Display diagnostic if ResourceName has underscore\n"
"-q  Don't show table\n"
"-r  Display diagnostic if ID is a Rubbish category\n"
"-u  Display diagnostic if ResourceName has Unicode\n"
"-v  Verbose display all diagnostic messages\n"
"\n"
"If no itemfile.json is specified it will default to:\n"
"    data\\itemdata.json\n"
"\n"
"Examples:\n"
"    build_table.exe -q -_ 2> info_underscore.txt\n"
"    build_table.exe -q -r 2> info_rubbish.txt   \n"
"    build_table.exe -q -u 2> info_unicode.txt   \n"
			);
			exit(0);
		}
		else
		{
			bHaveFilename = (iArg+1) < nArg;
			break;
		}
	}

	const char *filename = bHaveFilename
		? aArg[ iArg ]
		: "data\\itemdata.json";
		;

	if (!gbQuiet)
	{
		printf( "|0.5.11|Name                                                         |Max|Type        |Price|\n" );
		printf( "|----:|:-------------------------------------------------------------|--:|:-----------|----:|\n" );
	}

	FILE *in = fopen( filename, "rb" );
	if (in)
	{
		fseek( in, 0, SEEK_END );
		size_t size = ftell( in );
		fseek( in, 0, SEEK_SET );

		char *buffer = new char[ size + 1 ];
		size_t read = fread( buffer, 1, size, in );

		if (gbVerbose) printf( "Size: %u\n", (unsigned) size );
		if (gbVerbose) printf( "Read: %u\n", (unsigned) read );

		buffer[ size ] = 0;

		parse( size, buffer );
		fclose( in );
	}
	else
		printf( "ERROR: Couldn't open file '%s'\n", filename );

	if (!gbQuiet)
		fprintf( stderr, "Total items = %d, maximum resource name length = %zd\n", giMaximumLength, gnMaximumLength );

	return 0;
}
