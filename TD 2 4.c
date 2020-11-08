#include <stdio.h>
#include "symbols.h"
#include <errno.h>
extern FILE* yyin;
extern int yylex(void);
extern int yydebug;
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
						"IDENTIFIER",
						"INC_OP",
						"DEC_OP",
						"PTR_OP",
						"NOT",
						"NEGATE",
						"LEFT_OP",
						"RIGHT_OP",
						"COLON",
						"LEFT_PARANTHESES",
						"RIGHT_PARANTHESES",
						"LEFT_BRACES",
						"RIGHT_BRACES",
						"LEFT_BRACKETS",
						"RIGHT_BRACKETS",
						"POINT",
						"COMMA",
						"ELLIPSIS",
						"RIGHT_ASSIGN",
						"LEFT_ASSIGN",
						"TYPE_NAME"};

int main()
{
	yydebug = 1;
	yyin = fopen("input.csrc", "rt");

	if (yyin != NULL)
	{
		int result = yyparse();
		switch (result)
		{
		case 0:
			printf("Parse successful.\n");
			break;
		case 1:
			printf("Invalid input encountered.\n");
			break;
		case 2:
			printf("Out of memory.\n");
			break;
		default:
			break;
		}

		fclose(yyin);
	}
	else
	{
		printf("The input file could not be opened. Error: %d", errno);
	}

	
}