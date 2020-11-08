%{
#include <stdio.h>

int yyerror(char *s);
extern int yylex(void);
%}

%token END
%token AUTO
%token BREAK
%token CASE
%token CHAR
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INLINE  
%token INT
%token LONG
%token REGISTER
%token RESTRICT
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF 
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE  
%token WHILE
%token _BOOL
%token _COMPLEX
%token _IMAGINARY
%token CONSTANT
%token STRING_LITERAL
%token ASSIGN
%token ADD
%token SUB
%token MUL
%token DIV
%token MOD
%token AND
%token XOR
%token OR
%token L_OP
%token G_OP
%token ADD_ASSIGN
%token SUB_ASSIGN
%token MUL_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN
%token AND_ASSIGN
%token XOR_ASSIGN
%token OR_ASSIGN
%token AND_OP
%token OR_OP
%token LE_OP
%token GE_OP
%token EQ_OP
%token NE_OP
%token COND_OP
%token END_OF_INSTRUCTION
%token IDENTIFIER
%token  INC_OP
%token  DEC_OP
%token  PTR_OP
%token  NOT
%token  NEGATE
%token  LEFT_OP
%token  RIGHT_OP
%token  COLON
%token  LEFT_PARANTHESES
%token  RIGHT_PARANTHESES
%token  LEFT_BRACES
%token  RIGHT_BRACES
%token  LEFT_BRACKETS
%token  RIGHT_BRACKETS
%token  POINT
%token  COMMA
%token  ELLIPSIS
%token  RIGHT_ASSIGN
%token  LEFT_ASSIGN
%token  TYPE_NAME

%start translation_unit
%%

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| LEFT_PARANTHESES expression RIGHT_PARANTHESES
	;

postfix_expression
	: primary_expression
	| postfix_expression LEFT_BRACKETS expression RIGHT_BRACKETS
	| postfix_expression LEFT_PARANTHESES RIGHT_PARANTHESES
	| postfix_expression LEFT_PARANTHESES argument_expression_list RIGHT_PARANTHESES
	| postfix_expression POINT IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list COMMA assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF LEFT_PARANTHESES type_name RIGHT_PARANTHESES
	;

unary_operator
	: AND
	| MUL
	| ADD
	| SUB
	| NOT
	| NEGATE
	;

cast_expression
	: unary_expression
	| LEFT_PARANTHESES type_name RIGHT_PARANTHESES cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression MUL cast_expression
	| multiplicative_expression DIV cast_expression
	| multiplicative_expression MOD cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression ADD multiplicative_expression
	| additive_expression SUB multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression L_OP shift_expression
	| relational_expression G_OP shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression AND equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression XOR and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression OR exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression COND_OP expression COLON conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: ASSIGN
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression COMMA assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers END_OF_INSTRUCTION
	| declaration_specifiers init_declarator_list END_OF_INSTRUCTION
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list COMMA init_declarator
	;

init_declarator
	: declarator
	| declarator ASSIGN initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER LEFT_BRACES struct_declaration_list RIGHT_BRACES
	| struct_or_union LEFT_BRACES struct_declaration_list RIGHT_BRACES
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list END_OF_INSTRUCTION
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list COMMA struct_declarator
	;

struct_declarator
	: declarator
	| COLON constant_expression
	| declarator COLON constant_expression
	;

enum_specifier
	: ENUM LEFT_BRACES enumerator_list RIGHT_BRACES
	| ENUM IDENTIFIER LEFT_BRACES enumerator_list RIGHT_BRACES
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list COMMA enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER ASSIGN constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| LEFT_PARANTHESES declarator RIGHT_PARANTHESES
	| direct_declarator LEFT_BRACKETS constant_expression RIGHT_BRACKETS
	| direct_declarator LEFT_BRACKETS RIGHT_BRACKETS
	| direct_declarator LEFT_PARANTHESES parameter_type_list RIGHT_PARANTHESES
	| direct_declarator LEFT_PARANTHESES identifier_list RIGHT_PARANTHESES
	| direct_declarator LEFT_PARANTHESES RIGHT_PARANTHESES
	;

pointer
	: MUL
	| MUL type_qualifier_list
	| MUL pointer
	| MUL type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list COMMA ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list COMMA parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list COMMA IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: LEFT_PARANTHESES abstract_declarator RIGHT_PARANTHESES
	| LEFT_BRACKETS RIGHT_BRACKETS
	| LEFT_BRACKETS constant_expression RIGHT_BRACKETS
	| direct_abstract_declarator LEFT_BRACKETS RIGHT_BRACKETS
	| direct_abstract_declarator LEFT_BRACKETS constant_expression RIGHT_BRACKETS
	| LEFT_PARANTHESES RIGHT_PARANTHESES
	| LEFT_PARANTHESES parameter_type_list RIGHT_PARANTHESES
	| direct_abstract_declarator LEFT_PARANTHESES RIGHT_PARANTHESES
	| direct_abstract_declarator LEFT_PARANTHESES parameter_type_list RIGHT_PARANTHESES
	;

initializer
	: assignment_expression
	| LEFT_BRACES initializer_list RIGHT_BRACES
	| LEFT_BRACES initializer_list COMMA RIGHT_BRACES
	;

initializer_list
	: initializer
	| initializer_list COMMA initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER COLON statement
	| CASE constant_expression COLON statement
	| DEFAULT COLON statement
	;

compound_statement
	: LEFT_BRACES RIGHT_BRACES
	| LEFT_BRACES statement_list RIGHT_BRACES
	| LEFT_BRACES declaration_list RIGHT_BRACES
	| LEFT_BRACES declaration_list statement_list RIGHT_BRACES
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: END_OF_INSTRUCTION
	| expression END_OF_INSTRUCTION
	;

selection_statement
	: IF LEFT_PARANTHESES expression RIGHT_PARANTHESES statement
	| IF LEFT_PARANTHESES expression RIGHT_PARANTHESES statement ELSE statement
	| SWITCH LEFT_PARANTHESES expression RIGHT_PARANTHESES statement
	;

iteration_statement
	: WHILE LEFT_PARANTHESES expression RIGHT_PARANTHESES statement
	| DO statement WHILE LEFT_PARANTHESES expression RIGHT_PARANTHESES END_OF_INSTRUCTION
	| FOR LEFT_PARANTHESES expression_statement expression_statement RIGHT_PARANTHESES statement
	| FOR LEFT_PARANTHESES expression_statement expression_statement expression RIGHT_PARANTHESES statement
	;

jump_statement
	: GOTO IDENTIFIER END_OF_INSTRUCTION
	| CONTINUE END_OF_INSTRUCTION
	| BREAK END_OF_INSTRUCTION
	| RETURN END_OF_INSTRUCTION
	| RETURN expression END_OF_INSTRUCTION
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%

#include <stdio.h>

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}