#include <stdio.h>
#include "symbols.h"
#include <errno.h>
extern FILE* yyin;
extern int yylex(void);
const char* lexUnits[] = {
						"END",
						"AUTO",
						"BREAK",
						"CASE",
						"CHAR",
						"CONST",
						"CONTINUE",
						"DEFAULT",
						"DO",
						"DOUBLE",
						"ELSE",
						"ENUM",
						"EXTERN",
						"FLOAT",
						"FOR",
						"GOTO",
						"IF",
						"INLINE",
						"INT",
						"LONG",
						"REGISTER",
						"RESTRICT",
						"RETURN",
						"SHORT",
						"SIGNED",
						"SIZEOF",
						"STATIC",
						"STRUCT",
						"SWITCH",
						"TYPEDEF",
						"UNION",
						"UNSIGNED",
						"VOID",
						"VOLATILE",
						"WHILE",
						"_BOOL",
						"_COMPLEX",
						"_IMAGINARY",
						"CONSTANT",
						"STRING_LITERAL",
						"ASSIGN",
						"ADD",
						"SUB",
						"MUL",
						"DIV",
						"MOD",
						"AND",
						"XOR",
						"OR",
						"L_OP",
						"G_OP",
						"ADD_ASSIGN",
						"SUB_ASSIGN",
						"MUL_ASSIGN",
						"DIV_ASSIGN",
						"MOD_ASSIGN",
						"AND_ASSIGN",
						"XOR_ASSIGN",
						"OR_ASSIGN",
						"AND_OP",
						"OR_OP",
						"LE_OP",
						"GE_OP",
						"EQ_OP",
						"NE_OP",
						"COND_OP",
						"END_OF_INSTRUCTION",
						"IDENTIFIER" };

int main()
{
	int tokenValue = 0;
	yyin = fopen("input.csrc", "rt");

	if (yyin != NULL)
	{
		while ((tokenValue = yylex()) != END)
		{
			printf(" -> TOKEN ID: %d; TOKEN VALUE %s", tokenValue, lexUnits[tokenValue]);
		}
	}
	else
	{
		printf("The input file could not be opened. Error: %d", errno);
	}

	
}