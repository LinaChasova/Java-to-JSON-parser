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
        json = format("['Me': 'CompilationUnit', 'MyPackages': '%s', 'MyImports': '%s', 'TypeDecls': '%s']",
                        $1, $2, $3);
    }
    ;

PackageDeclaration
    :
    | PACKAGE PackageName SEPARATOR
        {
            $$ = format("['Grammar': 'Package', 'PackageName': '%s']",
                            $1);
        }
    ;

ImportDeclarations
    :
    | ImportDeclaration
        {
            $$ = format("['ImportDeclarations': '%s']",
                          $1);
        }
    | ImportDeclarations ImportDeclaration
        {
            $$ = format("['ImportDeclarations': '%s', 'ImportDeclaration': '$s']",
                          $1, $2);
        }
    ;

ImportDeclaration
    : IMPORT TypeName SEPARATOR
        {
            $$ = format("['Grammar': 'Import', 'TypeName': '$s']",
                        $1);
        }
    | IMPORT PackageName DOT ASTERISK SEPARATOR
        {
            $$ = format("['Grammar': 'Import', 'PackageName': '$s', 'Dot': '.', 'Asterisk': '*']",
                          %1);
        }
    ;

TypeDeclarations
    :
    | TypeDeclaration
    {
        $$ = format("['TypeDeclarations': '$s']", $1);
    }
    | TypeDeclarations TypeDeclaration
    {
        $$ = format("['TypeDeclarations': '%s', 'TypeDeclaration': '$s']",
                    $1, $2);
    }
    ;

TypeDeclaration
    : ClassDeclaration
    {
        $$ = format("['ClassDeclaration': '$s']", $1);
    }
    | InterfaceDeclaration
    {
        $$ = format("['InterfaceDeclaration': '$s']", $1);
    }
    | SEPARATOR
    ;

ClassDeclaration
    : ClassModifiers CLASS IDENTIFIER Super Interfaces ClassBody
    {
        $$ = format("['ClassModifiers': '$s', 'Grammar': 'Class', 'Identifier': 'Identifier', 'Super': '$s',
                    'Interfaces': '$s', 'ClassBody': '$s']", $1, $2, $3, $4);
    }
    ;

ClassModifiers
    :
    | ClassModifier
    {
        $$ = format("['ClassModifier': '$s']", $1);
    }
    | ClassModifiers ClassModifier
        $$ = format("['ClassModifiers': '$s', 'ClassModifier': '$s']", $1, $2);
    ;


ClassModifier
    : PUBLIC
    {
        $$ = format("['Grammar': 'Public']");
    }
    | PRIVATE
    {
        $$ = format("['Grammar': 'Private']");
    }
    | ABSTRACT
    {
        $$ = format("['Grammar': 'Abstract']");
    }
    | FINAL
    {
        $$ = format("['Grammar': 'Final']");
    }
    ;


Super
    :
    | EXTENDS ClassType
    {
        $$ = format("['Grammar': 'Extends', 'ClassType': '$s']", $1);
    }
    ;

Interfaces
    :
    | IMPLEMENTS InterfaceTypeList
    {
        $$ = format("['Grammar': 'Implements', 'InterfaceTypeList': '$s']", $1);
    }
    ;

InterfaceTypeList
    : InterfaceType
    {
        $$ = format("['InterfaceType': '$s']", $1);
    }
    | InterfaceTypeList COMMA InterfaceType
    {
        $$ = format("['InterfaceTypeList': '$s', 'Comma': ',', 'InterfaceType': '$s']", $1, $2);
    }
    ;

ClassBody
    : LCURL ClassBodyDeclarations RCURL
    {
        $$ = format("['LCurl': '{', 'ClassBodyDeclarations': '$s', 'RCurl': '}']", $1);
    }
    ;

ClassBodyDeclarations
    :
    | ClassBodyDeclaration
    {
        $$ = format("['ClassBodyDeclaration': '$s']", $1);
    }
    | ClassBodyDeclarations ClassBodyDeclaration
    {
        $$ = format("['ClassBodyDeclarations': '$s', 'ClassBodyDeclaration': '$s']", $1, $2);
    }
    ;

ClassBodyDeclaration
    : ClassMemberDeclaration
    {
        $$ = format("['ClassMemberDeclaration': '$s']", $1);
    }
    | StaticInitializer
    {
        $$ = format("['StaticInitializer': '$s']", $1);
    }
    | ConstructorDeclaration
    {
        $$ = format("['ConstructorDeclaration': '$s']", $1);
    }
    ;

ClassMemberDeclaration
    : FieldDeclaration
    {
        $$ = format("['FieldDeclaration': '$s']", $1);
    }
    | MethodDeclaration
    {
        $$ = format("['MethodDeclaration': '$s']", $1);
    }
    ;

StaticInitializer
    : STATIC Block
    {
        $$ = format("['Grammar': 'Static', 'Block': '$s']", $1);
    }
    ;

ConstructorDeclaration
    : ConstructorModifiers ConstructorDeclarator Throws ConstructorBody
    {
        $$ = format("['ConstructorModifiers': '$s', 'ConstructorDeclarator': '$s', 'Throws': '$s',
                    'ConstructorBody': '$s']", $1, $2, $3, $4);
    }
    ;

ConstructorModifiers
    :
    | ConstructorModifier
    {
        $$ = format("['ConstructorModifiers': '$s']", $1);
    }
    | ConstructorModifiers ConstructorModifier
    {
        $$ = format("['ConstructModifiers': '%s', 'ConstructModifier': '$s']", $1, $2);
    }
    ;

ConstructorModifier
    : PUBLIC
    {
        $$ = format("['Grammar': 'Public']");
    }
    | PROTECTED
    {
        $$ = format("['Grammar': 'Protected']");
    }
    | PRIVATE
    {
        $$ = format("['Grammar': 'Private']");
    }
    ;

ConstructorDeclarator
    : IDENTIFIER LPAREN FormalParameterList RPAREN
    {
        $$ = format("['Grammar': 'Identifier', 'LParen': '(', 'FormalParameterList': '$s', 'RParen': ')']",
                    $1);
    }
    ;

FormalParameterList
    :
    | FormalParameter
    {
        $$ = format("['FormalParameter': '$s']", $1);
    }
    | FormalParameterList FormalParameter
    {
        $$ = format("['FormalParameterList': '$s', 'FormalParameter': '$s']", $1, $2);
    }
    ;

FormalParameter
    : Type VariableDeclaratorId
    {
        $$ = format("['Type': '$s', 'VariableDeclaratorId': '$s']", $1, $2);
    }
    ;

Throws
    :
    | THROWS ClassTypeList
    {
        $$ = format("['Grammar': 'Throws', 'ClassTypeList': '$s']", $1);
    }
    ;

ClassTypeList
    : ClassType
    {
        $$ = format("['ClassType': '$s']", $1);
    }
    | ClassTypeList COMMA ClassType
    {
        $$ = format("['ClassTypeList': '$s', 'Comma': ',', 'ClassType': '$s']", $1, $2);
    }
    ;

ConstructorBody
    : LCURL ExplicitConstructorInvocation BlockStatements RCURL
    {
        $$ = format("['LCurl': '{', 'ExplicitConstructorInvocation': '$s', 'BlockStatements': '$s', 'RCurl': '}']",
                    $1, $2);
    }
    ;

ExplicitConstructorInvocation
    :
    | THIS LPAREN ArgumentList RPAREN
    {
        $$ = format("['Grammar': 'This', 'LParen': '(', 'ArgumentList': '$s', 'RParen': ')']", $1);
    }
    | SUPER LPAREN ArgumentList RPAREN
    {
        $$ = format("['Grammar': 'Super', 'LParen': '(', 'ArgumentList': '$s', 'RParen': ')']", $1);
    }
    ;

FieldDeclaration
    : FieldModifiers Type VariableDeclarators SEPARATOR
    {
        $$ = format("['FieldModifiers': '$s', 'Type': '$s', 'VariableDeclarators': '$s']", $1, $2, $3);
    }
    ;

FieldModifiers
    :
    | FieldModifier
    {
        $$ = format("['FieldModifier': '$s']", $1);
    }
    | FieldModifiers FieldModifier
    {
        $$ = format("['FieldModifiers': '$s', 'FieldModifier': '$s']", $1, $2);
    }
    ;

FieldModifier
    : PUBLIC
    {
        $$ = format("['Grammar': 'Public']");
    }
    | PROTECTED
    {
        $$ = format("['Grammar': 'Protected']");
    }
    | PRIVATE
    {
        $$ = format("['Grammar': 'Private']");
    }
    | STATIC
    {
        $$ = format("['Grammar': 'Static']");
    }
    | FINAL
    {
        $$ = format("['Grammar': 'Final']");
    }
    ;

VariableDeclarators
    : VariableDeclarator
    {
        $$ = format("['VariableDeclarator': '$s']", $1);
    }
    | VariableDeclarators COMMA VariableDeclarator
    {
        $$ = format("['VariableDeclarators': '$s', 'Comma': ',', 'VariableDeclarator': '$s']", $1, $2);
    }
    ;

VariableDeclarator
    : VariableDeclaratorId
    {
        $$ = format("['VariableDeclaratorId': '$s']", $1);
    }
    | VariableDeclaratorId EQUALS VariableInitializer
    {
        $$ = format("['VariableDeclaratorId': '$s', 'Equals': '=', 'VariableInitializer': '$s']", $1, $2);
    }
    ;

VariableDeclaratorId
    : IDENTIFIER
    {
        $$ = format("['Grammar': Identifier]");
    }
    | VariableDeclaratorId LBRACKET RBRACKET
    {
        $$ = format("['VariableDeclaratorId': '$s', 'LBracket': '[', 'RBracket': ']']", $1);
    }
    ;

VariableInitializer
    : Expression
    {
        $$ = format("['Expression': '$s']", $1);
    }
    | ArrayInitializer
    {
        $$ = format("['ArrayInitializer': '$s']", $1);
    }
    ;

MethodDeclaration
    : MethodHeader MethodBody
    {
        $$ = format("['MethodHeader': '$s', 'MethodBody': '$s']", $1, $2);
    }
    ;

MethodHeader
    : MethodModifiers ResultType MethodDeclarator Throws
    {
        $$ = format("['MethodModifiers': '%s', 'ResultType': '$s', 'MethodDeclarator': '$s', 'Throws': '$s']",
                    $1, $2, $3, $4);
    }
    ;

ResultType
    : Type
    {
        $$ = format("['ResultType': '$s']", $1);
    }
    | VOID
    {
        $$ = format("['Grammar': 'Void']");
    }
    ;

MethodModifiers
    :
    | MethodModifier
    {
        $$ = format("['MethodModifier': '$s']", $1);
    }
    | MethodModifiers MethodModifier
    {
        $$ = format("['MethodModifiers': '$s', 'MethodModifier': '$s']", $1, $2);
    }
    ;

MethodModifier
    : PUBLIC
    {
        $$ = format("['Grammar': 'Public']");
    }
    | PROTECTED
    {
        $$ = format("['Grammar': 'Protected']");
    }
    | PRIVATE
    {
        $$ = format("['Grammar': 'Private']");
    }
    | STATIC
    {
        $$ = format("['Grammar': 'Static']");
    }
    | ABSTRACT
    {
        $$ = format("['Grammar': 'Abstract']");
    }
    | FINAL
    {
        $$ = format("['Grammar': 'Final']");
    }
    ;

MethodDeclarator
    : IDENTIFIER LPAREN FormalParameterList RPAREN
    {
        $$ = format("['Grammar': 'Identifier', 'LParen': '(', 'FormalParameterList': '$s', 'RParen': ')']", $1);
    }
    ;

MethodBody
    : Block
    {
        $$ = format("['Block': '$s']", $1);
    }
    | SEPARATOR
    ;

InterfaceDeclaration
    : InterfaceModifiers INTERFACE IDENTIFIER ExtendsInterfaces InterfaceBody
    {
        $$ = format("['InterfaceModifiers': '$s', 'Grammar': 'Interface', 'Grammar': 'Identifier',
                    'ExtendsInterfaces': '$s', 'InterfaceBody': '$s']", $1, $2, $3);
    }
    ;

InterfaceModifiers
    :
    | InterfaceModifier
    {
        $$ = format("['InterfaceModifier': '$s']", $1);
    }
    | InterfaceModifiers InterfaceModifier
    {
        $$ = format("['InterfaceModifiers': '$s', 'InterfaceModifier': '$s']", $1, $2);
    }
    ;

InterfaceModifier
    : PUBLIC
    {
        $$ = format("['Grammar': 'Public']");
    }
    | ABSTRACT
    {
        $$ = format("['Grammar': 'Abstract']");
    }
    ;

ExtendsInterfaces
    : EXTENDS InterfaceType
    {
        $$ = format("['Grammar': 'Extends', 'InterfaceType': '$s']", $1);
    }
    | ExtendsInterfaces COMMA InterfaceType
    {
        $$ = format("['ExtendsInterfaces': '$s', 'Comma': ',', 'InterfaceType': '$s']", $1, $2);
    }
    ;

InterfaceBody
    : LCURL InterfaceMemberDeclarations RCURL
    {
        $$ = format("['LCurl': '{', 'InterfaceMemberDeclarations': '$s', 'RCurl': '$s']", $1, $2);
    }
    ;

InterfaceMemberDeclarations
    :
    | InterfaceMemberDeclaration
    {
        $$ = format("['InterfaceMemberDeclaration': '$s']", $1);
    }
    | InterfaceMemberDeclarations InterfaceMemberDeclaration
    {
        $$ = format("['InterfaceMemberDeclarations': '$s', 'InterfaceMemberDeclaration': '$s']", $1, $2);
    }
    ;

InterfaceMemberDeclaration
    : ConstantDeclaration
    {
        $$ = format("['ConstantDeclaration': '$s']", $1);
    }
    | AbstractMethodDeclaration
    {
        $$ = format("['AbstractMethodDeclaration': '$s']", $1);
    }
    ;

ConstantDeclaration
    : ConstantModifiers Type VariableDeclarator
    {
        $$ = format("['ConstantModifier': '$s', 'Type': '$s', 'VariableDeclarator': '$s']", $1, $2, $3);
    }
    ;

ConstantModifiers
    : PUBLIC
    {
        $$ = format("['Grammar': 'Public']");
    }
    | STATIC
    {
        $$ = format("['Grammar': 'Static']");
    }
    | FINAL
    {
        $$ = format("['Grammar': 'Final']");
    }
    ;

AbstractMethodDeclaration
    : AbstractMethodModifiers ResultType MethodDeclarator Throws SEPARATOR
    {
        $$ = format("['AbstractMethodModifiers': '$s', 'ResultType': '$s', 'MethodDeclarator': '$s', 'Throws': '$s',
                    $1, $2, $3, $4]");
    }
    ;

AbstractMethodModifiers
    :
    | AbstractMethodModifier
    {
        $$ = format("['AbstractMethodModifier': '$s']", $1);
    }
    | AbstractMethodModifiers AbstractMethodModifier
    {
        $$ = format("['AbstractMethodModifiers': '$s', 'AbstractMethodModifier': '$s']", $1, $2);
    }
    ;

AbstractMethodModifier
    : PUBLIC
    {
        $$ = format("['Grammar': 'Public']");
    }
    | ABSTRACT
    {
        $$ = format("['Grammar': 'Abstract']");
    }
    ;

ArrayInitializer
    : LCURL VariableInitializers RCURL
    {
        $$ = format("['LCurl': '{', 'VariableInitializers': '$s', 'RCurl': '}']", $1);
    }
    ;

VariableInitializers
    :
    | VariableInitializer
    {
        $$ = format("['VariableInitializer': '$s']", $1);
    }
    | VariableInitializers COMMA VariableInitializer
    {
        $$ = format("['VariableInitializers': '$s', 'Comma': ',', 'VariableInitializer': '$s']", $1, $2);
    }
    ;

VariableInitializer
    : Expression
    {
        $$ = format("['Expression': '$s']", $1);
    }
    | ArrayInitializer
    {
        $$ = format("['ArrayInitializer': '$s']", $1);
    }
    ;

/// Types ///////////////////////////////////////////////////////////////////

Type
    : IDENTIFIER
    {
        $$ = format("['Grammar': 'Identifier']");
    }
    | ArrayType
    {
        $$ = format("['ArrayType': '$s']", $1);
    }
    ;

ArrayType
    : Type LBRACKET RBRACKET
    {
        $$ = format("['Type': '$s', 'LBracket': '[', 'RBracket': ']']", $1);
    }
    ;

TypeName
    : IDENTIFIER
    {
        $$ = format("['Grammar': 'Identifier']");
    }
    | PackageName DOT IDENTIFIER
    {
        $$ = format("['PackageName': '$s', 'Dot': '.', 'Grammar': 'Identifier']", $1);
    }
    ;

ClassType
    : TypeName
    {
        $$ = format("['TypeName': '$s']", $1);
    }
    ;


InterfaceType
    : TypeName
    {
        $$ = format("['TypeName': '$s']", $1);
    }
    ;

PackageName
    : IDENTIFIER
    {
        $$ = format("['Grammar': 'Identifier']");
    }
    | PackageName DOT IDENTIFIER
    {
        $$ = format("['PackageName': '$s', 'Dot': '.', 'Grammar': 'Identifier']", $1);
    }
    ;



// Blocks and Commands ///////////////////////////////////////////

Block
    : LPAREN BlockStatements RPAREN
    {
        $$ = format("['LParen': '(', 'BlockStatements': '$s', 'RParen': ')']", $1);
    }
    ;

BlockOrStatement
    : Block
    {
        $$ = format("['Block': '$s']", $1);
    }
    | Statement
    {
        $$ = format("['Statement': '$s']", $1);
    }
    ;

BlockStatements
    :
    | BlockStatement
    {
        $$ = format("['BlockStatements': '$s']", $1);
    }
    | BlockStatements BlockStatement
    {
        $$ = format("['BlockStatements': '$s', 'BlockStatement': '$s']", $1, $2);
    }
    ;

BlockStatement
    : LocalVariableDeclaration SEPARATOR
    {
        $$ = format("['LocalVariableDeclaration': '$s']", $1);
    }
    | Statement
    {
        $$ = format("['Statement': '$s']", $1);
    }
    ;

LocalVariableDeclaration
    : Type VariableDeclarators
    {
        $$ = format("['Type': '$s', 'VariableDeclarators': '$s']", $1, $2);
    }
    ;

EmptyStatement
    : SEPARATOR
    ;



ExpressionStatement
    : StatementExpression SEPARATOR
    {
        $$ = format("['StatementExpression': '$s']", $1);
    }
    ;

StatementExpression
    : Assignment
    {
        $$ = format("['Assignment': '$s']", $1);
    }
    | Expression
    {
        $$ = format("['Expression': '$s']", $1);
    }
    | MethodInvocation
    {
        $$ = format("['MethodInvocation': '$s']", $1);
    }
    | ClassInstanceCreationExpression
    {
        $$ = format("['ClassInstanceCreationExpression': '$s']", $1);
    }
    ;

//TODO: CHECK THIS PLEASEEEEE
IfElseStatement
    : IF LPAREN Expression RPAREN Statement %prec NELSE
    {
        $$ = format("['Grammar': 'If', 'LParen': '(', 'Expression': '$s', 'RParen': ')', 'Statement': '$s',
                    'Grammar': 'NElse']", $1, $2);
    }
    | IF LPAREN Expression RPAREN  Statement ELSE Statement
    {
        $$ = format("['Grammar': 'If', 'LParen': '(', 'Expression': '$s', 'RParen': ')', 'Statement': '$s']",
                    $1, $2);
    }

WhileStatement
    : WHILE LPAREN Expression RPAREN Statement
    {
        $$ = format("['Grammar': 'While', 'LParen': '(', 'Expression': '$s', 'RParen': ')', 'Statement': '$s']",
                    $1, $2);
    }
    ;

DoWhileStatement
    : DO Statement WHILE LPAREN Expression RPAREN
    {
        $$ = format("['Grammar': 'Do', 'Statement': '$s', 'Grammar': 'While', 'LParen': '(', 'Expression': '$s',
                    'RParen': ')']", $1, $2);
    }
    ;

// TODO: CHECK THESE PLEAASEEE
ForCondition
    : Expression    SEPARATOR   Expression  SEPARATOR   Expression
    {
        $$ = format("['Expression': '$s', 'Expression': '$s', 'Expression': '$s']", $1, $2, $3);
    }
    | Expression    SEPARATOR   Expression  SEPARATOR
    {
        $$ = format("['Expression': '$s', 'Expression': '$s']", $1, $2);
    }
    | Expression    SEPARATOR               SEPARATOR
    {
        $$ = format("['Expression': '$s']", $1);
    }
    | Expression    SEPARATOR               SEPARATOR   Expression
    {
        $$ = format("['Expression': '$s', 'Expression': '$s']", $1, $2);
    }
    |               SEPARATOR   Expression  SEPARATOR   Expression
    {
        $$ = format("['Expression': '$s', 'Expression': '$s']", $1, $2);
    }
    |               SEPARATOR   Expression  SEPARATOR
    {
        $$ = format("['Expression': '$s']", $1);
    }
    |               SEPARATOR               SEPARATOR   Expression
    {
        $$ = format("['Expression': '$s']", $1);
    }
    |               SEPARATOR               SEPARATOR
    ;

ForStatement
    : FOR LPAREN ForCondition RPAREN Statement
    {
        $$ = format("['Grammar': 'For', 'LParen': '(', 'ForCondition': '$s', 'RParen': ')', 'Statement': '$s']",
                    $1, $2);
    }
    ;

Statement
    : StatementWithoutTrailingSubstatement
    {
        $$ = format("['StatementWithoutTrailingSubstatement': '$s']", $1);
    }
    | IfElseStatement
    {
        $$ = format("['IfElseStatement': '$s']", $1);
    }
    | WhileStatement
    {
        $$ = format("['WhileStatement': '$s']", $1);
    }
    | ForStatement
    {
        $$ = format("['ForStatement': '$s']", $1);
    }
    | DoWhileStatement
    {
        $$ = format("['DoWhileStatement': '$s']", $1);
    }
    ;

StatementWithoutTrailingSubstatement
    : Block
    {
        $$ = format("['Block': '$s']", $1);
    }
    | EmptyStatement
    {
        $$ = format("['EmptyStatement': '$s']", $1);
    }
    | ExpressionStatement
    {
        $$ = format("['ExpressionStatement': '$s']", $1);
    }
    | BreakStatement
    {
        $$ = format("['BreakStatement': '$s']", $1);
    }
    | ContinueStatement
    {
        $$ = format("['ContinueStatement': '$s']", $1);
    }
    | ReturnStatement
    {
        $$ = format("['ReturnStatement': '$s']", $1);
    }
    | ThrowsStatements
    {
        $$ = format("['ThrowsStatements': '$s']", $1);
    }
    | TryStatement
    {
        $$ = format("['TryStatement': '$s']", $1);
    }
    ;

BreakStatement
    : BREAK IDENTIFIER SEPARATOR
    {
        $$ = format("['Grammar': 'Break', 'Grammar': 'Identifier']");
    }
    | BREAK SEPARATOR
    {
        $$ = format("['Grammar': 'Break']");
    }
    ;

ContinueStatement
    : CONTINUE IDENTIFIER SEPARATOR
    {
        $$ = format("['Grammar': 'Continue', 'Grammar': 'Identifier']");
    }
    | CONTINUE SEPARATOR
    {
        $$ = format("['Grammar': 'Continue']");
    }
    ;

ReturnStatement
    : RETURN IDENTIFIER SEPARATOR
    {
        $$ = format("['Grammar': 'Return', 'Grammar': 'Identifier']");
    }
    | RETURN SEPARATOR
    {
        $$ = format("['Grammar': 'Return']");
    }
    ;

ThrowsStatements
    : THROW Expression SEPARATOR
    {
        $$ = format("['Grammar': 'Throw', 'Expression': '$s']", $1);
    }
    ;

TryStatement
    : TRY Block Catches
    {
        $$ = format("['Grammar': 'Try', 'Block': '$s', 'Catches': '$s']", $1, $2);
    }
    | TRY Block Catches Finally
    {
        $$ = format("['Grammar': 'Try', 'Block': '$s', 'Catches': '$s', 'Finally': '$s']", $1, $2, $3);
    }
    | TRY Block         Finally
    {
        $$ = format("['Grammar': 'Try', 'Block': '$s', 'Finally': '$s']", $1, $2);
    }
    ;

Catches
    : CatchClause
    {
        $$ = format("['CatchClause': '$s']", $1);
    }
    | Catches CatchClause
    {
        $$ = format("['Catches': '$s', 'CatchClause': '$s']", $1, $2);
    }
    ;

CatchClause
    : CATCH LPAREN FormalParameter RPAREN Block
    {
        $$ = format("['Grammar': 'Catch', 'LParen': '(', 'FormalParameter': '$s', 'RParen': ')', 'Block': '$s']",
                    $1, $2);
    }
    ;

Finally
    : FINALLY Block
    {
        $$ = format("['Grammar': 'Finally', 'Block': '$s']", $1);
    }



// Expressions ///////////////////////////////////////////////

ClassInstanceCreationExpression
    : NEW ClassType LPAREN ArgumentList RPAREN
    {
        $$ = format("['Grammar': 'New', 'ClassType': '$s', 'LParen': '(', 'ArgumentList': '$s', 'RParen': ')']",
                    $1, $2);
    }
    ;

Assignment
    : LeftHandSide AssignmentOperator Expression
    {
        $$ = format("['LeftHandSide': '$s', 'AssignmentOperator': '$s', 'Expression': '$s']", $1, $2, $3);
    }
    ;

ArgumentList
    :
    | Expression
    {
        $$ = format("['Expression': '$s']", $1);
    }
    | ArgumentList COMMA Expression
    {
        $$ = format("['ArgumentList': '$s', 'Comma': ',', 'Expression': '$s']", $1, $2);
    }
    ;

// TODO: Should we change AND to Ampersand? or change it in flex_tokens.l? same for OR
// TODO: no XOR in tokens
Expression
        : UnaryExpression
        {
            $$ = format("['UnaryExpression': '$s']", $1);
        }
        | Expression ASTERISK        Expression
        {
            $$ = format("['Expression': '$s', 'Asterisk': '*', 'Expression': '$s']", $1, $2);
        }
        | Expression SLASH           Expression
        {
            $$ = format("['Expression': '$s', 'Slash': '/', 'Expression': '$s']", $1, $2);
        }
        | Expression BACKSLASH       Expression
        {
            $$ = format("['Expression': '$s', 'Backslash': '%', 'Expression': '$s']", $1, $2);
        }
        | Expression PLUS            Expression
        {
            $$ = format("['Expression': '$s', 'Plus': '+', 'Expression': '$s']", $1, $2);
        }
        | Expression MINUS           Expression
        {
            $$ = format("['Expression': '$s', 'Minus': '-', 'Expression': '$s']", $1, $2);
        }
        | Expression LESS_LESS       Expression
        {
            $$ = format("['Expression': '$s', 'LessLess': '<<', 'Expression': '$s']", $1, $2);
        }
        | Expression GREATER_GREATER Expression
        {
            $$ = format("['Expression': '$s', 'GreaterGrater': '>>', 'Expression': '$s']", $1, $2);
        }
        | Expression LESS            Expression
        {
            $$ = format("['Expression': '$s', 'Less': '<', 'Expression': '$s']", $1, $2);
        }
        | Expression LESS_EQUALS     Expression
        {
            $$ = format("['Expression': '$s', 'LessEquals': '<=', 'Expression': '$s']", $1, $2);
        }
        | Expression GREATER         Expression
        {
            $$ = format("['Expression': '$s', 'Greater': '>', 'Expression': '$s']", $1, $2);
        }
        | Expression GREATER_EQUALS  Expression
        {
            $$ = format("['Expression': '$s', 'GreaterEquals': '>=', 'Expression': '$s']", $1, $2);
        }
        | Assignment
        {
            $$ = format("['Assignment': '$s']", $1);
        }
        | Expression SLASH_EQUALS    Expression
        {
            $$ = format("['Expression': '$s', 'SlashEquals': '!=', 'Expression': '$s']", $1, $2);
        }
        | Expression AND             Expression
        {
            $$ = format("['Expression': '$s', 'And': '&&', 'Expression': '$s']", $1, $2);
        }
        | Expression AMPERSAND       Expression
        {
            $$ = format("['Expression': '$s', 'Ampersand': '&', 'Expression': '$s']", $1, $2);
        }
        | Expression XOR             Expression
        {
            $$ = format("['Expression': '$s', 'Xor': '^', 'Expression': '$s']", $1, $2);
        }
        | Expression OR              Expression
        {
            $$ = format("['Expression': '$s', 'Or': '||', 'Expression': '$s']", $1, $2);
        }
        | Expression VERTICAL        Expression
        {
            $$ = format("['Expression': '$s', 'Vertical': '|', 'Expression': '$s']", $1, $2);
        }
        ;  // Adding an operator here - fill the precedence table at the top

// TODO: CHECK THESE PLEAAASEEE
// TODO: NO NOT TOKEN IN flex_tokens.l
UnaryExpression
        : PostfixExpression %prec LPAREN
        {
            $$ = format("['PostfixExpression': '$s', 'LParen': '(']", $1);
        }
        | NOT         UnaryExpression
        {
            $$ = format("['Not': '!', 'UnaryExpression': '$s']", $1);
        }
        | PLUS        UnaryExpression
        {
            $$ = format("['Plus': '+', 'UnaryExpression': '$s']", $1);
        }
        | MINUS       UnaryExpression
        {
            $$ = format("['Minus': '-', 'UnaryExpression': '$s']", $1);
        }
        | PLUS_PLUS   UnaryExpression
        {
            $$ = format("['PlusPlus': '++', 'UnaryExpression': '$s']", $1);
        }
        | MINUS_MINUS UnaryExpression
        {
            $$ = format("['MinusMinus': '--', 'UnaryExpression': '$s']", $1);
        }
        ;  // Just PostfixExpression has lower precedence than itself because of possible "routine call"

// TODO: CHECK THESE PLEEEASEE
PostfixExpression
        : PrimaryExpression
        {
            $$ = format("['PrimaryExpression': '$s']", $1);
        }
        | PostfixExpression DOT PrimaryExpression
        {
            $$ = format("['PostfixExpression': '$s', 'Dot': '.', 'PrimaryExpression': '$s']", $1, $2);
        }
        | PostfixExpression LPAREN               RPAREN %prec LPAREN
        {
            $$ = format("['PostfixExpression': '$s', 'LParen': '(', 'RParen': ')', 'LParen': '(']", $1);
        }
        | PostfixExpression LPAREN BlockOrStatement RPAREN %prec LPAREN
        {
            $$ = format("['PostfixExpression': '$s', 'LParen': '(', 'BlockOrStatement': '$s', 'RParen': ')',
                        'LParen': '(']", $1, $2);
        }
        | PostfixExpression PLUS_PLUS
        {
            $$ = format("['PostfixExpression': '$s', 'PlusPlus': '++']", $1);
        }
        | PostfixExpression MINUS_MINUS
        {
            $$ = format("['PostfixExpression': '$s', 'MinusMinus': '--']", $1);
        }
        ;

PrimaryExpression
        : LPAREN BlockOrStatement RPAREN  // Tuple or parenthesized expression
        {
            $$ = format("['LParen': '(', 'BlockOrStatement': '$s', 'RParen': ')']", $1);
        }
        | Literal
        {
            $$ = format("['Literal': '$s']", $1);
        }
        | NEW IDENTIFIER
        {
            $$ = format("['Grammar': 'New', 'Grammar': 'Identifier']");
        }
        | THIS
        {
            $$ = format("['Grammar': 'This']");
        }
        | SUPER
        {
            $$ = format("['Grammar': 'Super']");
        }
        ;

LeftHandSide
    : ExpressionName
    {
        $$ = format("['ExpressionName': '$s']", $1);
    }
    | FieldAccess
    {
        $$ = format("['FieldAccess': '$s']", $1);
    }
    | ArrayAccess
    {
        $$ = format("['ArrayAccess': '$s']", $1);
    }
    ;

AssignmentOperator
    : EQUALS
    {
        $$ = format("['Equals': '=']");
    }
    | ASTERISK EQUALS
    {
        $$ = format("['Asterisk': '*', 'Equals': '=']");
    }
    | BACKSLASH EQUALS
    {
        $$ = format("['Backslash': '%', 'Equals': '=']");
    }
    | SLASH_EQUALS
    {
        $$ = format("['SlashEquals': '/=']");
    }
    | PLUS EQUALS
    {
        $$ = format("['Plus': '+', 'Equals': '=']");
    }
    | MINUS EQUALS
    {
        $$ = format("['Minus': '-', 'Equals': '=']");
    }
    | LESS_LESS EQUALS
    {
        $$ = format("['LessLess': '<<', 'Equals': '=']");
    }
    | MORE_MORE EQUALS
    {
        $$ = format("['MoreMore': '>>', Equals': '='']");
    }
    | AMPERSAND EQUALS
    {
        $$ = format("['Ampersand': '&', 'Equals': '=']");
    }
    | VERTICAL EQUALS
    {
        $$ = format("['Vertical': '|', 'Equals': '=']");
    }
    ;

CastExpression
    : LPAREN Type RPAREN UnaryExpression
    {
        $$ = format("['LParen': '(', 'Type': '$s', 'RParen': ')', 'UnaryExpression': '$s']", $1, $2);
    }
    | LPAREN IDENTIFIER RPAREN UnaryExpressionNotPlusMinus
    {
        $$ = format("['LParen': '(', 'Grammar': 'Identifier', 'RParen': ')', 'UnaryExpression': '$s']", $1);
    }
    ;

UnaryExpressionNotPlusMinus
    : PostfixExpression
    {
        $$ = format("['PostfixExpression': '$s']", $1);
    }
    | TILDA UnaryExpression
    {
        $$ = format("['Tilda': '~', 'UnaryExpression': '$s']", $1);
    }
    | UnaryExpression
    {
        $$ = format("['UnaryExpression': '$s']", $1);
    }
    | CastExpression
    {
        $$ = format("['CastExpression': '$s']", $1);
    }
    ;

MethodInvocation
    : MethodName LPAREN ArgumentList RPAREN
    {
        $$ = format("['MethodName': '$s', 'LParen': '(', 'ArgumentList': '$s', 'RParen': ')']", $1, $2);
    }
    | Primary DOT IDENTIFIER LPAREN ArgumentList RPAREN
    {
        $$ = format("['Primary': '$s', 'Dot': '.', 'Grammar': 'Identifier', 'LParen': '(', 'ArgumentList': '$s',
                    'RParen': ')']", $1, $2);
    }
    | SUPER DOT IDENTIFIER LPAREN ArgumentList RPAREN
    {
        $$ = format("['Grammar': 'Super', 'Dot': '.', 'Grammar': 'Identifier', 'LParen': '(', 'ArgumentList': '$s',
                    'RParen': ')']", $1);
    }
    ;

FieldAccess
    : Primary DOT IDENTIFIER
    {
        $$ = format("['Primary': '$s', 'Dot': '.', 'Grammar': 'Identifier']", $1);
    }
    | SUPER DOT IDENTIFIER
    {
        $$ = format("['Grammar': 'Super', 'Dot': '.', 'Grammar': 'Identifier']");
    }
    ;

Primary
    : Literal
    {
        $$ = format("['Literal': '$s']", $1);
    }
    | THIS
    {
        $$ = format("['Grammar': 'This']");
    }
    | LPAREN Expression RPAREN
    {
        $$ = format("['LParen': '(', 'Expression': '$s', 'RParen': ')']", $1);
    }
    | ClassInstanceCreationExpression
    {
        $$ = format("['ClassInstanceCreationExpression': '$s']", $1);
    }
    | FieldAccess
    {
        $$ = format("['FieldAccess': '$s']", $1);
    }
    | MethodInvocation
    {
        $$ = format("['MethodInvocation': '$s']", $1);
    }
    | ArrayAccess
    {
        $$ = format("['ArrayAccess': '$s']", $1);
    }
    | NEW Type DimExprs Dims
    {
        $$ = format("['Grammar': 'New', 'Type': '$s', 'DimExprs': '$s', 'Dims': '$s']", $1, $2, $3);
    }
    ;

DimExprs
    : DimExpr
    {
        $$ = format("['DimExpr': '$s']", $1);
    }
    | DimExprs DimExpr
    {
        $$ = format("['DimExprs': '$s', 'DimExpr': '$s']", $1, $2);
    }
    ;

DimExpr
    : LBRACKET Expression RBRACKET
    {
        $$ = format("['LBracket': '[', 'Expression': '$s', 'RBracket': ']']", $1);
    }
    ;

Dims
    :
    | LBRACKET RBRACKET
    {
        $$ = format("['LBracket': '[', 'RBracket': ']']");
    }
    | Dims LBRACKET RBRACKET
    {
        $$ = format("['Dims': '$s', 'LBracket': '[', 'RBracket': ']']", $1);
    }
    ;

ArrayAccess
    : ExpressionName LBRACKET Expression RBRACKET
    {
        $$ = format("['ExpressionName': '$s', 'LBracket': '[', 'Expression': '$s', 'RBracket': ']']", $1, $2);
    }
    | Primary LBRACKET Expression RBRACKET
    {
        $$ = format("['Primary': '$s', 'LBracket': '[', 'Expression': '$s', 'RBracket': ']']", $1, $2);
    }
    ;

///Tokens//////////////////////////////////////////////////


ExpressionName
    : IDENTIFIER
    {
        $$ = format("['Grammar': 'Identifier']");
    }
    | AmbiguousName DOT IDENTIFIER
    {
        $$ = format("['AmbiguousName': '$s', 'Dot': '.', 'Grammar': 'Identifier']", $1);
    }
    ;

MethodName
    : ExpressionName
    {
        $$ = format("['ExpressionName': '$s']", $1);
    }
    ;

AmbiguousName
    : IDENTIFIER
    {
        $$ = format("['Grammar': 'Identifier']");
    }
    | AmbiguousName DOT IDENTIFIER
    {
        $$ = format("['AmbiguousName': '$s', 'Dot': '.', 'Grammar': 'Identifier']", $1);
    }
    ;


Literal
        : BooleanLiteral
        {
            $$ = format("['BooleanLiteral': '$s']", $1);
        }
        | INTEGER_LITERAL
        {
            $$ = format("['Grammar': 'IntegerLiteral']");
        }
        | REAL_LITERAL
        {
            $$ = format("['Grammar': 'RealLiteral']");
        }
        | CHAR_LITERAL
        {
            $$ = format("['Grammar': 'CharLiteral']");
        }
        | STRING_LITERAL
        {
            $$ = format("['Grammar': 'StringLiteral']");
        }
        | NULL_
        {
            $$ = format("['Grammar': 'Null']");
        }
        ;

BooleanLiteral
        : TRUE
        {
            $$ = format("['Grammar': 'True']");
        }
        | FALSE
        {
            $$ = format("['Grammar': 'True']");
        }
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
