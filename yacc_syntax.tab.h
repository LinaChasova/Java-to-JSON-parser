/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_YACC_SYNTAX_TAB_H_INCLUDED
# define YY_YY_YACC_SYNTAX_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IMPORT = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     BREAK = 262,
     RETURN = 263,
     ABSTRACT = 264,
     FINAL = 265,
     NEW = 266,
     TRUE = 267,
     FALSE = 268,
     IDENTIFIER = 269,
     INTEGER_LITERAL = 270,
     REAL_LITERAL = 271,
     CHAR_LITERAL = 272,
     STRING_LITERAL = 273,
     SEPARATOR = 274,
     PLUS_PLUS = 275,
     MINUS_MINUS = 276,
     SLASH_EQUALS = 277,
     LESS_LESS = 278,
     LESS_EQUALS = 279,
     EQUALS_GREATER = 280,
     GREATER_EQUALS = 281,
     GREATER_GREATER = 282,
     AMPERSAND = 283,
     ASTERISK = 284,
     PLUS = 285,
     LPAREN = 286,
     RPAREN = 287,
     COMMA = 288,
     MINUS = 289,
     DOT = 290,
     SLASH = 291,
     COLON = 292,
     LESS = 293,
     EQUALS = 294,
     GREATER = 295,
     LBRACKET = 296,
     BACKSLASH = 297,
     RBRACKET = 298,
     VERTICAL = 299,
     THIS = 300,
     SUPER = 301,
     STATIC = 302,
     OVERRIDE = 303,
     DO = 304,
     FOR = 305,
     LCURL = 306,
     RCURL = 307,
     NOT = 308,
     PRIVATE = 309,
     PROTECTED = 310,
     PUBLIC = 311,
     VOID = 312,
     CONTINUE = 313,
     MORE_MORE = 314,
     CLASS = 315,
     CATCH = 316,
     EXTENDS = 317,
     FINALLY = 318,
     IMPLEMENTS = 319,
     INTERFACE = 320,
     NULL_ = 321,
     PACKAGE = 322,
     THROW = 323,
     THROWS = 324,
     TILDA = 325,
     TRY = 326,
     NELSE = 327,
     AND_THEN = 328,
     OR = 329,
     CARET = 330,
     XOR = 331,
     AND = 332,
     LOWER_THAN_LPAREN = 333
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 14 "yacc_syntax.y"

    int number;
    char *string;


/* Line 2058 of yacc.c  */
#line 141 "yacc_syntax.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_YACC_SYNTAX_TAB_H_INCLUDED  */
