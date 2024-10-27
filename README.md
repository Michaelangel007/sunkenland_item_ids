# Sunkenland Item IDs

# Intro

[Sunkenland](https://store.steampowered.com/app/2080690/Sunkenland/) saves your characters and world in a JSON formmat.  You can edit your character's savegame to change the item type and quantity of items in your inventory.

## Windows

* **Characters** can be found in `%localappdata%low\Vector3 Studio\Sunkenland\Characters\`
* **World** can be found in: `%localappdata%Low\Vector3 Studio\Sunkenland\Worlds\`

## Linux

* **Characters:** `$HOME/.local/share/Steam/steamapps/compatdata/2080690/pfx/drive_c/users/steamuser/AppData/LocalLow/Vector3 Studio/Sunkenland`

# Sunkenland Item IDs

Item ID table for 0.5.11.

Version 0.2 changed all the Item IDs. I found this older [0.1.51 to 0.2 conversion](https://preview.redd.it/new-id-list-on-version-0-2-0-v0-8jynmk0hliec1.png?width=580&format=png&auto=webp&s=242a14aeb4506555cde9793a2edb4299d1fd585d) graphic table but it has a few problems:

* It is incomplete/out-of-date. i.e. missing all the Blueprints in 16001-16124,
* It isn't in text format which means you can't sort it by ID, Name, etc.
* I believe it lists items no longer in the game. i.e. 560-576.

(Aside, it DOES list the numberic range of "condition" for items.)

Since I couldn't find a complete updated table for 0.5 I wrote a program to generate a markdown table. :-)

There are a total items = 16049; stripping off the path in the resource name the maximum resource name length = 62.

|0.5.11|Name                                                         |Max|Type        |Price|
|----:|:-------------------------------------------------------------|--:|:-----------|----:|
|    1|Silver Coins                                                  |100|Goods       | $100|
|    2|TradeContractItem                                             |  1|Items       |   $1|
|  544|BuildingContainer                                             |  1|Items       |   $1|
| 1001|Crude Axe                                                     | 20|Weapon      |  $70|
| 1002|Metal Axe                                                     | 20|Weapon      |  $95|
| 1003|Wooden Spear                                                  | 20|Weapon      |  $15|
| 1004|Bow                                                           |  1|Weapon      |  $25|
| 1005|Spiked Club                                                   | 20|Weapon      |  $30|
| 1006|Stone Hatchet                                                 | 20|Weapon      |  $15|
| 1007|Wooden Knife                                                  | 20|Weapon      |  $10|
| 1008|Scrap Metal Spear                                             | 20|Weapon      |  $90|
| 1009|Claw                                                          | 20|Weapon      |   $1|
| 1101|Crossbow                                                      |  1|Weapon      | $200|
| 1102|Iron Axe                                                      | 20|Weapon      | $205|
| 1103|Iron Spear                                                    | 20|Weapon      | $200|
| 1104|Combat Knife                                                  | 20|Weapon      | $600|
| 1105|Iron Mace                                                     | 20|Weapon      | $300|
| 1106|Iron Sword                                                    | 20|Weapon      | $400|
| 1107|Machete                                                       | 20|Weapon      | $350|
| 1108|Skull Crusher                                                 | 20|Weapon      | $150|
| 1109|Harpoon Guns                                                  |  1|Weapon      | $150|
| 1110|Chainsaw                                                      |  1|Weapon      | $150|
| 1111|Wasteland Greataxe                                            | 20|Weapon      | $200|
| 1201|Antique Flintlock Pistol                                      |  1|Weapon      | $400|
| 1202|Homemade Revolver                                             |  1|Weapon      | $600|
| 1203|Percussion Pistol                                             |  1|Weapon      | $500|
| 1204|Tripple Barrel Pistol                                         |  1|Weapon      | $400|
| 1205|Scrap Pistol                                                  |  1|Weapon      | $400|
| 1301|Double Barrel Shotgun                                         |  1|Weapon      | $700|
| 1302|PM                                                            |  1|Weapon      | $300|
| 1303|Crude Hunting Rifle                                           |  1|Weapon      | $700|
| 1304|Old Bolt Action Rifle                                         |  1|Weapon      | $900|
| 1305|M14                                                           |  1|Weapon      |$1300|
| 1306|Stun SMG                                                      |  1|Weapon      |$1100|
| 1307|A6 Mauser Pistol                                              |  1|Weapon      | $400|
| 1308|STG44                                                         |  1|Weapon      |$1357|
| 1401|GP20                                                          |  1|Weapon      |$1200|
| 1402|Pump Shotgun                                                  |  1|Weapon      |$1300|
| 1403|SMG                                                           |  1|Weapon      |$1300|
| 1404|AK47                                                          |  1|Weapon      |$1500|
| 1405|M16                                                           |  1|Weapon      |$1500|
| 1406|A7 DEG 45                                                     |  1|Weapon      |$1701|
| 1407|LW 59                                                         |  1|Weapon      |$1547|
| 1408|US45 SMG                                                      |  1|Weapon      |$1300|
| 1409|SVD                                                           |  1|Weapon      |$2200|
| 1410|VSS                                                           |  1|Weapon      |$3633|
| 1411|Supernova                                                     |  1|Weapon      |$2707|
| 1412|FAMAS                                                         |  1|Weapon      |$2203|
| 1413|AUG                                                           |  1|Weapon      |$2997|
| 1414|AK12                                                          |  1|Weapon      |$3443|
| 2001|Bird Meat                                                     | 20|Food        |  $10|
| 2002|Cabbage                                                       | 20|Food        |   $5|
| 2003|Coffee Bean                                                   | 20|Food        |   $5|
| 2004|Crab Meat                                                     | 20|Food        |   $5|
| 2005|Tarpon                                                        | 20|Food        |   $5|
| 2006|Wahoo                                                         | 20|Food        |   $5|
| 2007|Red Snapper                                                   | 20|Food        |   $5|
| 2008|Bream                                                         | 20|Food        |   $5|
| 2009|Large Fish Meat                                               | 20|Food        |   $5|
| 2010|Lemon                                                         | 20|Food        |   $5|
| 2011|Mushroom                                                      | 20|Food        |   $5|
| 2012|Potato                                                        | 20|Food        |   $5|
| 2013|Raw Meat                                                      | 20|Food        |   $5|
| 2014|Scallop                                                       | 20|Food        |   $5|
| 2015|Strawberry                                                    | 20|Food        |   $5|
| 2016|Water                                                         | 10|Food        |   $1|
| 2017|Copra                                                         | 20|Food        |  $10|
| 3001|Bandage                                                       | 20|Meds        |  $15|
| 3002|Herbal Medicine                                               | 20|Meds        |  $30|
| 3003|Lung Capacity Booster                                         | 10|Meds        |  $70|
| 3004|Stamina Mix                                                   | 20|Meds        |  $50|
| 3005|Antibiotics                                                   | 20|Meds        | $200|
| 3006|Baked Beans                                                   | 20|Food        |  $50|
| 3007|Candy Bar                                                     | 20|Food        |  $10|
| 3008|Energy Drink                                                  | 20|Food        |  $50|
| 3009|Food Can                                                      | 20|Food        |  $45|
| 3010|Instant Ramen                                                 | 20|Food        |  $15|
| 3011|Pudding                                                       | 20|Food        |  $10|
| 3012|Soda                                                          | 20|Food        |  $40|
| 3013|Bottle Of Water                                               | 20|Food        |   $5|
| 3014|Roasted Tarpon                                                | 20|Food        |  $10|
| 3015|Roasted Wahoo                                                 | 20|Food        |  $10|
| 3016|Roasted Red Snapper                                           | 20|Food        |  $10|
| 3017|Roasted Bream                                                 | 20|Food        |  $10|
| 3018|Roasted Bird Meat                                             | 20|Food        |  $10|
| 3019|Roasted Cabbage                                               | 20|Food        |  $10|
| 3020|Roasted Crab                                                  | 20|Food        |  $10|
| 3021|Roasted Fish                                                  | 20|Food        |  $10|
| 3022|Roasted Meat                                                  | 20|Food        |  $10|
| 3023|Roasted Mushroom                                              | 20|Food        |  $10|
| 3024|Roasted Potato                                                | 20|Food        |  $10|
| 3025|Roasted Scallop                                               | 20|Food        |  $10|
| 3026|A1 Salad                                                      | 20|Food        |  $15|
| 3027|A2 Seafood Platter                                            | 20|Food        |  $15|
| 3028|A3 Fish Stew                                                  | 20|Food        |  $15|
| 3029|A4 Bird Meat Mushroom Soup                                    | 20|Food        |  $20|
| 3030|A5 Alcohol                                                    | 20|Food        |  $10|
| 3031|Baked Fish with Lemon                                         | 20|Food        |  $25|
| 3032|Coffee                                                        | 20|Food        |  $25|
| 3033|Coral Smoothie                                                | 20|Food        |  $25|
| 3034|Crab Cakes                                                    | 20|Food        |  $25|
| 3035|Roasted Lemon Bird                                            | 20|Food        |  $25|
| 3036|Steak Meal                                                    | 20|Food        |  $25|
| 3037|Strawberry And Lemon Smoothie                                 | 20|Food        |  $25|
| 3038|Gummy Duck                                                    | 20|Food        |  $25|
| 3039|Silly Cookies                                                 | 20|Decoration  |  $25|
| 3040|Froninga                                                      | 20|Meds        | $150|
| 3041|E3 Portable Inflatable Bottle                                 | 10|Tools       |  $55|
| 3042|Portable Repair Tools                                         | 10|Tools       |  $55|
| 4001|A1 Warm Jacket                                                |  1|Armor       |  $20|
| 4002|Thick Cloth Armor                                             |  1|Armor       |  $40|
| 4003|Thick Cloth Helmet                                            |  1|Armor       |  $30|
| 4004|Scrap Armor                                                   |  1|Armor       | $130|
| 4005|Scrap Helmet                                                  |  1|Armor       |  $60|
| 4006|Combat Armor                                                  |  1|Armor       | $150|
| 4007|B2 Helmet Heavy2                                              |  1|Armor       | $150|
| 4008|A1 Vest3 Forest                                               |  1|Armor       | $200|
| 4009|D3 Helmet Football                                            |  1|Armor       | $100|
| 4010|A3 Motorcycle Helmet                                          |  1|Armor       | $113|
| 4011|C1 Vest Police                                                |  1|Armor       | $480|
| 4012|C2 Police Helmet                                              |  1|Armor       | $517|
| 4013|B1 Army Vest                                                  |  1|Armor       | $577|
| 4016|D1 Spetznaz Vest                                              |  1|Armor       | $900|
| 4017|D2 Spetsnaz Helmet                                            |  1|Armor       | $900|
| 4018|D1 Shorts Kneedpads                                           |  1|Armor       |  $80|
| 4020|A2 P Tucked-SH Forest                                         |  1|Armor       |  $80|
| 4021|B3 P Tucked-SH Sand                                           |  1|Armor       |  $80|
| 4022|C3 Tucked-SH Navy                                             |  1|Armor       |  $80|
| 4501|Vest A                                                        |  1|Armor       |  $50|
| 4502|Vest B                                                        |  1|Armor       |  $50|
| 4503|Vest Black                                                    |  1|Armor       |  $50|
| 4504|Vest C                                                        |  1|Armor       |  $50|
| 4505|Vest1 Forest                                                  |  1|Armor       |  $50|
| 4506|Vest1 Sand                                                    |  1|Armor       |  $50|
| 4507|Vest3 Navy                                                    |  1|Armor       |  $50|
| 4508|2Layer TShirt A                                               |  1|Clothes     |  $50|
| 4509|2Layer TShirt B                                               |  1|Clothes     |  $50|
| 4510|2Layer TShirt E                                               |  1|Clothes     |  $50|
| 4511|1a 2Layer TShirt C                                            |  1|Clothes     |  $50|
| 4512|A2 Baggy Pants                                                |  1|Clothes     |  $50|
| 4513|A3 Zip Shoes                                                  |  1|Clothes     |  $50|
| 4514|Bandage Boots                                                 |  1|Clothes     |  $50|
| 4515|Bandana Mouth Black                                           |  1|Clothes     |  $50|
| 4516|Bandana Mouth Olive                                           |  1|Clothes     |  $50|
| 4517|Bandana Neck Black                                            |  1|Clothes     |  $50|
| 4518|Bandana Neck Sand                                             |  1|Clothes     |  $50|
| 4519|Boots D                                                       |  1|Clothes     |  $50|
| 4520|Boots Forest                                                  |  1|Clothes     |  $50|
| 4521|Boots Navy                                                    |  1|Clothes     |  $50|
| 4522|Boots1 A                                                      |  1|Clothes     |  $50|
| 4523|Boots2 A                                                      |  1|Clothes     |  $50|
| 4524|Bracer C                                                      |  1|Clothes     |  $50|
| 4525|Bracer                                                        |  1|Clothes     |  $50|
| 4526|Breechcloth Pants                                             |  1|Clothes     |  $50|
| 4527|Camisole A                                                    |  1|Clothes     |  $50|
| 4528|Camisole B                                                    |  1|Clothes     |  $50|
| 4529|Camisole D                                                    |  1|Clothes     |  $50|
| 4530|Camisole                                                      |  1|Clothes     |  $50|
| 4531|Canvas Shoes B                                                |  1|Clothes     |  $50|
| 4532|Canvas Shoes C                                                |  1|Clothes     |  $50|
| 4533|Canvas Shoes D                                                |  1|Clothes     |  $50|
| 4534|Cargo Pants B                                                 |  1|Clothes     |  $50|
| 4535|Cargo Pants C                                                 |  1|Clothes     |  $50|
| 4536|Cargo Shorts A                                                |  1|Clothes     |  $50|
| 4537|Cargo Shorts B                                                |  1|Clothes     |  $50|
| 4538|Cargo Shorts C                                                |  1|Clothes     |  $50|
| 4539|Close collar longsleeves shirt C                              |  1|Clothes     |  $50|
| 4540|Close collar longsleeves shirt D                              |  1|Clothes     |  $50|
| 4541|Close collar short sleeves shirt E                            |  1|Clothes     |  $50|
| 4542|Corset B                                                      |  1|Clothes     |  $50|
| 4543|Corset C                                                      |  1|Clothes     |  $50|
| 4544|Fingerless Gloves Black                                       |  1|Clothes     |  $50|
| 4545|Fingerless Gloves Brown                                       |  1|Clothes     |  $50|
| 4546|Flip-flops A                                                  |  1|Clothes     |  $50|
| 4547|Flip-flops C                                                  |  1|Clothes     |  $50|
| 4548|Flip-flops D                                                  |  1|Clothes     |  $50|
| 4549|Gas Mask A                                                    |  1|Clothes     |  $50|
| 4550|Gas Mask B                                                    |  1|Clothes     |  $50|
| 4551|Googles A                                                     |  1|Clothes     |  $50|
| 4552|Henley Longsleeve A                                           |  1|Clothes     |  $50|
| 4553|Henley Longsleeve B                                           |  1|Clothes     |  $50|
| 4554|Henley Longsleeve D                                           |  1|Clothes     |  $50|
| 4555|High-heels A                                                  |  1|Clothes     |  $50|
| 4556|High-heels B                                                  |  1|Clothes     |  $50|
| 4557|High-heels C                                                  |  1|Clothes     |  $50|
| 4558|High-heels D                                                  |  1|Clothes     |  $50|
| 4559|Jeans B                                                       |  1|Clothes     |  $50|
| 4560|Jeans C                                                       |  1|Clothes     |  $50|
| 4561|Jeans E                                                       |  1|Clothes     |  $50|
| 4562|Jeans Rivets                                                  |  1|Clothes     |  $50|
| 4563|Knee Boots B                                                  |  1|Clothes     |  $50|
| 4564|Knee Boots C                                                  |  1|Clothes     |  $50|
| 4565|Knee Boots D                                                  |  1|Clothes     |  $50|
| 4566|Leather Jeans                                                 |  1|Clothes     |  $50|
| 4567|Low-rise Shorts B                                             |  1|Clothes     |  $50|
| 4568|Low-rise Shorts C                                             |  1|Clothes     |  $50|
| 4569|Low-rise Shorts D                                             |  1|Clothes     |  $50|
| 4570|Mini Skirt A                                                  |  1|Clothes     |  $50|
| 4571|Mini Skirt D                                                  |  1|Clothes     |  $50|
| 4572|Moccasins Boots                                               |  1|Clothes     |  $50|
| 4573|Open collar longsleeves shirt C                               |  1|Clothes     |  $50|
| 4574|Open collar longsleeves shirt F                               |  1|Clothes     |  $50|
| 4575|Open collar longsleeves shirt H                               |  1|Clothes     |  $50|
| 4576|Open collar longsleeves shirt I                               |  1|Clothes     |  $50|
| 4580|Pants1 A                                                      |  1|Clothes     |  $50|
| 4581|Pants1 B                                                      |  1|Clothes     |  $50|
| 4582|Pants2 A                                                      |  1|Clothes     |  $50|
| 4583|Pants2 B                                                      |  1|Clothes     |  $50|
| 4584|Patched Pants                                                 |  1|Clothes     |  $50|
| 4585|Pencil Skirt A                                                |  1|Clothes     |  $50|
| 4586|Pencil Skirt D                                                |  1|Clothes     |  $50|
| 4587|Pencil Skirt E                                                |  1|Clothes     |  $50|
| 4588|Rocker Jeans                                                  |  1|Clothes     |  $50|
| 4589|S-Rolled Up Forest                                            |  1|Clothes     |  $50|
| 4590|S-Rolled Up Navy                                              |  1|Clothes     |  $50|
| 4591|S-Rolled Up Sand                                              |  1|Clothes     |  $50|
| 4592|Scrub Pants A                                                 |  1|Clothes     |  $50|
| 4593|Scrub Pants B                                                 |  1|Clothes     |  $50|
| 4594|Scrub Pants C                                                 |  1|Clothes     |  $50|
| 4595|Scrub Pants E                                                 |  1|Clothes     |  $50|
| 4596|Shirt B                                                       |  1|Clothes     |  $50|
| 4597|Shirt E                                                       |  1|Clothes     |  $50|
| 4598|Shirt-Standart Forest                                         |  1|Clothes     |  $50|
| 4599|Shirt-Standart Navy                                           |  1|Clothes     |  $50|
| 4600|Shirt-Standart Sand                                           |  1|Clothes     |  $50|
| 4601|Shirt-Tactical Forest                                         |  1|Clothes     |  $50|
| 4602|Shirt-Tactical Navy                                           |  1|Clothes     |  $50|
| 4603|Shirt-Tactical Sand                                           |  1|Clothes     |  $50|
| 4604|Ski Mask A                                                    |  1|Clothes     |  $50|
| 4605|Ski Mask B                                                    |  1|Clothes     |  $50|
| 4606|Skinny Pants C                                                |  1|Clothes     |  $50|
| 4607|Skinny Pants D                                                |  1|Clothes     |  $50|
| 4608|Slacks B                                                      |  1|Clothes     |  $50|
| 4609|Slacks C                                                      |  1|Clothes     |  $50|
| 4610|Sleeves Tops B                                                |  1|Clothes     |  $50|
| 4611|Sleeves Tops C                                                |  1|Clothes     |  $50|
| 4612|Sleeves Tops D                                                |  1|Clothes     |  $50|
| 4613|Slip-ons A                                                    |  1|Clothes     |  $50|
| 4614|Slip-ons B                                                    |  1|Clothes     |  $50|
| 4615|Slip-ons C                                                    |  1|Clothes     |  $50|
| 4616|Slit Skirt B                                                  |  1|Clothes     |  $50|
| 4617|Slit Skirt C                                                  |  1|Clothes     |  $50|
| 4618|Slit Skirt D                                                  |  1|Clothes     |  $50|
| 4619|Sneakers B                                                    |  1|Clothes     |  $50|
| 4620|Sneakers C                                                    |  1|Clothes     |  $50|
| 4621|Sneakers D                                                    |  1|Clothes     |  $50|
| 4622|Style 2                                                       |  1|Clothes     |  $50|
| 4623|Style 3                                                       |  1|Clothes     |  $50|
| 4624|Style 5                                                       |  1|Clothes     |  $50|
| 4625|Style 6                                                       |  1|Clothes     |  $50|
| 4626|T-shirt A                                                     |  1|Clothes     |  $50|
| 4627|T-shirt C                                                     |  1|Clothes     |  $50|
| 4628|T-shirt D                                                     |  1|Clothes     |  $50|
| 4629|Tank Top B                                                    |  1|Clothes     |  $50|
| 4630|Tank Top C                                                    |  1|Clothes     |  $50|
| 4631|Tank Top D                                                    |  1|Clothes     |  $50|
| 4632|Tank-Top Black                                                |  1|Clothes     |  $50|
| 4633|Tank Top Anime                                                |  1|Clothes     |  $50|
| 4634|TShirt Black                                                  |  1|Clothes     |  $50|
| 4635|TShirt Coyote                                                 |  1|Clothes     |  $50|
| 4636|Tucked Pants                                                  |  1|Clothes     |  $50|
| 4637|V Scrub Shirt A                                               |  1|Clothes     |  $50|
| 4638|Anime T Shirt                                                 |  1|Clothes     |  $50|
| 4639|White Gloves C                                                |  1|Clothes     |  $50|
| 4640|White Gloves D                                                |  1|Clothes     |  $50|
| 4641|Work Gloves A                                                 |  1|Clothes     |  $50|
| 4642|Work Gloves B                                                 |  1|Clothes     |  $50|
| 4643|Work Gloves C                                                 |  1|Clothes     |  $50|
| 4644|Lobster Hood                                                  |  1|Clothes     |  $50|
| 4645|Squirrel Hood                                                 |  1|Clothes     |  $50|
| 4646|Blue Scrub Shirt                                              |  1|Clothes     |  $50|
| 4647|Green Scrub Shirt                                             |  1|Clothes     |  $50|
| 4648|Yellow Scrub Shirt                                            |  1|Clothes     |  $50|
| 4649|Pink Scrub Shirt                                              |  1|Clothes     |  $50|
| 6001|Cloth                                                         | 20|Material    |  $10|
| 6002|Cotton                                                        | 50|Material    |   $5|
| 6003|Duct Tape                                                     | 20|Material    |  $30|
| 6004|Scrap Metal                                                   | 20|Material    |   $5|
| 6005|Hide                                                          | 20|Material    |   $5|
| 6006|Leather                                                       | 20|Material    |  $10|
| 6007|Marble                                                        | 20|Material    |  $50|
| 6008|Red Algae                                                     | 50|Food        |  $10|
| 6051|Orange Coral                                                  | 50|Meds        |  $10|
| 6052|Purple Flower                                                 | 50|Herb        |  $10|
| 6053|Red Flower                                                    | 50|Herb        |  $10|
| 6054|White Flower                                                  | 50|Herb        |  $10|
| 6055|Components                                                    | 10|Material    |  $50|
| 6056|Glass                                                         | 20|Material    |  $10|
| 6057|Fish Skin                                                     | 20|Material    |  $10|
| 6058|Rubber                                                        | 20|Material    |  $10|
| 6059|Shark Skin                                                    | 20|Material    |  $10|
| 6060|Electronic Parts                                              | 10|Material    | $150|
| 6061|Iron Ore                                                      | 10|Material    |  $10|
| 6062|Copper Ore                                                    | 10|Material    |  $10|
| 6101|Gun Parts                                                     | 10|Material    | $130|
| 6102|Ballistic Fiber                                               | 10|Material    | $160|
| 6103|Advanced Parts                                                | 10|Material    | $150|
| 6104|Quartz                                                        | 10|Material    |  $20|
| 6105|Anatase                                                       | 10|Material    |  $20|
| 6151|Sulfur                                                        | 10|Material    |   $5|
| 6152|Chemical Substance                                            | 10|Material    |  $50|
| 6153|Combustible Ice                                               | 10|Material    |  $20|
| 6154|High-efficiency alloy motor                                   |  5|Machine     | $200|
| 6200|Wood Plank                                                    | 50|Material    |   $5|
| 6201|Gasoline                                                      | 10|Material    |  $80|
| 6202|Charcoal                                                      |100|Material    |   $2|
| 6251|50 Cal Ammo                                                   |100|Ammo        |   $2|
| 6252|Black Powder                                                  | 50|Ammo        |   $3|
| 6253|Black Powder Ammo                                             | 50|Ammo        |   $6|
| 6254|Pistol Ammo                                                   |100|Ammo        |   $5|
| 6255|Rifle Ammo                                                    |100|Ammo        |   $6|
| 6256|Shotgun Ammo                                                  | 50|Ammo        |   $7|
| 6257|Arrow                                                         | 50|Weapon      |   $1|
| 6258|Bolt                                                          | 50|Weapon      |   $2|
| 6259|Sniper Ammo                                                   | 50|Ammo        |  $10|
| 6501|Crude Grenade                                                 |  5|Ammo        |  $80|
| 6502|Military Grenade                                              |  5|Ammo        | $150|
| 6503|Molotov                                                       |  5|Ammo        | $100|
| 6701|Bush Seed                                                     |100|Food        |   $2|
| 6702|Cabbage Seed                                                  |100|Food        |   $2|
| 6703|Cotton Seeds                                                  |100|Food        |   $5|
| 6704|Lemon Seeds                                                   |100|Food        |   $2|
| 6705|Strawberry Seeds                                              |100|Food        |   $2|
| 6803|Broken Metal Helme                                            | 20|Armor       | $100|
| 6804|Broken Army Vest                                              | 20|Armor       | $100|
| 6806|Broken Motorcycle Helmet                                      | 20|Armor       | $100|
| 6807|Broken Police Helmet                                          | 20|Armor       | $100|
| 6808|Broken Police Vest                                            | 20|Armor       | $100|
| 6809|Broken Special Force Armor                                    | 20|Armor       | $100|
| 6810|Broken Special Force Helmet                                   | 20|Armor       | $100|
| 6811|Broken GP20                                                   | 20|Weapon      | $100|
| 6812|Broken Hunting Rifle                                          | 20|Weapon      | $100|
| 6813|Broken PM                                                     | 20|Weapon      | $100|
| 6814|Broken Pump Shotgun                                           | 20|Weapon      | $100|
| 6815|Broken SMG                                                    | 20|Weapon      | $100|
| 6816|Broken AK47                                                   | 20|Weapon      | $100|
| 6817|Broken M14                                                    | 20|Weapon      | $100|
| 6818|Broken M16                                                    | 20|Weapon      | $100|
| 6819|Broken Old Bolt Action Rifle                                  | 20|Weapon      | $100|
| 6820|Broken DE                                                     | 20|Weapon      | $100|
| 6821|Broken Stun SMG                                               | 20|Weapon      | $100|
| 6822|Broken Mauser Pistol                                          | 20|Weapon      | $100|
| 6823|Broken LW 59                                                  | 20|Weapon      | $100|
| 6824|Broken US45 SMG                                               | 20|Weapon      | $100|
| 6825|Broken STG44                                                  | 20|Weapon      | $100|
| 6826|Broken SVD                                                    | 20|Weapon      | $100|
| 6827|Broken Double Barrel Shotgun                                  | 20|Weapon      | $100|
| 6828|Broken Vest3 Forest                                           | 20|Armor       | $100|
| 6834|Broken Skull Crusher                                          | 20|Weapon      | $100|
| 6835|Broken Machete                                                | 20|Weapon      | $100|
| 6836|Broken Combat Knife                                           | 20|Weapon      | $100|
| 7001|Torch                                                         |  1|Tools       |   $6|
| 7002|Seawater Bucket                                               |  1|Tools       |  $20|
| 7003|Water Bottle                                                  | 20|Tools       |  $10|
| 7004|Sack                                                          |  1|Tools       |  $30|
| 7005|Pickaxe                                                       |  1|Tools       |  $58|
| 7006|Reparing Hammer                                               |  1|Tools       |  $15|
| 7007|Binocular                                                     |  1|Goods       |  $50|
| 7008|Diving Fins                                                   |  1|Tools       |  $60|
| 7009|Fishing Rod                                                   |  1|Tools       |  $30|
| 7010|Flare                                                         | 20|Tools       |  $15|
| 7011|Backpack                                                      |  1|Tools       | $170|
| 7012|Battery                                                       |  1|Trade       | $350|
| 7013|HeadLight                                                     |  1|Tools       | $200|
| 7014|Alternative Gun Sight                                         |  1|Trade       |  $25|
| 7015|Metal Detector                                                |  1|Trade       | $120|
| 7016|UNDERWATER SCOOTER                                            |  1|Trade       | $500|
| 7017|Fishing Bait                                                  |100|Food        |   $1|
| 7018|Military Backpack                                             |  1|Tools       | $350|
| 7019|Scuba Diving Fins                                             |  1|Tools       | $200|
| 7020|Small Air Tank                                                |  1|Tools       | $120|
| 7021|Packing Box                                                   |  1|Tools       |  $10|
| 7022|Welding                                                       |  1|Tools       | $100|
| 7023|E2 Big Air Tank                                               |  1|Tools       | $413|
| 7025|Lithium Battery                                               |  1|Tools       | $339|
| 7026|Handcrafted Air tank                                          |  1|Tools       |  $50|
| 7027|SleepingBag                                                   |  1|Tools       | $100|
| 7028|Night vision device                                           |  1|Tools       | $500|
| 7029|DAQ Toolbox                                                   |  1|Tools       | $100|
| 7030|U2 BIG UNDERWATER SCOOTER                                     |  1|Tools       | $800|
| 7031|Precision iron armor plate                                    |  1|Tools       | $200|
| 7032|Kevlar armor plate                                            |  1|Tools       | $500|
| 7033|AmmunitionPouch                                               |  1|Tools       | $200|
| 7034|GrenadePouch                                                  |  1|Tools       | $200|
| 7035|Modern Weapons Kit                                            | 20|Gift        | $100|
|10001|Rope                                                          | 20|Material    |  $10|
|10003|Iron Ingot                                                    | 20|Material    |  $15|
|10004|Smokeless Powder                                              | 50|Material    |  $15|
|10005|Fine Wood Plank                                               | 20|Material    |  $40|
|10006|Copper Ingot                                                  | 20|Material    |  $20|
|10007|Paint                                                         | 20|Material    |  $30|
|10008|Steel Igot                                                    | 20|Material    |  $60|
|10009|Advanced Alloy                                                | 10|Material    | $100|
|10010|Polymer                                                       | 10|Material    | $100|
|10011|Titanium Strip                                                | 10|Material    | $102|
|10012|Modern Parts                                                  | 10|Material    | $150|
|10013|Modern Gun Parts                                              | 10|Material    | $120|
|10014|Plastic                                                       | 20|Material    | $100|
|10015|Fire Control system                                           | 10|Machine     | $300|
|10016|Rotor Blade                                                   | 10|Machine     | $300|
|10017|Turbocharger                                                  | 10|Machine     | $300|
|10018|Compressor                                                    | 10|Machine     | $300|
|10019|Hydraulic system                                              | 10|Machine     | $300|
|10020|Boat Engine                                                   | 10|Machine     | $300|
|15003|Blueprint Reinforced Structures                               |200|Blueprint   | $800|
|15004|Blueprint Jetski                                              |200|Blueprint   | $100|
|15006|Blueprint Marine Fast Boat                                    |200|Blueprint   | $100|
|15009|Blueprint Blue Patterned Chair                                |200|Blueprint   | $100|
|15010|Blueprint Concave Cabinet                                     |200|Blueprint   | $100|
|15011|Blueprint Desk                                                |200|Blueprint   | $100|
|15012|Blueprint Plaid Couch                                         |200|Blueprint   | $100|
|15013|Blueprint Red Cloth Sofa                                      |200|Blueprint   | $100|
|15014|Blueprint Solid Wood Cabinet                                  |200|Blueprint   | $100|
|15015|Blueprint Square Table                                        |200|Blueprint   | $100|
|15016|Blueprint Armchair                                            |200|Blueprint   | $100|
|15017|Blueprint Backrest Chair                                      |200|Blueprint   | $100|
|15018|Blueprint Black Leather Chair                                 |200|Blueprint   | $100|
|15019|Blueprint Black Leather Couch                                 |200|Blueprint   | $100|
|15020|Blueprint Collection Cabinet                                  |200|Blueprint   | $100|
|15021|Blueprint Counter                                             |200|Blueprint   | $100|
|15022|Blueprint Double Door Wardrobe                                |200|Blueprint   | $100|
|15023|Blueprint Double Shelf                                        |200|Blueprint   | $100|
|15024|Blueprint Fireplace                                           |200|Blueprint   | $100|
|15025|Blueprint Log Desk                                            |200|Blueprint   | $100|
|15026|Blueprint Makeup Table                                        |200|Blueprint   | $100|
|15027|Blueprint Round Glass Table                                   |200|Blueprint   | $100|
|15028|Blueprint Round Table                                         |200|Blueprint   | $100|
|15029|Blueprint Single bed                                          |200|Blueprint   | $100|
|15030|Blueprint Chaise Leather Couch                                |200|Blueprint   | $100|
|15031|Blueprint Crystal Chandelier                                  |200|Blueprint   | $100|
|15032|Blueprint Double                                              |200|Blueprint   | $100|
|15033|Blueprint European Chandelier                                 |200|Blueprint   | $100|
|15034|Blueprint European Leather Chair                              |200|Blueprint   | $100|
|15035|Blueprint Fish Tank                                           |200|Blueprint   | $100|
|15036|Blueprint Floor Tile (European)                               |200|Blueprint   | $100|
|15037|Blueprint Floor Tile (White Tiles)                            |200|Blueprint   | $100|
|15038|Blueprint Floor Tile (Wooden)                                 |200|Blueprint   | $100|
|15039|Blueprint French Sofa                                         |200|Blueprint   | $100|
|15040|Blueprint Green Leather Couch                                 |200|Blueprint   | $100|
|15041|Blueprint Hanging Clocks                                      |200|Blueprint   | $100|
|15042|Blueprint Modern Floor Lamp                                   |200|Blueprint   | $100|
|15043|Blueprint Modern Garden Lamp                                  |200|Blueprint   | $100|
|15044|Blueprint Modern Lamp Post                                    |200|Blueprint   | $100|
|15045|Blueprint Modern Wall Lamp                                    |200|Blueprint   | $100|
|15046|Blueprint Premium Fireplace                                   |200|Blueprint   | $100|
|15047|Blueprint Premium Fireplace                                   |200|Blueprint   | $100|
|15048|Blueprint TV                                                  |200|Blueprint   | $100|
|15049|Blueprint Vintage Leather Couch                               |200|Blueprint   | $100|
|15050|Blueprint Wallpaper (Blue)                                    |200|Blueprint   | $100|
|15051|Blueprint Wallpaper (Green)                                   |200|Blueprint   | $100|
|15052|Blueprint Wallpaper (Yellow)                                  |200|Blueprint   | $100|
|15054|Blueprint Jetstream Bowrider                                  |200|Blueprint   | $100|
|15055|Blueprint Military Backpack                                   |200|Blueprint   | $100|
|15057|Blueprint Large Generator                                     |200|Blueprint   | $100|
|15058|Blueprint Military Grenade                                    |200|Blueprint   | $100|
|15059|Blueprint Leather Suitcase                                    |200|Blueprint   | $100|
|15061|Blueprint Fridge                                              |200|Blueprint   | $100|
|15062|Blueprint Glass Wall                                          |200|Blueprint   | $100|
|15065|Blueprint Advanced Purifier                                   |200|Blueprint   | $100|
|15067|Blueprint Flare                                               |200|Blueprint   | $100|
|15069|Blueprint Safe                                                |200|Blueprint   | $100|
|15087|Blueprint Big Air Tank                                        |200|Blueprint   | $100|
|15091|Blueprint Homemade Revolver                                   |200|Blueprint   | $100|
|15092|Blueprint Portable Inflatable Bottle                          |200|Blueprint   | $100|
|15093|Blueprint Portable Repair Tools                               |200|Blueprint   | $100|
|15095|Blueprint Small Generator                                     |200|Blueprint   | $100|
|15098|Blueprint lithium battery                                     |200|Blueprint   | $100|
|15102|Blueprint Solar panel                                         |200|Blueprint   | $100|
|15104|Blueprint Harpoon Guns                                        |200|Blueprint   | $100|
|15105|Blueprint DAQ Toolbox                                         |200|Blueprint   | $100|
|15106|Blueprint Crude Grenade                                       |200|Blueprint   | $100|
|15107|Blueprint Night vision device                                 |200|Blueprint   | $100|
|15108|Blueprint Chainsaw                                            |200|Blueprint   | $100|
|15109|Blueprint Molotov                                             |200|Blueprint   | $100|
|15110|Blueprint BIG UNDERWATER SCOOTER                              |200|Blueprint   | $100|
|15111|Blueprint Precision iron armor plate                          |200|Blueprint   | $100|
|15112|Blueprint AmmunitionPouch                                     |200|Blueprint   | $100|
|15113|Blueprint GrenadePouch                                        |200|Blueprint   | $100|
|15115|Blueprint Auto Turret                                         |200|Blueprint   | $100|
|15116|Blueprint Underwater planting pot                             |200|Blueprint   | $100|
|15117|Blueprint Kevlar armor plate                                  |200|Blueprint   | $100|
|15118|Blueprint Fishpond                                            |200|Blueprint   | $100|
|15119|Blueprint Anti-infantry mines                                 |200|Blueprint   | $100|
|15120|Blueprint Underwater planting pot                             |200|Blueprint   | $100|
|15121|Blueprint Masonry                                             |200|Blueprint   | $100|
|16001|Blueprint double-barreled scrap iron casing                   |200|Blueprint   |  $60|
|16002|Blueprint double-barreled fine iron receiver                  |200|Blueprint   | $100|
|16003|Blueprint capitalist times's scrap iron barrel                |200|Damaged BP  | $100|
|16004|Blueprint capitalist times's iron barrel                      |200|Damaged BP  | $100|
|16005|Blueprint scrap iron sight                                    |200|Blueprint   |  $20|
|16006|Blueprint PM scrap iron receiver                              |200|Blueprint   |  $20|
|16007|Blueprint PM iron casing                                      |200|Blueprint   |  $40|
|16008|Blueprint PM alloy receiver                                   |200|Blueprint   |  $80|
|16009|Blueprint short barrel of capitalist times's pistol           |200|Damaged BP  | $100|
|16010|Blueprint long barrel of capitalist times's pistol            |200|Damaged BP  | $100|
|16011|Blueprint calibrated barrel of capitalist times's pistol      |200|Damaged BP  | $100|
|16012|Blueprint red dot sight                                       |200|Blueprint   |  $40|
|16013|Blueprint pistol magazine                                     |200|Blueprint   |  $20|
|16014|Blueprint long magazines for pistol                           |200|Blueprint   |  $40|
|16015|Blueprint GP20 scrap iron casing                              |200|Blueprint   |  $40|
|16016|Blueprint GP20 iron receiver                                  |200|Blueprint   |  $80|
|16017|Blueprint GP20 alloy receiver                                 |200|Blueprint   | $140|
|16018|Blueprint pistol drums                                        |200|Blueprint   |  $80|
|16019|Blueprint Mauser scrap iron receiver                          |200|Blueprint   |  $20|
|16020|Blueprint Mauser iron receiver                                |200|Blueprint   |  $40|
|16021|Blueprint WWII pistol short barrel                            |200|Damaged BP  | $100|
|16022|Blueprint WWII pistol long barrel                             |200|Damaged BP  | $100|
|16023|Blueprint WWII pistol calibrated barrel                       |200|Damaged BP  | $100|
|16025|Blueprint Desert Eagle scrap iron receiver                    |200|Blueprint   |  $60|
|16026|Blueprint Desert Eagle Iron Receiver                          |200|Blueprint   | $100|
|16027|Blueprint Desert Eagle alloy receiver                         |200|Blueprint   | $180|
|16028|Blueprint Desert Eagle high-tech receiver                     |200|Blueprint   | $400|
|16029|Blueprint short barrel of a modern pistol                     |200|Damaged BP  | $100|
|16030|Blueprint long barrel of a modern pistol                      |200|Damaged BP  | $100|
|16031|Blueprint calibrated barrel of modern pistol                  |200|Damaged BP  | $100|
|16032|Blueprint high-powered pistol magazine                        |200|Blueprint   | $200|
|16033|Blueprint pump-type scrap iron casing                         |200|Blueprint   | $100|
|16034|Blueprint pump-type fine iron casing                          |200|Blueprint   | $160|
|16035|Blueprint pump-type alloy casing                              |200|Blueprint   | $300|
|16036|Blueprint pump-type high-tech casing                          |200|Blueprint   | $600|
|16037|Blueprint capitalist times's alloy barrel                     |200|Damaged BP  | $100|
|16038|Blueprint capitalist times's high-tech barrel                 |200|Damaged BP  | $100|
|16039|Blueprint scrap iron stock                                    |200|Blueprint   |  $20|
|16040|Blueprint iron stock                                          |200|Blueprint   |  $60|
|16041|Blueprint alloy stock                                         |200|Blueprint   | $100|
|16042|Blueprint high-tech stock                                     |200|Blueprint   | $200|
|16043|Blueprint SMG scrap iron casing                               |200|Blueprint   |  $60|
|16044|Blueprint SMG fine iron casing                                |200|Blueprint   | $140|
|16045|Blueprint SMG alloy casing                                    |200|Blueprint   | $240|
|16046|Blueprint submachine gun magazine                             |200|Blueprint   |  $20|
|16047|Blueprint long magazine for submachine gun                    |200|Blueprint   |  $40|
|16048|Blueprint submachine gun drum                                 |200|Blueprint   | $100|
|16049|Blueprint magazines of hollow-point bullets for submachine gun|200|Blueprint   | $300|
|16050|Blueprint Stern scrap metal receiver                          |200|Blueprint   |  $20|
|16051|Blueprint Stern iron receiver                                 |200|Blueprint   |  $40|
|16052|Blueprint WWII scrap iron barrel                              |200|Damaged BP  | $100|
|16053|Blueprint WWII iron barrel                                    |200|Damaged BP  | $100|
|16054|Blueprint huntingrifle scrap iron receiver                    |200|Blueprint   |  $40|
|16055|Blueprint huntingrifle iron receiver                          |200|Blueprint   | $100|
|16056|Blueprint sniper rifle standard magazine                      |200|Blueprint   |  $20|
|16057|Blueprint bolt-action rifle scrap iron receiver               |200|Blueprint   |  $60|
|16058|Blueprint bolt-action rifle iron receiver                     |200|Blueprint   | $140|
|16059|Blueprint bolt-action rifle alloy receiver                    |200|Blueprint   | $300|
|16060|Blueprint M14 scrap iron receiver                             |200|Blueprint   | $100|
|16061|Blueprint M14 stainless iron receiver                         |200|Blueprint   | $200|
|16062|Blueprint M14 alloy receiver                                  |200|Blueprint   | $400|
|16063|Blueprint WWII alloy barrel                                   |200|Damaged BP  | $100|
|16064|Blueprint doubles                                             |200|Blueprint   | $100|
|16065|Blueprint long magazines for sniper rifle                     |200|Blueprint   | $100|
|16066|Blueprint SVD sniper rifle scrap iron receiver                |200|Blueprint   | $140|
|16067|Blueprint SVD sniper rifle iron receiver                      |200|Blueprint   | $300|
|16068|Blueprint SVD sniper rifle alloy receiver                     |200|Blueprint   | $600|
|16069|Blueprint SVD sniper rifle high-tech receiver                 |200|Blueprint   |$1000|
|16070|Blueprint modern scrap iron barrel                            |200|Damaged BP  | $100|
|16071|Blueprint modern iron barrel                                  |200|Damaged BP  | $100|
|16072|Blueprint modern alloy barrel                                 |200|Damaged BP  | $100|
|16073|Blueprint modern high-tech barrel                             |200|Damaged BP  | $100|
|16074|Blueprint quadruple                                           |200|Blueprint   | $200|
|16075|Blueprint sniper rifle armor-piercing magazine                |200|Blueprint   | $200|
|16076|Blueprint AK scrap iron receiver                              |200|Blueprint   | $100|
|16077|Blueprint AK iron receiver                                    |200|Blueprint   | $140|
|16078|Blueprint AK alloy receiver                                   |200|Blueprint   | $300|
|16079|Blueprint AK high-tech receiver                               |200|Blueprint   | $600|
|16080|Blueprint automatic rifle short magazine                      |200|Blueprint   |  $20|
|16081|Blueprint long magazine for automatic rifle                   |200|Blueprint   |  $60|
|16082|Blueprint automatic rifle drum                                |200|Blueprint   | $100|
|16083|Blueprint LW59 scrap iron casing                              |200|Blueprint   | $200|
|16084|Blueprint LW59 iron casing                                    |200|Blueprint   | $300|
|16085|Blueprint LW59 alloy casing                                   |200|Blueprint   | $500|
|16086|Blueprint LW59 high-tech receiver                             |200|Blueprint   | $800|
|16087|Blueprint M16 scrap iron casing                               |200|Blueprint   | $100|
|16088|Blueprint M16 iron receiver                                   |200|Blueprint   | $140|
|16089|Blueprint M16 alloy receiver                                  |200|Blueprint   | $300|
|16090|Blueprint M16 high-tech receiver                              |200|Blueprint   | $600|
|16091|Blueprint STG44 scrap iron receiver                           |200|Blueprint   |  $60|
|16092|Blueprint STG44 fine iron receiver                            |200|Blueprint   | $100|
|16093|Blueprint STG44 alloy receiver                                |200|Blueprint   | $200|
|16094|Blueprint US45 scrap iron receiver                            |200|Blueprint   | $200|
|16095|Blueprint US45 stainless iron receiver                        |200|Blueprint   | $300|
|16096|Blueprint US45 alloy receiver                                 |200|Blueprint   | $500|
|16097|Blueprint US45 high-tech receiver                             |200|Blueprint   | $800|
|16098|Blueprint Basic Barrel                                        |200|Blueprint   |  $20|
|16099|Blueprint short barrel                                        |200|Blueprint   |  $40|
|16100|Blueprint Long Barrel                                         |200|Blueprint   |  $40|
|16101|Blueprint Triple Shotgun Barrels                              |200|Blueprint   |   $0|
|16102|Blueprint calibration of barrel internals                     |200|Blueprint   |  $60|
|16103|Blueprint rapid-fire barrel internals                         |200|Blueprint   |  $60|
|16104|Blueprint slow-fire barrel built-in                           |200|Blueprint   |  $60|
|16105|Blueprint lightweight barrel built-in                         |200|Blueprint   |  $60|
|16106|Blueprint rifled barrel built-in                              |200|Blueprint   |  $60|
|16107|Blueprint Silencer                                            |200|Blueprint   |  $60|
|16108|Blueprint Horizontal flame arrester                           |200|Blueprint   |  $60|
|16109|Blueprint Longitudinal Flame Arrester                         |200|Blueprint   |  $60|
|16110|Blueprint Omni-directional flame arrester                     |200|Blueprint   |  $60|
|16111|Blueprint infrared sighting                                   |200|Blueprint   |  $60|
|16112|Blueprint Main Weapon Grip Type 1                             |200|Blueprint   |  $60|
|16113|Blueprint Main Weapon Grip Type 2                             |200|Blueprint   |  $60|
|16114|Blueprint Main Weapon Grip Type 3                             |200|Blueprint   |  $60|
|16115|Blueprint Main Weapon Grip Type 4                             |200|Blueprint   |  $60|
|16116|Blueprint grenades under automatic rifles                     |200|Blueprint   |   $0|
|16117|Blueprint shotgun under automatic rifle                       |200|Blueprint   |   $0|
|16118|Blueprint modern pistols with grenades underneath             |200|Blueprint   |   $0|
|16119|Blueprint Fully automaticsemi-automatic firing modes          |200|Damaged BP  | $100|
|16120|Blueprint full autocontinuous fire mode                       |200|Damaged BP  | $100|
|16121|Blueprint Semi-automaticContinuous Fire Mode                  |200|Damaged BP  | $100|
|16122|Blueprint full automatic fire mode                            |200|Damaged BP  | $100|
|16123|Blueprint semi-automatic fire mode                            |200|Damaged BP  | $100|
|16124|Blueprint High-precision sniper rifle quadruple scope         |200|Damaged BP  | $600|
|20001|Cigar                                                         | 10|Goods       | $200|
|20002|Expensive Wine                                                |  5|Goods       | $200|
|20003|High-end  Perfume                                             |  5|Goods       | $300|
|20004|High-end Watch                                                |  5|Goods       | $400|
|20005|Jewelry                                                       |  5|Goods       |$1000|
|20006|Magazine                                                      | 10|Goods       | $100|
|20007|Mobile Phone                                                  |  5|Goods       | $500|
|20009|Zippo                                                         | 10|Goods       | $300|
|20010|Patterned Circular Porcelain                                  |  5|Decoration  | $100|
|22001|Algal Rug                                                     |  5|Decoration  | $100|
|22002|Bike Toy                                                      |  5|Decoration  | $100|
|22003|Blue Oil Bottle                                               |  5|Decoration  | $100|
|22004|Candlestick                                                   |  5|Decoration  | $100|
|22005|Carpet                                                        |  5|Decoration  | $100|
|22006|Ceramic Bottle                                                |  5|Decoration  | $100|
|22007|Colored Rug                                                   |  5|Decoration  | $100|
|22008|Cooling Chair                                                 |  5|Decoration  | $100|
|22009|Darts Target                                                  |  5|Decoration  | $200|
|22010|Decorative Plate Stand                                        |  5|Decoration  | $100|
|22011|Delicate Chandelier                                           |  5|Decoration  | $300|
|22012|Desk Clock                                                    |  5|Decoration  | $150|
|22013|Easel Covered                                                 |  5|Decoration  | $100|
|22014|Exquisite Wooden Shelf                                        |  5|Decoration  | $100|
|22015|Exquisite Wooden Table                                        |  5|Decoration  | $100|
|22016|Figure Rug                                                    |  5|Decoration  | $100|
|22017|Fish Statue                                                   |  5|Decoration  | $100|
|22018|Floor Mirror                                                  |  5|Decoration  | $100|
|22019|Game Console                                                  |  5|Decoration  | $150|
|22020|Globe                                                         |  5|Decoration  | $100|
|22021|Handbag                                                       |  5|Decoration  | $100|
|22022|Hanger                                                        |  5|Decoration  | $100|
|22023|Horse Statue                                                  |  5|Decoration  | $120|
|22024|Horse Toy                                                     |  5|Decoration  | $100|
|22025|Household Desk Lamp                                           |  5|Decoration  | $100|
|22026|Jewelry Casket                                                |  5|Decoration  | $100|
|22027|Lamp Table                                                    |  5|Decoration  | $100|
|22028|Lamp Wall                                                     |  5|Decoration  | $150|
|22029|Lantern                                                       |  5|Decoration  | $100|
|22030|Large Vase                                                    |  5|Decoration  | $150|
|22031|Mirror                                                        |  5|Decoration  | $100|
|22032|Model Train                                                   |  5|Decoration  | $100|
|22033|Moire Ceramic                                                 |  5|Decoration  | $100|
|22034|Moire                                                         |  5|Decoration  | $100|
|22035|Neon Bestdayever                                              |  5|Decoration  | $200|
|22036|Neon Cat                                                      |  5|Decoration  | $200|
|22037|Neon Gamer                                                    |  5|Decoration  | $200|
|22038|Neon Guitar                                                   |  5|Decoration  | $200|
|22039|Neon Hotel                                                    |  5|Decoration  | $200|
|22040|Neon Money                                                    |  5|Decoration  | $200|
|22041|Neon Nightclub                                                |  5|Decoration  | $200|
|22042|Neon Peace                                                    |  5|Decoration  | $200|
|22043|Neon Route66                                                  |  5|Decoration  | $200|
|22044|Neon Woman 1                                                  |  5|Decoration  | $300|
|22045|Neon Woman 2                                                  |  5|Decoration  | $300|
|22046|Oil Painting(Birds Singing and Flowers Fragrant)              |  5|Decoration  | $200|
|22047|Oil Painting(Comfortable)                                     |  5|Decoration  | $200|
|22048|Oil Painting(Deep in the Valley)                              |  5|Decoration  | $200|
|22049|Oil Painting(Desert Oasis)                                    |  5|Decoration  | $200|
|22050|Oil Painting(Divine Tree)                                     |  5|Decoration  | $200|
|22051|Oil Painting(Forgotten Castle)                                |  5|Decoration  | $200|
|22052|Oil Painting(Fox in Birch Forest)                             |  5|Decoration  | $200|
|22053|Oil Painting(Happy Childhood)                                 |  5|Decoration  | $200|
|22054|Oil Painting(King Castle)                                     |  5|Decoration  | $200|
|22055|Oil Painting(Landscape Dusk)                                  |  5|Decoration  | $200|
|22056|Oil Painting(Lotus)                                           |  5|Decoration  | $200|
|22057|Oil Painting(Rural Life)                                      |  5|Decoration  | $200|
|22058|Oil Painting(Small Stream in the Forest)                      |  5|Decoration  | $200|
|22059|Oil Painting(Valley Dusk)                                     |  5|Decoration  | $200|
|22060|Oil Painting(Wilderness Scenery)                              |  5|Decoration  | $200|
|22061|Old Clock                                                     |  5|Decoration  | $200|
|22062|Old Desk Lamp                                                 |  5|Decoration  | $100|
|22063|Old Style Storage Shelf                                       |  5|Decoration  | $100|
|22064|Owl Toy                                                       |  5|Decoration  | $100|
|22065|Pan                                                           |  5|Decoration  | $100|
|22066|Patterned Blue and White Pottery                              |  5|Decoration  | $200|
|22067|Patterned Bronze Ware                                         |  5|Decoration  | $200|
|22068|Rubber Duck                                                   |  5|Decoration  | $500|
|22069|Plane Toy                                                     |  5|Decoration  | $100|
|22070|Racing Model                                                  |  5|Decoration  | $100|
|22071|Radio                                                         |  5|Decoration  | $100|
|22072|Record Player Disk 1                                          |  5|Decoration  | $100|
|22073|Record Player Disk 2                                          |  5|Decoration  | $100|
|22074|Record Player Disk 3                                          |  5|Decoration  | $100|
|22075|Red Rug                                                       |  5|Decoration  | $200|
|22076|Red Sofa Chair                                                |  5|Decoration  | $300|
|22077|Retro Rug                                                     |  5|Decoration  | $200|
|22078|Rug                                                           |  5|Decoration  | $200|
|22079|Sand Watch                                                    |  5|Decoration  | $100|
|22080|Scales                                                        |  5|Decoration  | $100|
|22081|Small Globe                                                   |  5|Decoration  | $150|
|22082|Sofa Chair                                                    |  5|Decoration  | $300|
|22083|Solid Wood Shelf                                              |  5|Decoration  | $150|
|22084|Stone Elephant                                                |  5|Decoration  | $100|
|22085|Striped Rug                                                   |  5|Decoration  | $100|
|22086|Sword Wall                                                    |  5|Decoration  | $300|
|22087|Telephone Old                                                 |  5|Decoration  | $300|
|22088|Toy Bear                                                      |  5|Decoration  | $200|
|22089|Vanity Mirror                                                 |  5|Decoration  | $200|
|22090|Vinyl Machine                                                 |  5|Decoration  | $400|
|22091|Violin                                                        |  5|Decoration  | $300|
|22092|Wall Clock                                                    |  5|Decoration  | $300|
|22093|Wallet                                                        |  5|Decoration  | $100|
|22094|Wanghai Reef                                                  |  5|Decoration  | $100|
|22095|Weighing Scale                                                |  5|Decoration  | $100|
|22096|Wooden Chair                                                  |  5|Decoration  | $150|
|22097|Ballons Halloween                                             |  5|Decoration  | $300|
|22098|Ballons Happy                                                 |  5|Decoration  | $300|
|22099|Black Cat Statue                                              |  5|Decoration  |$2500|
|22100|Broken Tombstone                                              |  5|Decoration  |$1000|
|22101|Candles                                                       |  5|Decoration  | $100|
|22102|Coffin                                                        |  5|Decoration  |$1000|
|22103|Creepy Hand                                                   |  5|Decoration  |$1000|
|22104|Death Statue                                                  |  5|Decoration  |$2500|
|22105|Dragon Statue                                                 |  5|Decoration  |$2500|
|22106|Goest Decor                                                   |  5|Decoration  |$2500|
|22107|HauntedHalloween                                              |  5|Decoration  |$1000|
|22108|Large Spider                                                  |  5|Decoration  | $500|
|22109|Neon Ghost                                                    |  5|Decoration  | $500|
|22110|Neon Pumpkin                                                  |  5|Decoration  | $500|
|22111|Old Candle Holder                                             |  5|Decoration  |$1500|
|22112|Pumpkin Dead                                                  |  5|Decoration  | $500|
|22113|Pumpkin Evil                                                  |  5|Decoration  | $500|
|22114|Pumpkin Grin                                                  |  5|Decoration  | $500|
|22115|Pumpkin Malice                                                |  5|Decoration  | $500|
|22116|Pumpkin Round                                                 |  5|Decoration  | $500|
|22117|Pumpkin Sad                                                   |  5|Decoration  | $500|
|22118|Pumpkin Short                                                 |  5|Decoration  | $500|
|22119|Pumpkin Tall                                                  |  5|Decoration  | $500|
|22120|Small Spider                                                  |  5|Decoration  | $500|
|22121|Square Tombstone                                              |  5|Decoration  |$1500|
|22122|Vampire Statue                                                |  5|Decoration  |$2500|
|22123|Voodoo Doll                                                   |  5|Decoration  | $500|
|22124|Witch Cauldron                                                |  5|Decoration  |$1000|
|24001|double-pipe scrap iron casing                                 |100|Weapon      |  $60|
|24002|double-barreled fine iron receiver                            |100|Weapon      | $100|
|24003|capitalist times's scrap iron barrel                          |100|Damaged BP  | $100|
|24004|capitalist times's iron barrel                                |100|Damaged BP  | $100|
|24005|scrap iron sight                                              |100|Weapon      |  $20|
|24006|PM scrap iron receiver                                        |100|Weapon      |  $20|
|24007|PM iron casing                                                |100|Weapon      |  $40|
|24008|PM alloy receiver                                             |100|Weapon      |  $80|
|24009|short barrel of capitalist times's pistol                     |100|Damaged BP  | $100|
|24010|long barrel of capitalist times's pistol                      |100|Damaged BP  | $100|
|24011|calibrated barrel of capitalist times's pistol                |100|Damaged BP  | $100|
|24012|red dot sight                                                 |100|Weapon      |  $40|
|24013|pistol magazine                                               |100|Weapon      |  $20|
|24014|long magazines for pistol                                     |100|Weapon      |  $40|
|24015|GP20 scrap iron casing                                        |100|Weapon      |  $40|
|24016|GP20 iron receiver                                            |100|Weapon      |  $80|
|24017|GP20 alloy receiver                                           |100|Weapon      | $140|
|24018|pistol drums                                                  |100|Weapon      |  $80|
|24019|Mauser scrap iron receiver                                    |100|Weapon      |  $20|
|24020|Mauser iron receiver                                          |100|Weapon      |  $40|
|24021|WWII pistol short barrel                                      |100|Damaged BP  | $100|
|24022|WWII pistol long barrel                                       |100|Damaged BP  | $100|
|24023|WWII pistol calibrated barrel                                 |100|Damaged BP  | $100|
|24025|Desert Eagle scrap iron receiver                              |100|Weapon      |  $60|
|24026|Desert Eagle Iron Receiver                                    |100|Weapon      | $100|
|24027|Desert Eagle alloy receiver                                   |100|Weapon      | $180|
|24028|Desert Eagle high-tech receiver                               |100|Weapon      | $400|
|24029|short barrel of a modern pistol                               |100|Damaged BP  | $100|
|24030|long barrel of a modern pistol                                |100|Damaged BP  | $100|
|24031|calibrated barrel of modern pistol                            |100|Damaged BP  | $100|
|24032|high-powered pistol magazine                                  |100|Weapon      | $200|
|24033|pump-type scrap iron casing                                   |100|Weapon      | $100|
|24034|pump-type fine iron casing                                    |100|Weapon      | $160|
|24035|pump-type alloy casing                                        |100|Weapon      | $240|
|24036|pump-type high-tech casing                                    |100|Weapon      | $400|
|24037|capitalist times's alloy barrel                               |100|Damaged Comp| $100|
|24038|capitalist times's high-tech barrel                           |100|Damaged Comp| $100|
|24039|scrap iron stock                                              |100|Weapon      |  $20|
|24040|iron stock                                                    |100|Weapon      |  $60|
|24041|alloy stock                                                   |100|Weapon      | $100|
|24042|high-tech stock                                               |100|Weapon      | $200|
|24043|SMG scrap iron casing                                         |100|Weapon      |  $60|
|24044|SMG fine iron casing                                          |100|Weapon      | $140|
|24045|SMG alloy casing                                              |100|Weapon      | $240|
|24046|submachine gun magazine                                       |100|Weapon      |  $20|
|24047|long magazine for submachine gun                              |100|Weapon      |  $40|
|24048|submachine gun drum                                           |100|Weapon      | $100|
|24049|magazines of hollow-point bullets for submachine gun          |100|Weapon      | $300|
|24050|Stern scrap metal receiver                                    |100|Weapon      |  $20|
|24051|Stern iron receiver                                           |100|Weapon      |  $40|
|24052|WWII scrap iron barrel                                        |100|Damaged BP  | $100|
|24053|WWII iron barrel                                              |100|Damaged BP  | $100|
|24054|huntingrifle scrap iron receiver                              |100|Weapon      |  $40|
|24055|huntingrifle iron receiver                                    |100|Weapon      | $100|
|24056|sniper rifle standard magazine                                |100|Weapon      |  $20|
|24057|bolt-action rifle scrap iron receiver                         |100|Weapon      |  $60|
|24058|bolt-action rifle iron receiver                               |100|Weapon      | $140|
|24059|bolt-action rifle alloy receiver                              |100|Weapon      | $300|
|24060|M14 scrap iron receiver                                       |100|Weapon      | $100|
|24061|M14 stainless iron receiver                                   |100|Weapon      | $200|
|24062|M14 alloy receiver                                            |100|Weapon      | $400|
|24063|WWII alloy barrel                                             |100|Damaged BP  | $100|
|24064|doubles                                                       |100|Weapon      | $100|
|24065|long magazines for sniper rifle                               |100|Weapon      | $100|
|24066|SVD sniper rifle scrap iron receiver                          |100|Weapon      | $140|
|24067|SVD sniper rifle iron receiver                                |100|Weapon      | $300|
|24068|SVD sniper rifle alloy receiver                               |100|Weapon      | $600|
|24069|SVD sniper rifle high-tech receiver                           |100|Weapon      |$1000|
|24070|modern scrap iron barrel                                      |100|Damaged BP  | $100|
|24071|modern iron barrel                                            |100|Damaged BP  | $100|
|24072|modern alloy barrel                                           |100|Damaged BP  | $100|
|24073|modern high-tech barrel                                       |100|Weapon      | $100|
|24074|quadruple                                                     |100|Weapon      | $200|
|24075|sniper rifle armor-piercing magazine                          |100|Weapon      | $200|
|24076|AK scrap iron receiver                                        |100|Weapon      | $100|
|24077|AK iron receiver                                              |100|Weapon      | $140|
|24078|AK alloy receiver                                             |100|Weapon      | $300|
|24079|AK high-tech receiver                                         |100|Weapon      | $600|
|24080|automatic rifle short magazine                                |100|Weapon      |  $20|
|24081|long magazine for automatic rifle                             |100|Weapon      |  $60|
|24082|automatic rifle drum                                          |100|Weapon      | $100|
|24083|LW59 scrap iron casing                                        |100|Weapon      | $200|
|24084|LW59 iron casing                                              |100|Weapon      | $300|
|24085|LW59 alloy casing                                             |100|Weapon      | $500|
|24086|LW59 high-tech receiver                                       |100|Weapon      | $800|
|24087|M16 scrap iron casing                                         |100|Weapon      | $100|
|24088|M16 iron receiver                                             |100|Weapon      | $140|
|24089|M16 alloy receiver                                            |100|Weapon      | $300|
|24090|M16 high-tech receiver                                        |100|Weapon      | $600|
|24091|STG44 scrap iron receiver                                     |100|Weapon      |  $60|
|24092|STG44 fine iron receiver                                      |100|Weapon      | $100|
|24093|STG44 alloy receiver                                          |100|Weapon      | $200|
|24094|US45 scrap iron receiver                                      |100|Weapon      | $200|
|24095|US45 stainless iron receiver                                  |100|Weapon      | $300|
|24096|US45 alloy receiver                                           |100|Weapon      | $500|
|24097|US45 high-tech receiver                                       |100|Weapon      | $800|
|24098|Basic Barrels                                                 |100|Weapon      |  $20|
|24099|Short barrels                                                 |100|Weapon      |  $40|
|24100|long gun barrel                                               |100|Weapon      |  $40|
|24101|Triple shotgun barrels                                        |100|Weapon      |   $0|
|24102|Built-in calibration barrel                                   |100|Weapon      |  $80|
|24103|Rapid-fire barrel Built-in                                    |100|Weapon      |  $80|
|24104|Slow Firing Barrel Built-In                                   |100|Weapon      |  $80|
|24105|Lightweight barrel built in                                   |100|Weapon      |  $80|
|24106|Rifled barrel built in                                        |100|Weapon      |  $80|
|24107|silencers                                                     |100|Weapon      |  $80|
|24108|Horizontal flame arrester                                     |100|Weapon      |  $80|
|24109|longitudinal flame arrester                                   |100|Weapon      |  $80|
|24110|omnidirectional flame arrester                                |100|Weapon      |  $80|
|24111|infrared sight                                                |100|Weapon      |  $80|
|24112|Main weapon grip type 1                                       |100|Weapon      |  $80|
|24113|Main weapon grip type 2                                       |100|Weapon      |  $80|
|24114|Main weapon grip type 3                                       |100|Weapon      |  $80|
|24115|Main weapon grip type 4                                       |100|Weapon      |  $80|
|24116|Grenades under automatic rifles                               |100|Weapon      | $150|
|24117|Shotgun under automatic rifle                                 |100|Weapon      | $150|
|24118|Modern pistol with grenade underneath                         |100|Weapon      | $150|
|24119|Fullsemi-automatic firing mode                                |100|Damaged BP  | $100|
|24120|Full AutoContinuous Fire Mode                                 |100|Damaged BP  | $100|
|24121|Semi-automaticContinuous Fire Mode                            |100|Damaged BP  | $100|
|24122|Fully automatic firing mode                                   |100|Damaged BP  | $100|
|24123|Semi-automatic fire mode                                      |100|Damaged BP  | $100|
|24124|High precision quadruple scope                                |100|Weapon      | $600|
|24125|VSS receiver                                                  |100|Weapon      | $300|
|24126|Supernova receiver                                            |100|Weapon      | $300|
|24127|FAMAS receiver                                                |100|Weapon      | $300|
|24128|AUG receiver                                                  |100|Weapon      | $300|
|24129|AK12 receiver                                                 |100|Weapon      | $300|

# Locations

The player on the starter island location:

```json
			"lastPresentWorldPosition" : {
				"x" : -1919.0,
				"y" :    30.0,
				"z" :   -19.0
			},
```

To warp the player to a trader in my savegame:

```json
			"lastPresentWorldPosition" : {
				"x" : -1931.0,
				"y" :    30.0,
				"z" :   314.0
			},
```

# Blueprint in Inventory

To have the first blueprint, 15003, _Blueprint Reinforced Structures_ in your inventory:

```json
					{
						"itemID" : 15003,
						"amount" : 1,
						"condition" : 100.000008,
						"itemProperties" : {
						}
					}
```

# Learned Blueprints

Blueprints you have learned are stored in a simple array of Item IDs.

```json
			"learnedBlueprints" : [
				15015,15003,15004,15006
			],
```

# 0.5.10 to 0.5.11 Changes

* Updated Item: 3008
  * **OLD:**  "ResourceName": "Assets/Prefabs/Temp/Temp/B1_Herbal Energy Drink.prefab"
  * **NEW:** "ResourceName": "Assets/Resources/Items/Food/Modern Food/Energy Drink.prefab"

* Updated Item: 15055

  **OLD:** "ResourceName": ""
  **NEW:** "ResourceName": "Assets/Resources/Items/Blueprints/4/Blueprint Military Backpack.prefab"

* New Items: 15121, 22097-22124

```
    "ID": 15121,
    "ResourceName": "Assets/Resources/Items/Blueprints/Temp/Blueprint Masonry.prefab",
    "StackaMount": 200,
    "Price": 100,
    "RecoveryPrice": 25,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 0,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },

    "ID": 22097,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Ballons Halloween.prefab",
    "StackaMount": 5,
    "Price": 300,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 3,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22098,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Ballons Happy.prefab",
    "StackaMount": 5,
    "Price": 300,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 3,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22099,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Black Cat Statue.prefab",
    "StackaMount": 5,
    "Price": 2500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 25,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22100,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Broken Tombstone.prefab",
    "StackaMount": 5,
    "Price": 1000,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22101,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Candles.prefab",
    "StackaMount": 5,
    "Price": 100,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 1,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22102,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Coffin.prefab",
    "StackaMount": 5,
    "Price": 1000,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 10,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22103,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Creepy Hand.prefab",
    "StackaMount": 5,
    "Price": 1000,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 10,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22104,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Death Statue.prefab",
    "StackaMount": 5,
    "Price": 2500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 25,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22105,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Dragon Statue.prefab",
    "StackaMount": 5,
    "Price": 2500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 50,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22106,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Goest Decor.prefab",
    "StackaMount": 5,
    "Price": 2500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 25,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22107,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/HauntedHalloween.prefab",
    "StackaMount": 5,
    "Price": 1000,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 50,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22108,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Large Spider.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 10,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22109,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Neon Ghost.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22110,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Neon Pumpkin.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22111,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Old Candle Holder.prefab",
    "StackaMount": 5,
    "Price": 1500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 15,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22112,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Dead.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22113,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Evil.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22114,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Grin.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22115,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Malice.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22116,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Round.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22117,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Sad.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22118,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Short.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22119,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Pumpkin Tall.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22120,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Small Spider.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22121,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Square Tombstone.prefab",
    "StackaMount": 5,
    "Price": 1500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22122,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Vampire Statue.prefab",
    "StackaMount": 5,
    "Price": 2500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 25,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22123,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Voodoo Doll.prefab",
    "StackaMount": 5,
    "Price": 500,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 22124,
    "ResourceName": "Assets/Resources/Items/Decoration Items/Ballons2024/Witch Cauldron.prefab",
    "StackaMount": 5,
    "Price": 1000,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 10,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },

```



# HOWTO Extract

All the item id's can be found in `SteamLibrary\steamapps\common\Sunkenland\Sunkenland_Data\resources.assets`.

The file `resources.assets` has a `tbitemdata` section lists all the items in `.json` format:

```json
  {
    "ID": 1,
    "ResourceName": "Assets/Resources/Items/Special Loots/Silver Coins.prefab",
    "StackaMount": 100,
    "Price": 100,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 1,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
```

There are a few problems:

1. Some resource names contain Unicode characters. Unfortunately `strings64` will extract &#8216; (Left Single Quotation Mark) as `\r\n`:

```json
  {
    "ID": 16003,
    "ResourceName": "Assets/Resources/Items/Rubbish/Blueprint capitalist‘times s scrap iron barrel.prefab",
    "StackaMount": 200,
    "Price": 100,
    "RecoveryPrice": 50,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
```

These items have an  Unicode character in the `ResourceName`. Generated via `bin\build_table.exe -q -u 2> info_unicode.txt`:

```
.\build_table -q -u
WARN: Item 16003 has Unicode 0xFFFFFFE2 at offset 26.
WARN: Item 16004 has Unicode 0xFFFFFFE2 at offset 26.
WARN: Item 16009 has Unicode 0xFFFFFFE2 at offset 42.
WARN: Item 16010 has Unicode 0xFFFFFFE2 at offset 41.
WARN: Item 16011 has Unicode 0xFFFFFFE2 at offset 47.
WARN: Item 16037 has Unicode 0xFFFFFFE2 at offset 26.
WARN: Item 16038 has Unicode 0xFFFFFFE2 at offset 26.
WARN: Item 24003 has Unicode 0xFFFFFFE2 at offset 16.
WARN: Item 24004 has Unicode 0xFFFFFFE2 at offset 16.
WARN: Item 24009 has Unicode 0xFFFFFFE2 at offset 32.
WARN: Item 24010 has Unicode 0xFFFFFFE2 at offset 31.
WARN: Item 24011 has Unicode 0xFFFFFFE2 at offset 37.
WARN: Item 24037 has Unicode 0xFFFFFFE2 at offset 16.
WARN: Item 24038 has Unicode 0xFFFFFFE2 at offset 16.
```

2. Some resource names will contain an `underscore` prefix. This designates there Tier.

The leading text and the underscore is NOT display in game.


```json
  {
    "ID": 1004,
    "ResourceName": "Assets/Resources/Items/2 Weapons/1/C1_Bow.prefab",
    "StackaMount": 1,
    "Price": 25,
    "RecoveryPrice": 0,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 0,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
```

These items have an underscore in the `ResourceName`. Generated via `bin\build_table.exe -q -_ 2> info_underscore.txt`:

```
INFO: Item 1001 has _ at offset 3.
INFO: Item 1002 has _ at offset 3.
INFO: Item 1003 has _ at offset 3.
INFO: Item 1004 has _ at offset 3.
INFO: Item 1006 has _ at offset 3.
INFO: Item 1008 has _ at offset 3.
INFO: Item 1101 has _ at offset 3.
INFO: Item 1102 has _ at offset 5.
INFO: Item 1103 has _ at offset 5.
INFO: Item 1105 has _ at offset 5.
INFO: Item 1106 has _ at offset 5.
INFO: Item 1107 has _ at offset 5.
INFO: Item 1108 has _ at offset 5.
INFO: Item 1202 has _ at offset 3.
INFO: Item 1205 has _ at offset 3.
INFO: Item 1301 has _ at offset 3.
INFO: Item 1302 has _ at offset 3.
INFO: Item 1304 has _ at offset 3.
INFO: Item 1306 has _ at offset 3.
INFO: Item 1401 has _ at offset 3.
INFO: Item 1402 has _ at offset 3.
INFO: Item 1403 has _ at offset 3.
INFO: Item 1404 has _ at offset 3.
INFO: Item 2005 has _ at offset 3.
INFO: Item 2006 has _ at offset 3.
INFO: Item 2007 has _ at offset 3.
INFO: Item 2008 has _ at offset 3.
INFO: Item 3001 has _ at offset 3.
INFO: Item 3002 has _ at offset 3.
INFO: Item 3003 has _ at offset 3.
INFO: Item 3004 has _ at offset 3.
INFO: Item 3008 has _ at offset 3.
INFO: Item 3014 has _ at offset 3.
INFO: Item 3015 has _ at offset 3.
INFO: Item 3016 has _ at offset 3.
INFO: Item 3017 has _ at offset 3.
INFO: Item 4002 has _ at offset 3.
INFO: Item 4003 has _ at offset 3.
INFO: Item 4004 has _ at offset 3.
INFO: Item 4005 has _ at offset 3.
INFO: Item 4006 has _ at offset 3.
INFO: Item 4511 has _ at offset 3.
INFO: Item 6001 has _ at offset 3.
INFO: Item 6002 has _ at offset 2.
INFO: Item 6003 has _ at offset 2.
INFO: Item 6055 has _ at offset 3.
INFO: Item 6060 has _ at offset 2.
INFO: Item 6062 has _ at offset 2.
INFO: Item 6101 has _ at offset 2.
INFO: Item 6152 has _ at offset 2.
INFO: Item 6201 has _ at offset 2.
INFO: Item 6252 has _ at offset 3.
INFO: Item 6257 has _ at offset 3.
INFO: Item 6258 has _ at offset 3.
INFO: Item 7001 has _ at offset 3.
INFO: Item 7002 has _ at offset 3.
INFO: Item 7003 has _ at offset 3.
INFO: Item 7004 has _ at offset 3.
INFO: Item 7005 has _ at offset 3.
INFO: Item 7006 has _ at offset 3.
INFO: Item 7007 has _ at offset 3.
INFO: Item 7008 has _ at offset 3.
INFO: Item 7009 has _ at offset 3.
INFO: Item 7010 has _ at offset 3.
INFO: Item 7011 has _ at offset 3.
INFO: Item 7012 has _ at offset 3.
INFO: Item 7013 has _ at offset 3.
INFO: Item 7015 has _ at offset 3.
INFO: Item 7018 has _ at offset 3.
INFO: Item 7019 has _ at offset 4.
INFO: Item 7020 has _ at offset 3.
INFO: Item 7021 has _ at offset 3.
INFO: Item 7026 has _ at offset 3.
INFO: Item 7033 has _ at offset 2.
INFO: Item 7034 has _ at offset 2.
INFO: Item 10001 has _ at offset 3.
INFO: Item 10004 has _ at offset 3.
INFO: Item 10006 has _ at offset 2.
INFO: Item 15112 has _ at offset 12.
INFO: Item 15113 has _ at offset 12.

```

3. Rubbish Items

Some items will be displayed as `Damaged blueprints`:

```json
  {
    "ID": 16003,
    "ResourceName": "Assets/Resources/Items/Rubbish/Blueprint capitalist times‘s scrap iron barrel.prefab",
    "StackaMount": 200,
    "Price": 100,
    "RecoveryPrice": 50,
    "InventionPrice": 0,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
```

These items are tagged as rubbish. Generated via `bin\build_table.exe -q -r 2> info_rubbish.txt`:

```
INFO: Item 16003 has Rubbish category.
INFO: Item 16004 has Rubbish category.
INFO: Item 16009 has Rubbish category.
INFO: Item 16010 has Rubbish category.
INFO: Item 16011 has Rubbish category.
INFO: Item 16021 has Rubbish category.
INFO: Item 16022 has Rubbish category.
INFO: Item 16023 has Rubbish category.
INFO: Item 16029 has Rubbish category.
INFO: Item 16030 has Rubbish category.
INFO: Item 16031 has Rubbish category.
INFO: Item 16037 has Rubbish category.
INFO: Item 16038 has Rubbish category.
INFO: Item 16052 has Rubbish category.
INFO: Item 16053 has Rubbish category.
INFO: Item 16063 has Rubbish category.
INFO: Item 16070 has Rubbish category.
INFO: Item 16071 has Rubbish category.
INFO: Item 16072 has Rubbish category.
INFO: Item 16073 has Rubbish category.
INFO: Item 16119 has Rubbish category.
INFO: Item 16120 has Rubbish category.
INFO: Item 16121 has Rubbish category.
INFO: Item 16122 has Rubbish category.
INFO: Item 16123 has Rubbish category.
INFO: Item 16124 has Rubbish category.
INFO: Item 24003 has Rubbish category.
INFO: Item 24004 has Rubbish category.
INFO: Item 24009 has Rubbish category.
INFO: Item 24010 has Rubbish category.
INFO: Item 24011 has Rubbish category.
INFO: Item 24021 has Rubbish category.
INFO: Item 24022 has Rubbish category.
INFO: Item 24023 has Rubbish category.
INFO: Item 24029 has Rubbish category.
INFO: Item 24030 has Rubbish category.
INFO: Item 24031 has Rubbish category.
INFO: Item 24052 has Rubbish category.
INFO: Item 24053 has Rubbish category.
INFO: Item 24063 has Rubbish category.
INFO: Item 24070 has Rubbish category.
INFO: Item 24071 has Rubbish category.
INFO: Item 24072 has Rubbish category.
INFO: Item 24119 has Rubbish category.
INFO: Item 24120 has Rubbish category.
INFO: Item 24121 has Rubbish category.
INFO: Item 24122 has Rubbish category.
INFO: Item 24123 has Rubbish category.
```

4. Unicode but not Rubbish

There are only 2 item that have Unicode but not Rubbish; 24037 and 24038.  These are displayed in game as **Damaged components.** They _probably_ correspond to 16072 and 16073 respectively.

```json
  {
    "ID": 24037,
    "ResourceName": "Assets/Resources/Items/WeaponParts/capitalist times‘s alloy barrel.prefab",
    "StackaMount": 100,
    "Price": 100,
    "RecoveryPrice": 50,
    "InventionPrice": 19,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
  {
    "ID": 24038,
    "ResourceName": "Assets/Resources/Items/WeaponParts/capitalist times‘s high-tech barrel.prefab",
    "StackaMount": 100,
    "Price": 100,
    "RecoveryPrice": 50,
    "InventionPrice": 23,
    "recyclingDrops": 0,
    "toCopper": 5,
    "ItemType": [
      0
    ],
    "openDrops": 0
  },
```

We can check what items have both Unicode and are Rubbish.  Generated via `bin\build_table.exe -q -r -u`:

```
INFO: Item 16003 has Rubbish category.
WARN: Item 16003 has Unicode at offset 26.
INFO: Item 16004 has Rubbish category.
WARN: Item 16004 has Unicode at offset 26.
INFO: Item 16009 has Rubbish category.
WARN: Item 16009 has Unicode at offset 42.
INFO: Item 16010 has Rubbish category.
WARN: Item 16010 has Unicode at offset 41.
INFO: Item 16011 has Rubbish category.
WARN: Item 16011 has Unicode at offset 47.
INFO: Item 16021 has Rubbish category.
INFO: Item 16022 has Rubbish category.
INFO: Item 16023 has Rubbish category.
INFO: Item 16029 has Rubbish category.
INFO: Item 16030 has Rubbish category.
INFO: Item 16031 has Rubbish category.
INFO: Item 16037 has Rubbish category.
WARN: Item 16037 has Unicode at offset 26.
INFO: Item 16038 has Rubbish category.
WARN: Item 16038 has Unicode at offset 26.
INFO: Item 16052 has Rubbish category.
INFO: Item 16053 has Rubbish category.
INFO: Item 16063 has Rubbish category.
INFO: Item 16070 has Rubbish category.
INFO: Item 16071 has Rubbish category.
INFO: Item 16072 has Rubbish category.
INFO: Item 16073 has Rubbish category.
INFO: Item 16119 has Rubbish category.
INFO: Item 16120 has Rubbish category.
INFO: Item 16121 has Rubbish category.
INFO: Item 16122 has Rubbish category.
INFO: Item 16123 has Rubbish category.
INFO: Item 16124 has Rubbish category.
INFO: Item 24003 has Rubbish category.
WARN: Item 24003 has Unicode at offset 16.
INFO: Item 24004 has Rubbish category.
WARN: Item 24004 has Unicode at offset 16.
INFO: Item 24009 has Rubbish category.
WARN: Item 24009 has Unicode at offset 32.
INFO: Item 24010 has Rubbish category.
WARN: Item 24010 has Unicode at offset 31.
INFO: Item 24011 has Rubbish category.
WARN: Item 24011 has Unicode at offset 37.
INFO: Item 24021 has Rubbish category.
INFO: Item 24022 has Rubbish category.
INFO: Item 24023 has Rubbish category.
INFO: Item 24029 has Rubbish category.
INFO: Item 24030 has Rubbish category.
INFO: Item 24031 has Rubbish category.
WARN: Item 24037 has Unicode at offset 16.
WARN: Item 24038 has Unicode at offset 16.
INFO: Item 24052 has Rubbish category.
INFO: Item 24053 has Rubbish category.
INFO: Item 24063 has Rubbish category.
INFO: Item 24070 has Rubbish category.
INFO: Item 24071 has Rubbish category.
INFO: Item 24072 has Rubbish category.
INFO: Item 24119 has Rubbish category.
INFO: Item 24120 has Rubbish category.
INFO: Item 24121 has Rubbish category.
INFO: Item 24122 has Rubbish category.
INFO: Item 24123 has Rubbish category.
```


# Source

The program [src\build_table.cpp](src\build_table.cpp) will generate a MarkDown table consisting of:

* ID
* Description
* Max stack size
* Type
* Price

It parses the resource name to determine the type and category.

# Older 0.2

* https://www.reddit.com/r/sunkenland/comments/16wmhoy/item_ids_and_useful_info/


# Credits

Thanks to [MrClue]*https://steamcommunity.com/profiles/76561198030825248) for mentioning `resource.assets` in this Steam Community [discussion](https://steamcommunity.com/sharedfiles/filedetails/?id=3035080631).
