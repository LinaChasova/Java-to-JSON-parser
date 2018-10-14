%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "JSON.cpp"

extern int yydebug;  // TODO: REMOVE IN PROD, 'yacc' it with -t flag.
extern int yylex();
char const *yyerror(const char *str);
%}

%start CompilationUnit

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
%token OVERRIDE
%token DO
%token FOR
%token LCURL
%token RCURL
%token NOT
%token PRIVATE
%token PROTECTED
%token PUBLIC
%token VOID
%token CONTINUE
%token MORE_MORE
%token CLASS


%token CATCH
%token EXTENDS
%token FINALLY
%token IMPLEMENTS
%token INTERFACE
%token NULL_
%token PACKAGE
%token THROW
%token THROWS
%token TILDA
%token TRY



%nonassoc NELSE
%nonassoc ELSE

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

%type <std::string> CompilationUnit
%type <std::string> PackageDeclaration
%type <std::string> ImportDeclarations
%type <std::string> TypeDeclarations



%%


CompilationUnit
    : PackageDeclaration ImportDeclarations TypeDeclarations
    {
        json = format("[Me: 'CompilationUnit', MyPackages: '%s', MyImports: '%s', TypeDecls: '%s']",
                        $1, $2, $3);
    }
    ;

PackageDeclaration
    :
    | PACKAGE PackageName SEPARATOR
        {
            $$ = format("[Me: PackageDeclaration]");
        }
    ;

ImportDeclarations
    :
        {
                $$ = format("[Me: Import]");
        }
    | ImportDeclaration
        {
                $$ = format("[Me: Import]");
        }
    | ImportDeclarations ImportDeclaration
        {
                $$ = format("[Me: Import]");
        }
    ;

ImportDeclaration
    : IMPORT TypeName SEPARATOR
    | IMPORT PackageName DOT ASTERISK SEPARATOR

TypeDeclarations
    :
    {
            $$ = format("[Me: Decl]");
    }
    | TypeDeclaration
    {
            $$ = format("[Me: Decl]");
    }
    | TypeDeclarations TypeDeclaration
    {
            $$ = format("[Me: Decl]");
    }
    ;

TypeDeclaration
    : ClassDeclaration
    | InterfaceDeclaration
    | SEPARATOR
    ;

ClassDeclaration
    : ClassModifiers CLASS IDENTIFIER Super Interfaces ClassBody
    ;

ClassModifiers
    :
    | ClassModifier
    | ClassModifiers ClassModifier
    ;


ClassModifier
    : PUBLIC | PRIVATE
    | ABSTRACT
    | FINAL
    ;


Super
    :
    | EXTENDS ClassType
    ;

Interfaces
    :
    | IMPLEMENTS InterfaceTypeList
    ;

InterfaceTypeList
    : InterfaceType
    | InterfaceTypeList COMMA InterfaceType
    ;

ClassBody
    : LCURL ClassBodyDeclarations RCURL

ClassBodyDeclarations
    :
    | ClassBodyDeclaration
    | ClassBodyDeclarations ClassBodyDeclaration
    ;

ClassBodyDeclaration
    : ClassMemberDeclaration
    | StaticInitializer
    | ConstructorDeclaration
    ;

ClassMemberDeclaration
    : FieldDeclaration
    | MethodDeclaration
    ;

StaticInitializer
    : STATIC Block
    ;

ConstructorDeclaration
    : ConstructorModifiers ConstructorDeclarator Throws ConstructorBody
    ;

ConstructorModifiers
    :
    | ConstructorModifier
    | ConstructorModifiers ConstructorModifier

ConstructorModifier
    : PUBLIC | PROTECTED | PRIVATE
    ;

ConstructorDeclarator
    : IDENTIFIER LPAREN FormalParameterList RPAREN

FormalParameterList
    :
    | FormalParameter
    | FormalParameterList FormalParameter
    ;

FormalParameter
    : Type VariableDeclaratorId
    ;

Throws
    :
    | THROWS ClassTypeList
    ;

ClassTypeList
    : ClassType
    | ClassTypeList COMMA ClassType
    ;

ConstructorBody
    : LCURL ExplicitConstructorInvocation BlockStatements RCURL
    ;

ExplicitConstructorInvocation
    :
    | THIS LPAREN ArgumentList RPAREN
    | SUPER LPAREN ArgumentList RPAREN
    ;

FieldDeclaration
    : FieldModifiers Type VariableDeclarators SEPARATOR
    ;

FieldModifiers
    :
    | FieldModifier
    | FieldModifiers FieldModifier

FieldModifier
    : PUBLIC | PROTECTED | PRIVATE | STATIC | FINAL
    ;

VariableDeclarators
    : VariableDeclarator
    | VariableDeclarators COMMA VariableDeclarator
    ;

VariableDeclarator
    : VariableDeclaratorId
    | VariableDeclaratorId EQUALS VariableInitializer
    ;

VariableDeclaratorId
    : IDENTIFIER
    | VariableDeclaratorId LBRACKET RBRACKET

VariableInitializer
    : Expression
    | ArrayInitializer
    ;

MethodDeclaration
    : MethodHeader MethodBody
    ;

MethodHeader
    : MethodModifiers ResultType MethodDeclarator Throws
    ;

ResultType
    : Type
    | VOID
    ;

MethodModifiers
    :
    | MethodModifier
    | MethodModifiers MethodModifier
    ;

MethodModifier
    : PUBLIC | PROTECTED | PRIVATE | STATIC | ABSTRACT | FINAL
    ;

MethodDeclarator
    : IDENTIFIER LPAREN FormalParameterList RPAREN
    ;

MethodBody
    : Block
    | SEPARATOR
    ;

InterfaceDeclaration
    : InterfaceModifiers INTERFACE IDENTIFIER ExtendsInterfaces InterfaceBody
    ;

InterfaceModifiers
    :
    | InterfaceModifier
    | InterfaceModifiers InterfaceModifier
    ;

InterfaceModifier
    : PUBLIC
    | ABSTRACT
    ;

ExtendsInterfaces
    : EXTENDS InterfaceType
    | ExtendsInterfaces COMMA InterfaceType
    ;

InterfaceBody
    : LCURL InterfaceMemberDeclarations RCURL
    ;

InterfaceMemberDeclarations
    :
    | InterfaceMemberDeclaration
    | InterfaceMemberDeclarations InterfaceMemberDeclaration
    ;

InterfaceMemberDeclaration
    : ConstantDeclaration
    | AbstractMethodDeclaration
    ;

ConstantDeclaration
    : ConstantModifiers Type VariableDeclarator
    ;

ConstantModifiers
    : PUBLIC | STATIC | FINAL
    ;

AbstractMethodDeclaration
    : AbstractMethodModifiers ResultType MethodDeclarator Throws SEPARATOR
    ;

AbstractMethodModifiers
    :
    | AbstractMethodModifier
    | AbstractMethodModifiers AbstractMethodModifier
    ;

AbstractMethodModifier
    : PUBLIC | ABSTRACT
    ;

ArrayInitializer
    : LCURL VariableInitializers RCURL
    ;

VariableInitializers
    :
    | VariableInitializer
    | VariableInitializers COMMA VariableInitializer
    ;

VariableInitializer
    : Expression
    | ArrayInitializer
    ;

/// Types ///////////////////////////////////////////////////////////////////

Type
    : IDENTIFIER
    | ArrayType
    ;

ArrayType
    : Type LBRACKET RBRACKET
    ;

TypeName
    : IDENTIFIER
    | PackageName DOT IDENTIFIER
    ;

ClassType
    : TypeName
    ;


InterfaceType
    : TypeName
    ;

PackageName
    : IDENTIFIER
    | PackageName DOT IDENTIFIER
    ;



// Blocks and Commands ///////////////////////////////////////////

Block
    : LPAREN BlockStatements RPAREN
    ;

BlockOrStatement
    : Block
    | Statement
    ;

BlockStatements
    :
    | BlockStatement
    | BlockStatements BlockStatement
    ;

BlockStatement
    : LocalVariableDeclaration SEPARATOR
    | Statement
    ;

LocalVariableDeclaration
    : Type VariableDeclarators
    ;

EmptyStatement
    : SEPARATOR
    ;



ExpressionStatement
    : StatementExpression SEPARATOR
    ;

StatementExpression
    : Assignment
    | Expression
    | MethodInvocation
    | ClassInstanceCreationExpression
    ;

IfElseStatement
    : IF LPAREN Expression RPAREN Statement %prec NELSE
    | IF LPAREN Expression RPAREN  Statement ELSE Statement

WhileStatement
    : WHILE LPAREN Expression RPAREN Statement
    ;

DoWhileStatement
    : DO Statement WHILE LPAREN Expression RPAREN
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
    ;

Statement
    : StatementWithoutTrailingSubstatement
    | IfElseStatement
    | WhileStatement
    | ForStatement
    | DoWhileStatement
    ;

StatementWithoutTrailingSubstatement
    : Block
    | EmptyStatement
    | ExpressionStatement
    | BreakStatement
    | ContinueStatement
    | ReturnStatement
    | ThrowsStatements
    | TryStatement
    ;

BreakStatement
    : BREAK IDENTIFIER SEPARATOR
    | BREAK SEPARATOR
    ;

ContinueStatement
    : CONTINUE IDENTIFIER SEPARATOR
    | CONTINUE SEPARATOR
    ;

ReturnStatement
    : RETURN IDENTIFIER SEPARATOR
    | RETURN SEPARATOR
    ;

ThrowsStatements
    : THROW Expression SEPARATOR
    ;

TryStatement
    : TRY Block Catches
    | TRY Block Catches Finally
    | TRY Block         Finally
    ;

Catches
    : CatchClause
    | Catches CatchClause
    ;

CatchClause
    : CATCH LPAREN FormalParameter RPAREN Block
    ;

Finally
    : FINALLY Block



// Expressions ///////////////////////////////////////////////

ClassInstanceCreationExpression
    : NEW ClassType LPAREN ArgumentList RPAREN
    ;

Assignment
    : LeftHandSide AssignmentOperator Expression
    ;

ArgumentList
    :
    | Expression
    | ArgumentList COMMA Expression
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
        | Assignment
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
        | PLUS        UnaryExpression
        | MINUS       UnaryExpression
        | PLUS_PLUS   UnaryExpression
        | MINUS_MINUS UnaryExpression
        ;  // Just PostfixExpression has lower precedence than itself because of possible "routine call"

PostfixExpression
        : PrimaryExpression
        | PostfixExpression DOT PrimaryExpression
        | PostfixExpression LPAREN               RPAREN %prec LPAREN
        | PostfixExpression LPAREN BlockOrStatement RPAREN %prec LPAREN
        | PostfixExpression PLUS_PLUS
        | PostfixExpression MINUS_MINUS
        ;

PrimaryExpression
        : LPAREN BlockOrStatement RPAREN  // Tuple or parenthesized expression
        | Literal
        | NEW IDENTIFIER
        | THIS
        | SUPER
        ;

LeftHandSide
    : ExpressionName
    | FieldAccess
    | ArrayAccess
    ;

AssignmentOperator
    : EQUALS
    | ASTERISK EQUALS
    | BACKSLASH EQUALS
    | SLASH_EQUALS
    | PLUS EQUALS
    | MINUS EQUALS
    | LESS_LESS EQUALS
    | MORE_MORE EQUALS
    | AMPERSAND EQUALS
    | VERTICAL EQUALS
    ;

CastExpression
    : LPAREN Type RPAREN UnaryExpression
    | LPAREN IDENTIFIER RPAREN UnaryExpressionNotPlusMinus
    ;

UnaryExpressionNotPlusMinus
    : PostfixExpression
    | TILDA UnaryExpression
    | UnaryExpression
    | CastExpression
    ;

MethodInvocation
    : MethodName LPAREN ArgumentList RPAREN
    | Primary DOT IDENTIFIER LPAREN ArgumentList RPAREN
    | SUPER DOT IDENTIFIER LPAREN ArgumentList RPAREN
    ;

FieldAccess
    : Primary DOT IDENTIFIER
    | SUPER DOT IDENTIFIER
    ;

Primary
    : Literal
    | THIS
    | LPAREN Expression RPAREN
    | ClassInstanceCreationExpression
    | FieldAccess
    | MethodInvocation
    | ArrayAccess
    | NEW Type DimExprs Dims
    ;

DimExprs
    : DimExpr
    | DimExprs DimExprs
    ;

DimExpr
    : LBRACKET Expression RBRACKET

Dims
    :
    | LBRACKET RBRACKET
    | Dims LBRACKET RBRACKET
    ;

ArrayAccess
    : ExpressionName LBRACKET Expression RBRACKET
    | Primary LBRACKET Expression RBRACKET
    ;

///Tokens//////////////////////////////////////////////////


ExpressionName
    : IDENTIFIER | AmbiguousName DOT IDENTIFIER
    ;

MethodName
    : ExpressionName
    ;

AmbiguousName
    : IDENTIFIER
    | AmbiguousName DOT IDENTIFIER
    ;


Literal
        : BooleanLiteral
        | INTEGER_LITERAL
        | REAL_LITERAL
        | CHAR_LITERAL
        | STRING_LITERAL
        | NULL_
        ;

BooleanLiteral
        : TRUE
        | FALSE
        ;

/// Batya v zdanii //////////////////////////////////////////////////////////////


%%

// Called when parse error was detected.
char const *yyerror(const char *str)
{
    fprintf(stderr, "yyerror: %s\n", str);
}

extern FILE *yyin;

// Program entry point.
int main()
{
    yydebug = 1;  // TODO: REMOVE IN PROD, set 0 for no debug info.
    yyin = fopen("in.txt", "r");
    return yyparse();
}
