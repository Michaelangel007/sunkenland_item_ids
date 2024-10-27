@cls
bin\build_table.exe        > table.md
bin\build_table.exe -q -_ 2> info_underscore.txt
bin\build_table.exe -q -r 2> info_rubbish.txt
bin\build_table.exe -q -u 2> info_unicode.txt
