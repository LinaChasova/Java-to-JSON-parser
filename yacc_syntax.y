%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yydebug;  // TODO: REMOVE IN PROD, 'yacc' it with -t flag.
extern int yylex();
char const *yyerror(const char *str);
%}

// For expected number of conflicts
%expect    0  // shift/reduce
%expect-rr 0  // reduce/reduce

%start unit

%union
{
    int number;
    char *string;
}


%token IMPORT
%token IF
%token ELSE
%token WHILE
%token BREAK
%token RETURN
%token ABSTRACT
%token FINAL
%token NEW
%token TRUE
%token FALSE

%token IDENTIFIER
%token INTEGER_LITERAL
%token REAL_LITERAL
%token CHAR_LITERAL
%token STRING_LITERAL

%token SEPARATOR  // Includes semicolon (;) and new line (\n)

%token PLUS_PLUS
%token MINUS_MINUS
%token SLASH_EQUALS
%token LESS_LESS
%token LESS_EQUALS
%token EQUALS_GREATER
%token GREATER_EQUALS
%token GREATER_GREATER
%token AMPERSAND
%token ASTERISK
%token PLUS
%token LPAREN
%token RPAREN
%token COMMA
%token MINUS
%token DOT
%token SLASH
%token COLON
%token LESS
%token EQUALS
%token GREATER
%token LBRACKET
%token BACKSLASH
%token RBRACKET
%token VERTICAL
%token THIS
%token SUPER
%token STATIC



// TODO: %type declarations

// Lower priority
%left AND_THEN                                            // Logical AND
%left OR        VERTICAL                                  // Bitwise OR
%left XOR       CARET                                     // Bitwise Exclusive OR
%left AND       AMPERSAND                                 // Bitwise AND
%left EQUALS    SLASH_EQUALS                              // Object equality
%left LESS      LESS_EQUALS     GREATER   GREATER_EQUALS  // Value comparison
%left LESS_LESS GREATER_GREATER                           // Bitwise shift
%left PLUS      MINUS                                     // Additive operations
%left ASTERISK  SLASH           BACKSLASH                 // Multiplicative operations
%nonassoc LOWER_THAN_LPAREN  // Pseudo-token for prioritizing the routine call in PostfixExpression
%right LPAREN
// Higher priority
%%

unit
        : /* empty */
        | TOKBEGIN tokens
        ;

tokens
        :                 token { printf("\tTOKWORD found: %s\n", $1); }
        | tokens TOKCOMMA token { printf("\tTOKWORD found: %s\n", $3); }
        ;

token
        : TOKNUMBER
        {
            $$ = (char *) malloc(11 * sizeof(char));
            itoa($1, $$, 10);
        }
        | TOKWORD   { $$ = $1; }
        ;

%%


IdentifierSeq
        :                         IDENTIFIER
        | IdentifierSeq COMMA     IDENTIFIER
        ;


Literal
        : BooleanLiteral
        | INTEGER_LITERAL
        | REAL_LITERAL
        | CHAR_LITERAL
        | STRING_LITERAL
        ;

BooleanLiteral
        : TRUE
        | FALSE
        ;





Statement
        : IfElseStatement
        | ForStatement
        | WhileStatement
        | DoWhileStatement
        | ImportStatement
        | ReturnStatement
        ;

IfElseStatement
    : IF LPAREN Expression RPAREN Statement
    | IF LPAREN Expression RPAREN LCURL Statements RCURL
    | IF LPAREN Expression RPAREN  Statement ELSE Statement
    | IF LPAREN Expression RPAREN  Statement ELSE LCURL Statements RCURL
    | IF LPAREN Expression RPAREN  LCURL Statements RCURL ELSE Statement
    | IF LPAREN Expression RPAREN  LCURL Statements RCURL ELSE LCURL Statements RCURL
    ;

ForCondition
    : Expression    SEPARATOR   Expression  SEPARATOR   Expression
    | Expression    SEPARATOR   Expression  SEPARATOR
    | Expression    SEPARATOR               SEPARATOR
    | Expression    SEPARATOR               SEPARATOR   Expression
    |               SEPARATOR   Expression  SEPARATOR   Expression
    |               SEPARATOR   Expression  SEPARATOR
    |               SEPARATOR               SEPARATOR   Expression
    |               SEPARATOR               SEPARATOR
    ;

ForStatement
    : FOR LPAREN ForCondition RPAREN Statement
    | FOR LPAREN ForCondition RPAREN LCURL Statements RCURL
    ;

WhileStatement
    : WHILE LPAREN Expression RPAREN Statement
    | WHILE LPAREN Expression RPAREN LCURL Statements RCURL
    ;

DoWhileStatement
    : DO Statement WHILE LPAREN Expression RPAREN
    | DO LCURL Statements RCURL WHILE LPAREN Expression RPAREN
    ;


ImportStatement
    : IMPORT                IdentifierSeq  SEPARATOR
    | IMPORT STATIC         IdentifierSeq  SEPARATOR
    | IMPORT        IdentifierSeq DOT ASTERISK SEPARATOR
    | IMPORT STATIC IdentifierSeq DOT ASTERISK SEPARATOR
    ;

ReturnStatement
    : RETURN SEPARATOR
    | RETURN Expression
    ;  // SEPARATOR because of shift/reduce with next statements and declarations


// Expression //////////////////////////////////////////////////////////////////////////////////////////////////////////

ExpressionSeq
        :                         Expression
        | ExpressionSeq COMMA     Expression
        | ExpressionSeq SEPARATOR Expression
        ;

Expression
        : UnaryExpression
        | Expression ASTERISK        Expression
        | Expression SLASH           Expression
        | Expression BACKSLASH       Expression
        | Expression PLUS            Expression
        | Expression MINUS           Expression
        | Expression LESS_LESS       Expression
        | Expression GREATER_GREATER Expression
        | Expression LESS            Expression
        | Expression LESS_EQUALS     Expression
        | Expression GREATER         Expression
        | Expression GREATER_EQUALS  Expression
        | Expression EQUALS          Expression
        | Expression SLASH_EQUALS    Expression
        | Expression AND             Expression
        | Expression AMPERSAND       Expression
        | Expression XOR             Expression
        | Expression OR              Expression
        | Expression VERTICAL        Expression
        ;  // Adding an operator here - fill the precedence table at the top

UnaryExpression
        : PostfixExpression %prec LPAREN
        | NOT         UnaryExpression
        | TILDE       UnaryExpression
        | PLUS        UnaryExpression
        | MINUS       UnaryExpression
        | PLUS_PLUS   UnaryExpression
        | MINUS_MINUS UnaryExpression
        ;  // Just PostfixExpression has lower precedence than itself because of possible "routine call"

PostfixExpression
        : PrimaryExpression
        | PostfixExpression DOT PrimaryExpression
        | PostfixExpression LPAREN               RPAREN %prec LPAREN
        | PostfixExpression LPAREN ExpressionSeq RPAREN %prec LPAREN
        | PostfixExpression PLUS_PLUS
        | PostfixExpression MINUS_MINUS
        ;

PrimaryExpression
        : LPAREN ExpressionSeq RPAREN  // Tuple or parenthesized expression
        | Literal
        | NEW IDENTIFIER
        | THIS
        | SUPER
        ;

/// Function declaration ///////////////////////////////////////////////////////////////////////////////////////////

Function
    :


ReturnType
    : VOID
    | IDENTIFIER
    ;





// Primitives //////////////////////////////////////////////////////////////////////////////////////////////////////////

Literal
        : BooleanLiteral
        | INTEGER_LITERAL
        | REAL_LITERAL
        | CHAR_LITERAL
        | STRING_LITERAL
        ;

BooleanLiteral
        : TRUE
        | FALSE
        ;

CompoundName
        :                  IDENTIFIER
        | CompoundName DOT IDENTIFIER
        ;

IdentifierSeq
        :                         IDENTIFIER
        | IdentifierSeq COMMA     IDENTIFIER
        ;

Label
        : IDENTIFIER
        ;

OverridableOperator
        | NOT
        | XOR
        | AND
        | OR
        | PLUS_PLUS
        | MINUS_MINUS
        | SLASH_EQUALS
        | LESS_LESS
        | LESS_EQUALS
        | GREATER_EQUALS
        | GREATER_GREATER
        | AMPERSAND
        | ASTERISK
        | PLUS
        | MINUS
        | SLASH
        | LESS
        | EQUALS
        | GREATER
        | VERTICAL
        ;  // If any operator becomes overridable - add it here  // TODO: check the list



// Called when parse error was detected.
char const *yyerror(const char *str)
{
    fprintf(stderr, "yyerror: %s\n", str);
}

// Program entry point.
int main()
{
    yydebug = 1;  // TODO: REMOVE IN PROD, set 0 for no debug info.
    return yyparse();
}
