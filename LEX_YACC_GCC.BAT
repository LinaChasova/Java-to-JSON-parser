Bison\bin\yacc.exe -dy -v -t yacc_syntax.y
Flex\bin\lex.exe -d lex_tokens.l
gcc lex.yy.c y.tab.c -o lex_yacc.exe
flex_yacc.exe
pause
