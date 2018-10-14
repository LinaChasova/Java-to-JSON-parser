%x COMMENT

digit [0-9]
upper [A-Z]
low   [a-z]
ws    [\f\n\r\t\v]

B                   [01]
O                   {B}|[2-7]
D                   {O}|[8-9]
H                   {D}|[A-Fa-f]

BIN                 0b{B}(_|{B})*
OCT                 0o{O}(_|{O})*
DEC                 {D}(_|{D})*
HEX                 0x{H}(_|{H})*

EXP                 (e|E)(-|\+)?{DEC}

L                   [A-Za-z]

WS                  [ \f\n\r\t\v]

%{
#include <string.h>
#include "yacc_syntax.tab.h"

extern YYSTYPE yylval;
int comment_ctr;
%}

%%

"static" {return STATIC;}
"import" {return IMPORT;}
"while" {return WHILE;}
"for" {return FOR;}
"do" {return DO;}
"continue" {return CONTINUE;}
"break" {return BREAK;}
"if" {return IF;}
"else" {return ELSE;}
"return" {return RETURN;}
"final" {return FINAL;}
"abstract" {return ABSTRACT;}
"new" {return NEW;}
"true" {return TRUE;}
"false" {return FALSE;}
"this" {return THIS;}
"super" {return SUPER;}
"private"  {return PRIVATE;}
"public"  {return PUBLIC;}
"protected"  {return PROTECTED;}
"override" {return OVERRIDE;}
"class" {return CLASS;}
"catch"             { return  CATCH; }
"extends"           { return  EXTENDS; }
"finally"           { return  FINALLY; }
"implements"        { return  IMPLEMENTS; }
"interface"         { return  INTERFACE; }
"null"              { return  NULL_; }
"package"           { return  PACKAGE; }
"throw"             { return  THROW; }
"throws"            { return  THROWS; }
"try"               { return  TRY; }

({L}|_|$)({L}|{D}|_|$)* {
    //yylval.string = (char *) malloc(strlen(yytext));
    //strcpy(yylval.string, yytext);
    // TODO: TYPE_IDENTIFIER recognition, next goes testing solution

    return IDENTIFIER;

}


{BIN}|{OCT}|{DEC}|{HEX} {
    yylval.string = (char *) malloc(strlen(yytext));
    strcpy(yylval.string, yytext);
    return INTEGER_LITERAL;
}

{DEC}({EXP}|\.{DEC}{EXP}?) {
    yylval.string = (char *) malloc(strlen(yytext));
    strcpy(yylval.string, yytext);
    return REAL_LITERAL;
}

'(\\.|[^\\'])+' {
    yylval.string = (char *) malloc(strlen(yytext));
    strcpy(yylval.string, yytext);
    return REAL_LITERAL;
}

\"(\\.|[^\\"])*\" {
    yylval.string = (char *) malloc(strlen(yytext));
    strcpy(yylval.string, yytext);
    return REAL_LITERAL;
}

";"            { return SEPARATOR; }
"++"                { return PLUS_PLUS; }
"--"                { return MINUS_MINUS; }
"/="                { return SLASH_EQUALS; }
"<="                { return LESS_EQUALS; }
"!="                { return SLASH_EQUALS; }
">>"                { return MORE_MORE; }
"<<"                { return LESS_LESS; }
"=>"                { return EQUALS_GREATER; }
">="                { return GREATER_EQUALS; }
"&"                 { return AMPERSAND; }
"&&"                 { return AMPERSAND; }
"("                 { return LPAREN; }
")"                 { return RPAREN; }
"*"                 { return ASTERISK; }
"+"                 { return PLUS; }
","                 { return COMMA; }
"-"                 { return MINUS; }
"."                 { return DOT; }
"/"                 { return SLASH; }
":"                 { return COLON; }
"<"                 { return LESS; }
"{"                 { return LCURL;}
"}"                 { return RCURL;}
"="                 { return EQUALS; }
">"                 { return GREATER; }
"["                 { return LBRACKET; }
"%"                 { return BACKSLASH; }
"]"                 { return RBRACKET; }
"|"                 { return VERTICAL; }
"||"                { return VERTICAL; }
"~"                 { return  TILDA; }



{WS}                { /* skip over blanks */ }

<COMMENT>"/*"       { ++comment_ctr; }
<COMMENT>"*/"       { --comment_ctr; if (comment_ctr < 1) BEGIN INITIAL; }
<COMMENT>(.|\n)     { /* ignore comment content */ }

.                   { /* skip all other symbols, they're printed by default */ }

%%

// Change input after EOF was found.
// If reading could be continued - return 0.
int yywrap()
{
    return 1;
}
//{digit}+            { yylval.number = atoi(yytext); return TOKNUMBER; }
//({upper}|{low})+    { yylval.string = strdup(yytext); return TOKWORD; }
//,                   return TOKCOMMA;