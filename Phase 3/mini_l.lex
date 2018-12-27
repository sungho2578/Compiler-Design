/*
	CS152 Fall 2018 Project Phase 1
	Lexical Analyzer Generation Using Flex
	William Vagharfard, SID: 860792866
	Sungho Ahn, SID: 862026328
*/

%{
  #include <string>
  #include "y.tab.h"
  int currLine = 1, currPos = 0;
  char* progName;
%}

	/* basic rules */
DIGIT [0-9]
DIGIT_UNDERSCORE [0-9_]
LETTER [a-zA-Z]
LETTER_UNDERSCORE [a-zA-Z_]
CHAR [0-9a-zA-Z]
CHAR_UNDERSCORE [0-9a-zA-Z_]
SPACE [\t ]
NEWLINE [\n]

%%
	/* reserved words */
"function"     return FUNCTION; currPos += yyleng;
"beginparams"  return BEGIN_PARAMS; currPos += yyleng;
"endparams"    return END_PARAMS;  currPos += yyleng;
"beginlocals"  return BEGIN_LOCALS; currPos += yyleng;
"endlocals"    return END_LOCALS; currPos += yyleng;
"beginbody"    return BEGIN_BODY; currPos += yyleng;
"endbody"      return END_BODY; currPos += yyleng;
"integer"      return INTEGER; currPos += yyleng;
"array"        return ARRAY; currPos += yyleng;
"of"           return OF; currPos += yyleng;
"if"           return IF; currPos += yyleng;
"then"         return THEN; currPos += yyleng;
"endif"        return ENDIF; currPos += yyleng;
"else"         return ELSE; currPos += yyleng;
"while"        return WHILE; currPos += yyleng;
"do"           return DO; currPos += yyleng;
"beginloop"    return BEGINLOOP; currPos += yyleng;
"endloop"      return ENDLOOP; currPos += yyleng;
"continue"     return CONTINUE; currPos += yyleng;
"read"         return READ; currPos += yyleng;
"write"        return WRITE; currPos += yyleng;
"and"          return AND; currPos += yyleng;
"or"           return OR; currPos += yyleng;
"not"          return NOT; currPos += yyleng;
"true"         return TRUE; currPos += yyleng;
"false"        return FALSE; currPos += yyleng;
"return"       return RETURN; currPos += yyleng;
"foreach"      return FOREACH; currPos += yyleng;
"in"           return IN; currPos += yyleng;

	/* arithmetic operators  */
"-"      	return SUB; ++currPos;
"+"      	return ADD; ++currPos;
"*"       	return MULT; ++currPos;
"/"       	return DIV; ++currPos;
"%"       	return MOD; ++currPos;

	/* comparison operators */
"=="      	return EQ; currPos += 2;
"<>"      	return NEQ; currPos += 2;
"<"       	return LT; ++currPos;
">"       	return GT; ++currPos;
"<="      	return LTE; currPos += 2;
">="      	return GTE; currPos += 2;

	/* other symbols */
";"       	return SEMICOLON; ++currPos;
":"       	return COLON; ++currPos;
","       	return COMMA; ++currPos;
"("       	return L_PAREN; ++currPos;
")"       	return R_PAREN; ++currPos;
"["       	return L_SQUARE_BRACKET; ++currPos;
"]"       	return R_SQUARE_BRACKET; ++currPos;
":="      	return ASSIGN; currPos += 2;

	/* numbers */
{DIGIT}+ {yylval.num_init = atoi(yytext); return NUMBER; currPos += yyleng;}

	/* identifiers */
{LETTER}({CHAR_UNDERSCORE}*{CHAR}+)? {yylval.char_init = yytext; return IDENT; currPos += yyleng;}

	/* comments */
"##".*{NEWLINE} currPos = 0; ++currLine;

	/* error catching 1 */
({DIGIT}+{LETTER_UNDERSCORE}{CHAR_UNDERSCORE}*)|("_"{CHAR_UNDERSCORE}+) {
  printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(1);}

	/* error catching 2 */
{LETTER}({CHAR_UNDERSCORE}*{CHAR}+)?"_" {
  printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext); exit(1);}

	/* error catching 3 
. {printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n", currLine, currPos, yytext); exit(1);}*/

{SPACE}+   currPos += yyleng;
{NEWLINE}+      currLine += yyleng; currPos = 0;
%%

int yyparse();

int main(int argc, char* argv[]) {
  if (argc >= 2) {
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        yyin = stdin;
    }
  }
  else {
    yyin = stdin;
  }
  progName = strdup(argv[1]);
  yyparse();
}
