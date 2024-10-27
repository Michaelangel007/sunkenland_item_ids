@REM /O2 Optimize for speed
@REM /Od Optimisization disable
@REM /W3 Warning Level 3
@REM /Zi enable debugging information
@REM /ZI enable Edit and Continue debug info
cl.exe /W3 /Od /Zi /D_DEBUG=1 src\build_table.cpp -Fe:bin\build_table_debug.exe -Fo:bin\build_table_debug.obj
cl.exe /W3 /O2                src\build_table.cpp -Fe:bin\build_table.exe       -Fo:bin\build_table.obj
