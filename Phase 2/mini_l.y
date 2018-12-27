/*
	CS152 Fall 2018 Project Phase 2
	Parser Generation Using Bison
	William Vagharfard, SID: 860792866
	Sungho Ahn, SID: 862026328
*/

%{
#define YY_NO_UNPUT
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char* s);
%}

%union{
   int num_init;
   char* char_init;
 }

%error-verbose
%start functions

%token <char_init> IDENT
%token <num_init> NUMBER

%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE
%token READ WRITE L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET COLON SEMICOLON COMMA
%token TRUE FALSE RETURN FOREACH IN
%left SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE ASSIGN AND OR
%right NOT


%%  		/* Grammar Rules */

functions:
		 {printf("functions -> epsilon\n");}
                 | function functions
		 {printf("functions -> function functions\n");};

function:        FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
		 {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");};

declaration:     identifiers COLON INTEGER
		 {printf("declaration -> identifiers COLON INTEGER\n");}
                 | identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		 {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", $5);};

declarations:
	 	 {printf("declarations -> epsilon\n");}
                 | declaration SEMICOLON declarations
		 {printf("declarations -> declaration SEMICOLON declarations\n");};

identifiers:     ident
	 	 {printf("identifiers -> ident \n");}
                 | ident COMMA identifiers
		 {printf("identifiers -> ident COMMA identifiers\n");}

statements:      statement SEMICOLON statements
		 {printf("statements -> statement SEMICOLON statements\n");}
                 | statement SEMICOLON
		 {printf("statements -> epsilon\nstatements -> statement SEMICOLON statements\n");};

statement:       var ASSIGN expression
		 {printf("statement -> var ASSIGN expression\n");}
                 | IF bool_exp THEN statements ENDIF
		 {printf("statement -> IF bool_exp THEN statements ENDIF\n");}
		 | IF bool_exp THEN statements ELSE statements ENDIF
		 {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
                 | WHILE bool_exp BEGINLOOP statements ENDLOOP
		 {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
                 | DO BEGINLOOP statements ENDLOOP WHILE bool_exp
		 {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
                 | FOREACH ident IN ident BEGINLOOP statements ENDLOOP
		 {printf("statement -> FOREACH ident IN ident BEGINLOOP statements ENDLOOP\n");}
                 | READ vars
		 {printf("statement -> READ vars\n");}
                 | WRITE vars
		 {printf("statement -> WRITE vars\n");}
                 | CONTINUE
		 {printf("statement -> CONTINUE\n");}
                 | RETURN expression
		 {printf("statement -> RETURN expression\n");};

var:             ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		 {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
                 | ident
		 {printf("var -> ident \n");};

vars:            var
		 {printf("vars -> var\n");}
                 | var COMMA vars
		 {printf("vars -> var COMMA vars\n");};

expression:      multiplicative_expression
		 {printf("expression -> multiplicative_expression\n");}
                 | multiplicative_expression ADD expression
		 {printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
                 | multiplicative_expression SUB expression
		 {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");};

expressions:
		 {printf("expressions -> epsilon\n");}
                 | expression COMMA expressions
		 {printf("expressions -> expression COMMA expressions\n");}
                 | expression
		 {printf("expressions -> expression\n");};

multiplicative_expression:         term
		 {printf("multiplicative_expression -> term\n");}
                 | term MULT multiplicative_expression
		 {printf("multiplicative_expression -> term MULT term\n");}
                 | term DIV multiplicative_expression
		 {printf("multiplicative_expression -> term DIV term\n");}
                 | term MOD term
		 {printf("multiplicative_expression -> term MOD term\n");};

term:            var
		 {printf("term -> var\n");}
                 | SUB var
		 {printf("term -> SUB var\n");}
                 | NUMBER
		 {printf("term -> NUMBER %d\n", $1);}
                 | SUB NUMBER
		 {printf("term -> SUB NUMBER %d\n", $2);}
                 | L_PAREN expression R_PAREN
		 {printf("term -> L_PAREN expression R_PAREN\n");}
                 | SUB L_PAREN expression R_PAREN
		 {printf("term -> SUB L_PAREN expression R_PAREN\n");}
                 | ident L_PAREN expressions R_PAREN
		 {printf("term -> ident L_PAREN expressions R_PAREN\n");};

bool_exp:        relation_and_exp
		 {printf("bool_exp -> relation_and_exp\n");}
                 | relation_and_exp OR bool_exp
                 {printf("bool_exp -> relation_and_exp OR relation_and_exp\n");};

relation_and_exp: relation_exp
		 {printf("relation_and_exp -> relation_exp\n");}
                 | relation_exp AND relation_and_exp
                 {printf("relation_and_exp -> relation_exp AND relation_exp\n");};

relation_exp:    NOT relation_exp
		 {printf("relation_exp -> NOT relation_exp1\n");}
                 | expression comp expression
		 {printf("relation_exp -> expression comp expression\n");}
                 | TRUE
		 {printf("relation_exp -> TRUE\n");}
                 | FALSE
		 {printf("relation_exp -> FALSE\n");}
                 | L_PAREN bool_exp R_PAREN
		 {printf("relation_exp -> L_PAREN bool_exp R_PAREN\n");};

comp:            EQ
		 {printf("comp -> EQ\n");}
                 | NEQ
                 {printf("comp -> NEQ\n");}
                 | LT
                 {printf("comp -> LT\n");}
                 | GT
                 {printf("comp -> GT\n");}
                 | LTE
                 {printf("comp -> LTE\n");}
                 | GTE
                 {printf("comp -> GTE\n");};

ident:      	IDENT
		{printf("ident -> IDENT %s \n", $1);}
%%


void yyerror(const char* s) {
  extern int currLine;
  extern char* yytext;

  printf("ERROR: %s at symbol \"%s\" on line %d\n", s, yytext, currLine);
  exit(1);
}
