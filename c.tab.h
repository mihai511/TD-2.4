/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    END = 258,                     /* END  */
    AUTO = 259,                    /* AUTO  */
    BREAK = 260,                   /* BREAK  */
    CASE = 261,                    /* CASE  */
    CHAR = 262,                    /* CHAR  */
    CONST = 263,                   /* CONST  */
    CONTINUE = 264,                /* CONTINUE  */
    DEFAULT = 265,                 /* DEFAULT  */
    DO = 266,                      /* DO  */
    DOUBLE = 267,                  /* DOUBLE  */
    ELSE = 268,                    /* ELSE  */
    ENUM = 269,                    /* ENUM  */
    EXTERN = 270,                  /* EXTERN  */
    FLOAT = 271,                   /* FLOAT  */
    FOR = 272,                     /* FOR  */
    GOTO = 273,                    /* GOTO  */
    IF = 274,                      /* IF  */
    INLINE = 275,                  /* INLINE  */
    INT = 276,                     /* INT  */
    LONG = 277,                    /* LONG  */
    REGISTER = 278,                /* REGISTER  */
    RESTRICT = 279,                /* RESTRICT  */
    RETURN = 280,                  /* RETURN  */
    SHORT = 281,                   /* SHORT  */
    SIGNED = 282,                  /* SIGNED  */
    SIZEOF = 283,                  /* SIZEOF  */
    STATIC = 284,                  /* STATIC  */
    STRUCT = 285,                  /* STRUCT  */
    SWITCH = 286,                  /* SWITCH  */
    TYPEDEF = 287,                 /* TYPEDEF  */
    UNION = 288,                   /* UNION  */
    UNSIGNED = 289,                /* UNSIGNED  */
    VOID = 290,                    /* VOID  */
    VOLATILE = 291,                /* VOLATILE  */
    WHILE = 292,                   /* WHILE  */
    _BOOL = 293,                   /* _BOOL  */
    _COMPLEX = 294,                /* _COMPLEX  */
    _IMAGINARY = 295,              /* _IMAGINARY  */
    CONSTANT = 296,                /* CONSTANT  */
    STRING_LITERAL = 297,          /* STRING_LITERAL  */
    ASSIGN = 298,                  /* ASSIGN  */
    ADD = 299,                     /* ADD  */
    SUB = 300,                     /* SUB  */
    MUL = 301,                     /* MUL  */
    DIV = 302,                     /* DIV  */
    MOD = 303,                     /* MOD  */
    AND = 304,                     /* AND  */
    XOR = 305,                     /* XOR  */
    OR = 306,                      /* OR  */
    L_OP = 307,                    /* L_OP  */
    G_OP = 308,                    /* G_OP  */
    ADD_ASSIGN = 309,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 310,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 311,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 312,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 313,              /* MOD_ASSIGN  */
    AND_ASSIGN = 314,              /* AND_ASSIGN  */
    XOR_ASSIGN = 315,              /* XOR_ASSIGN  */
    OR_ASSIGN = 316,               /* OR_ASSIGN  */
    AND_OP = 317,                  /* AND_OP  */
    OR_OP = 318,                   /* OR_OP  */
    LE_OP = 319,                   /* LE_OP  */
    GE_OP = 320,                   /* GE_OP  */
    EQ_OP = 321,                   /* EQ_OP  */
    NE_OP = 322,                   /* NE_OP  */
    COND_OP = 323,                 /* COND_OP  */
    END_OF_INSTRUCTION = 324,      /* END_OF_INSTRUCTION  */
    IDENTIFIER = 325,              /* IDENTIFIER  */
    INC_OP = 326,                  /* INC_OP  */
    DEC_OP = 327,                  /* DEC_OP  */
    PTR_OP = 328,                  /* PTR_OP  */
    NOT = 329,                     /* NOT  */
    NEGATE = 330,                  /* NEGATE  */
    LEFT_OP = 331,                 /* LEFT_OP  */
    RIGHT_OP = 332,                /* RIGHT_OP  */
    COLON = 333,                   /* COLON  */
    LEFT_PARANTHESES = 334,        /* LEFT_PARANTHESES  */
    RIGHT_PARANTHESES = 335,       /* RIGHT_PARANTHESES  */
    LEFT_BRACES = 336,             /* LEFT_BRACES  */
    RIGHT_BRACES = 337,            /* RIGHT_BRACES  */
    LEFT_BRACKETS = 338,           /* LEFT_BRACKETS  */
    RIGHT_BRACKETS = 339,          /* RIGHT_BRACKETS  */
    POINT = 340,                   /* POINT  */
    COMMA = 341,                   /* COMMA  */
    ELLIPSIS = 342,                /* ELLIPSIS  */
    RIGHT_ASSIGN = 343,            /* RIGHT_ASSIGN  */
    LEFT_ASSIGN = 344,             /* LEFT_ASSIGN  */
    TYPE_NAME = 345                /* TYPE_NAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_H_INCLUDED  */
