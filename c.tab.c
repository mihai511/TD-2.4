/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "c.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_END = 3,                        /* END  */
  YYSYMBOL_AUTO = 4,                       /* AUTO  */
  YYSYMBOL_BREAK = 5,                      /* BREAK  */
  YYSYMBOL_CASE = 6,                       /* CASE  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 10,                   /* DEFAULT  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_DOUBLE = 12,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_ENUM = 14,                      /* ENUM  */
  YYSYMBOL_EXTERN = 15,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 16,                     /* FLOAT  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_GOTO = 18,                      /* GOTO  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_INLINE = 20,                    /* INLINE  */
  YYSYMBOL_INT = 21,                       /* INT  */
  YYSYMBOL_LONG = 22,                      /* LONG  */
  YYSYMBOL_REGISTER = 23,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 24,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_SHORT = 26,                     /* SHORT  */
  YYSYMBOL_SIGNED = 27,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 28,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_STRUCT = 30,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 31,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 33,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 34,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 35,                      /* VOID  */
  YYSYMBOL_VOLATILE = 36,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL__BOOL = 38,                     /* _BOOL  */
  YYSYMBOL__COMPLEX = 39,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 40,                /* _IMAGINARY  */
  YYSYMBOL_CONSTANT = 41,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 42,            /* STRING_LITERAL  */
  YYSYMBOL_ASSIGN = 43,                    /* ASSIGN  */
  YYSYMBOL_ADD = 44,                       /* ADD  */
  YYSYMBOL_SUB = 45,                       /* SUB  */
  YYSYMBOL_MUL = 46,                       /* MUL  */
  YYSYMBOL_DIV = 47,                       /* DIV  */
  YYSYMBOL_MOD = 48,                       /* MOD  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_XOR = 50,                       /* XOR  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_L_OP = 52,                      /* L_OP  */
  YYSYMBOL_G_OP = 53,                      /* G_OP  */
  YYSYMBOL_ADD_ASSIGN = 54,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 55,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 56,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 57,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 58,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 59,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 60,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 61,                 /* OR_ASSIGN  */
  YYSYMBOL_AND_OP = 62,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 63,                     /* OR_OP  */
  YYSYMBOL_LE_OP = 64,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 65,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 66,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 67,                     /* NE_OP  */
  YYSYMBOL_COND_OP = 68,                   /* COND_OP  */
  YYSYMBOL_END_OF_INSTRUCTION = 69,        /* END_OF_INSTRUCTION  */
  YYSYMBOL_IDENTIFIER = 70,                /* IDENTIFIER  */
  YYSYMBOL_INC_OP = 71,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 72,                    /* DEC_OP  */
  YYSYMBOL_PTR_OP = 73,                    /* PTR_OP  */
  YYSYMBOL_NOT = 74,                       /* NOT  */
  YYSYMBOL_NEGATE = 75,                    /* NEGATE  */
  YYSYMBOL_LEFT_OP = 76,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 77,                  /* RIGHT_OP  */
  YYSYMBOL_COLON = 78,                     /* COLON  */
  YYSYMBOL_LEFT_PARANTHESES = 79,          /* LEFT_PARANTHESES  */
  YYSYMBOL_RIGHT_PARANTHESES = 80,         /* RIGHT_PARANTHESES  */
  YYSYMBOL_LEFT_BRACES = 81,               /* LEFT_BRACES  */
  YYSYMBOL_RIGHT_BRACES = 82,              /* RIGHT_BRACES  */
  YYSYMBOL_LEFT_BRACKETS = 83,             /* LEFT_BRACKETS  */
  YYSYMBOL_RIGHT_BRACKETS = 84,            /* RIGHT_BRACKETS  */
  YYSYMBOL_POINT = 85,                     /* POINT  */
  YYSYMBOL_COMMA = 86,                     /* COMMA  */
  YYSYMBOL_ELLIPSIS = 87,                  /* ELLIPSIS  */
  YYSYMBOL_RIGHT_ASSIGN = 88,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 89,               /* LEFT_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 90,                 /* TYPE_NAME  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_primary_expression = 92,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 93,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 94,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 95,          /* unary_expression  */
  YYSYMBOL_unary_operator = 96,            /* unary_operator  */
  YYSYMBOL_cast_expression = 97,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 98, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 99,       /* additive_expression  */
  YYSYMBOL_shift_expression = 100,         /* shift_expression  */
  YYSYMBOL_relational_expression = 101,    /* relational_expression  */
  YYSYMBOL_equality_expression = 102,      /* equality_expression  */
  YYSYMBOL_and_expression = 103,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 104,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 105,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 106,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 107,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 108,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 109,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 110,      /* assignment_operator  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_constant_expression = 112,      /* constant_expression  */
  YYSYMBOL_declaration = 113,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 114,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 115,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 116,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 117,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 118,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 119, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 120,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 121,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 122,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 123, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 124,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 125,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 126,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 127,          /* enumerator_list  */
  YYSYMBOL_enumerator = 128,               /* enumerator  */
  YYSYMBOL_type_qualifier = 129,           /* type_qualifier  */
  YYSYMBOL_declarator = 130,               /* declarator  */
  YYSYMBOL_direct_declarator = 131,        /* direct_declarator  */
  YYSYMBOL_pointer = 132,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 133,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 134,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 135,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 136,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 137,          /* identifier_list  */
  YYSYMBOL_type_name = 138,                /* type_name  */
  YYSYMBOL_abstract_declarator = 139,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 140, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 141,              /* initializer  */
  YYSYMBOL_initializer_list = 142,         /* initializer_list  */
  YYSYMBOL_statement = 143,                /* statement  */
  YYSYMBOL_labeled_statement = 144,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 145,       /* compound_statement  */
  YYSYMBOL_declaration_list = 146,         /* declaration_list  */
  YYSYMBOL_statement_list = 147,           /* statement_list  */
  YYSYMBOL_expression_statement = 148,     /* expression_statement  */
  YYSYMBOL_selection_statement = 149,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 150,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 151,           /* jump_statement  */
  YYSYMBOL_translation_unit = 152,         /* translation_unit  */
  YYSYMBOL_external_declaration = 153,     /* external_declaration  */
  YYSYMBOL_function_definition = 154       /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    94,    94,    95,    96,    97,   101,   102,   103,   104,
     105,   106,   107,   108,   112,   113,   117,   118,   119,   120,
     121,   122,   126,   127,   128,   129,   130,   131,   135,   136,
     140,   141,   142,   143,   147,   148,   149,   153,   154,   155,
     159,   160,   161,   162,   163,   167,   168,   169,   173,   174,
     178,   179,   183,   184,   188,   189,   193,   194,   198,   199,
     203,   204,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   222,   223,   227,   231,   232,   236,   237,
     238,   239,   240,   241,   245,   246,   250,   251,   255,   256,
     257,   258,   259,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   278,   279,   280,   284,   285,
     289,   290,   294,   298,   299,   300,   301,   305,   306,   310,
     311,   312,   316,   317,   318,   322,   323,   327,   328,   332,
     333,   337,   338,   342,   343,   344,   345,   346,   347,   348,
     352,   353,   354,   355,   359,   360,   365,   366,   370,   371,
     375,   376,   377,   381,   382,   386,   387,   391,   392,   393,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   409,
     410,   411,   415,   416,   420,   421,   422,   423,   424,   425,
     429,   430,   431,   435,   436,   437,   438,   442,   443,   447,
     448,   452,   453,   457,   458,   459,   463,   464,   465,   466,
     470,   471,   472,   473,   474,   478,   479,   483,   484,   488,
     489,   490,   491
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "END", "AUTO", "BREAK",
  "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE",
  "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY", "CONSTANT", "STRING_LITERAL",
  "ASSIGN", "ADD", "SUB", "MUL", "DIV", "MOD", "AND", "XOR", "OR", "L_OP",
  "G_OP", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "AND_OP", "OR_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "COND_OP", "END_OF_INSTRUCTION",
  "IDENTIFIER", "INC_OP", "DEC_OP", "PTR_OP", "NOT", "NEGATE", "LEFT_OP",
  "RIGHT_OP", "COLON", "LEFT_PARANTHESES", "RIGHT_PARANTHESES",
  "LEFT_BRACES", "RIGHT_BRACES", "LEFT_BRACKETS", "RIGHT_BRACKETS",
  "POINT", "COMMA", "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN", "TYPE_NAME",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
#endif

#define YYPACT_NINF (-215)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     633,  -215,  -215,  -215,  -215,   -47,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
       2,  -215,    37,  -215,  -215,   131,   832,   832,  -215,   -13,
    -215,   832,   725,   -24,     1,   285,  -215,  -215,   -63,   -41,
    -215,  -215,     2,    58,  -215,   -45,  -215,   561,  -215,  -215,
      65,   962,  -215,   362,  -215,   131,  -215,   725,   692,  1166,
     -24,  -215,  -215,   -41,   105,    31,  -215,  -215,  -215,  -215,
    -215,    37,  1276,  -215,   725,   962,   962,   327,  -215,    55,
     962,   109,  1423,   122,   116,  1154,   124,   146,   135,  1373,
    1429,   158,   161,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     165,  1468,  1468,  -215,  -215,   862,  -215,  -215,   188,   129,
    1423,  -215,   228,    29,   104,   144,   162,   209,   212,   217,
     208,    19,  -215,  -215,   -32,  -215,  -215,  -215,   449,   998,
    -215,  -215,  -215,  -215,   229,  -215,  -215,  -215,  -215,    -7,
     197,   194,  -215,    17,  -215,  -215,  -215,  -215,   198,    32,
    1423,  -215,   -41,  -215,  1276,  -215,  -215,  -215,   932,  -215,
    -215,  -215,  1423,   -26,  -215,   203,  -215,  -215,   205,  -215,
    1154,   247,  1384,   218,  1423,  -215,   -19,   862,  -215,  1423,
    1423,  1154,  1423,  -215,  -215,    42,   -14,   210,  -215,  -215,
     221,  1317,  1423,   224,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  1423,  -215,  1423,  1423,  1423,
    1423,  1423,  1423,  1423,  1423,  1423,  1423,  1423,  1423,  1423,
    1423,  1423,  1423,  1423,  1423,  1423,  -215,  1423,  -215,  1076,
    -215,  -215,   528,  1202,  -215,    -4,  -215,   136,  -215,   762,
    -215,   225,  -215,  -215,  -215,  -215,  -215,   145,  -215,  -215,
    -215,    55,  1423,  1154,  -215,   223,  1384,  -215,    43,  -215,
     216,    46,    56,  -215,  -215,   598,   155,  -215,  1423,  -215,
    -215,   113,  -215,    59,  -215,  -215,  -215,  -215,  -215,   228,
     228,    29,    29,   104,   104,   104,   104,   144,   144,   162,
     209,   212,   217,   208,    -1,  -215,  -215,  -215,   230,   233,
    -215,   204,   136,   795,  1221,  -215,  -215,  -215,  -215,  1257,
    -215,  -215,  -215,  1423,  1328,  1154,  -215,  1154,  1154,  -215,
    -215,  1423,  -215,  1423,  -215,  -215,  -215,  -215,   236,  -215,
     220,  -215,  -215,   126,  1154,   127,   292,  -215,  -215,  -215,
    -215,  -215,  -215,   240,  -215,  1154,  1154,  -215,  -215,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    91,    94,   129,    99,     0,    89,    98,    96,    97,
      92,    95,   100,    90,   108,    88,   109,   101,    93,   130,
     140,   133,     0,   104,   208,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   124,     0,
     144,   142,   141,     0,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,   187,     0,   212,     0,     0,     0,
     131,     1,   206,     0,   127,     0,   125,   145,   143,   134,
      77,     0,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,    24,    25,    23,    22,   191,
       2,     0,     0,    26,    27,     0,   183,     6,    16,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,   122,     0,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,   202,     0,   201,
       0,     0,     0,     0,     0,   203,     0,     0,    20,     0,
       0,     0,     0,    17,    18,     0,   155,     0,    12,    13,
       0,     0,     0,     0,    62,    66,    67,    63,    64,    65,
      70,    71,    72,    69,    68,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,     0,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
     112,     0,     0,     0,   182,     0,     0,   200,     0,   204,
       0,     0,     0,   180,     5,     0,   157,   156,     0,    11,
       8,     0,    14,     0,    10,    61,    31,    32,    33,    35,
      36,    38,    39,    41,    42,    43,    44,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,   170,     0,
     118,   121,   181,     0,     0,     0,    21,     0,     0,    29,
       9,     0,     7,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,     0,     0,     0,   193,   195,   196,    15,
      59,   168,   164,     0,   198,     0,     0,   197,   199,   194
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -215,   -57,  -215,   -98,    35,    36,    40,
      60,   102,   103,   101,   106,   108,  -215,   -54,   -23,  -215,
     -88,   -60,     7,     0,  -215,   254,  -215,    44,  -215,  -215,
     251,   -58,   -65,  -215,    76,  -215,   265,   178,    64,    -9,
     -30,   -12,  -215,   -52,  -215,    94,  -215,   159,  -130,  -214,
    -134,  -215,   -82,  -215,     4,   177,   214,  -158,  -215,  -215,
    -215,  -215,   302,  -215
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   271,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   163,   164,    30,    65,    66,    31,    32,
      33,    34,    42,   298,   141,   142,   143,   187,   299,   237,
     156,   247,   125,   126,   127,    57,   129,   130,   131,   132,
     133,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   176,   146,   171,    60,   147,   140,    24,    41,   236,
       3,   159,   206,    43,   256,   166,    47,   185,    63,   161,
     246,   302,   168,    38,    70,   146,    48,    49,   147,    64,
      68,    52,    20,   178,    39,    25,    56,   226,    19,    20,
     186,    71,    24,   250,   183,   184,   134,   231,    20,   155,
     259,    73,   302,   146,   227,    58,   267,    50,   139,    59,
     251,   136,   134,    21,   135,   265,    21,   227,    51,   233,
     165,    21,   232,   210,   211,   232,   233,   323,   157,   233,
      22,   135,   224,    20,    40,   227,   258,   225,   254,   185,
     244,   261,   262,   146,   185,    76,   147,   240,   314,   263,
     161,    20,   249,   241,   273,   146,    67,    21,   147,   276,
     277,   278,   186,   151,   243,    80,    22,   152,   152,    76,
      76,    76,   264,   315,    76,    21,   317,   235,   227,   227,
     234,   155,   227,   162,    22,   135,   318,   294,    69,    80,
      80,    80,   227,   322,    80,   227,    75,   231,   150,    76,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   272,    80,
     319,   312,   194,   301,   266,   332,   146,    20,   167,   147,
     212,   213,   275,   195,   196,   197,   198,   199,   200,   201,
     202,   169,   311,   320,   170,   146,   214,   215,   147,   321,
      44,    21,    76,   172,   295,    60,   343,   345,   216,   217,
      22,   146,   227,   227,   174,   303,   173,   203,   204,   304,
     235,    76,    80,    43,    74,   333,   335,   308,   218,   219,
     128,   309,   139,   336,   265,   337,   338,   179,   233,   139,
     180,    80,   165,   181,   330,   279,   280,   146,   281,   282,
     147,   328,   344,   266,   283,   284,   285,   286,   220,   188,
     189,   190,   221,   348,   349,   139,   146,   191,   222,   340,
     223,   192,    72,   193,   207,   208,   209,   238,   287,   288,
     239,   252,   242,   253,   255,    61,   155,   257,   326,     1,
     268,   269,     2,     3,   274,   307,   316,     4,   339,     5,
       6,     7,   313,   139,   342,   346,     8,     9,    10,   347,
     324,    11,    12,   325,    13,    14,   341,    15,    16,    17,
      18,    19,   289,   291,   290,   153,   158,   310,   149,   292,
     245,    20,   293,   306,     2,     3,   260,    62,     0,     4,
       0,     5,   229,     7,     0,     0,     0,     0,     8,     9,
       0,     0,     0,    11,    12,    21,     0,    14,     0,     0,
      16,    17,    18,    19,    22,     0,     1,    81,    82,     2,
       3,    83,    84,    85,     4,    23,     5,     6,     7,    86,
      87,    88,     0,     8,     9,    10,     0,    89,    11,    12,
      90,    13,    14,    91,    15,    16,    17,    18,    19,    92,
       0,     0,     0,    93,    94,     0,    95,    96,    97,   160,
       0,    98,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,   100,   101,   102,     0,   103,   104,     0,     0,
       0,   105,     0,    53,   106,     0,     0,     0,     0,     0,
       0,     0,    23,     1,    81,    82,     2,     3,    83,    84,
      85,     4,     0,     5,     6,     7,    86,    87,    88,     0,
       8,     9,    10,     0,    89,    11,    12,    90,    13,    14,
      91,    15,    16,    17,    18,    19,    92,     0,     0,     0,
      93,    94,     0,    95,    96,    97,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,   102,     0,   103,   104,     0,     0,     0,   105,     0,
      53,   228,     1,     0,     0,     2,     3,     0,     0,    23,
       4,     0,     5,     6,     7,     0,     0,     0,     0,     8,
       9,    10,     0,     0,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     1,     0,     0,     2,     3,
       0,     0,     0,     4,    20,     5,     6,     7,     0,     0,
       0,     0,     8,     9,    10,     0,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,    21,     0,
       0,     0,     1,     0,    72,     2,     3,   232,   297,     0,
       4,   233,     5,     6,     7,     0,     0,     0,    23,     8,
       9,    10,     0,     0,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     0,     0,     1,     0,     0,
       2,     3,    53,     0,    20,     4,     0,     5,     6,     7,
       0,    23,     0,     0,     8,     9,    10,     0,     0,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,   265,   297,    20,
       0,   233,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     2,
       3,     0,     0,    21,     4,     0,     5,     6,     7,     0,
       0,     0,    22,     8,     9,    10,     0,     0,    11,    12,
       0,    13,    14,    23,    15,    16,    17,    18,    19,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     0,     8,     9,    10,     0,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,   137,     0,     0,     0,     1,     0,     0,     2,
       3,     0,   138,     0,     4,     0,     5,     6,     7,     0,
       0,     0,    23,     8,     9,    10,     0,     0,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     1,
       0,     0,     2,     3,     0,     0,    53,     4,     0,     5,
       6,     7,     0,     0,     0,    23,     8,     9,    10,     0,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,   305,
       0,     0,    23,     8,     9,    10,     0,     0,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     2,
       3,     0,     0,     0,     4,   327,     5,     0,     7,     0,
       0,     0,     0,     8,     9,    23,     0,     0,    11,    12,
      90,     0,    14,     0,     0,    16,    17,    18,    19,     0,
       0,     0,     0,    93,    94,     0,    95,    96,    97,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   101,   102,     0,   103,   104,     0,     2,
       3,   105,     0,     0,     4,     0,     5,     0,     7,     0,
       0,     0,    23,     8,     9,     0,     0,     0,    11,    12,
       0,     0,    14,     0,     0,    16,    17,    18,    19,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     8,     9,     0,     0,     0,    11,    12,
       0,     0,    14,     0,     0,    16,    17,    18,    19,     0,
       0,     0,     0,    81,    82,     0,     0,    83,    84,    85,
       0,     0,     0,     0,   248,    86,    87,    88,     0,     0,
       0,     0,    23,    89,     0,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,    93,
      94,     0,    95,    96,    97,     0,     0,    98,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,   100,   101,
     102,     0,   103,   104,     0,     0,     0,   105,     0,    53,
     230,    81,    82,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,    87,    88,     0,     0,     0,     0,
       0,    89,     0,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,    93,    94,     0,
      95,    96,    97,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,     0,
     103,   104,     0,     0,     0,   105,     0,    53,   296,    81,
      82,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,    87,    88,     0,     0,     0,     0,     0,    89,
       0,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,    92,     0,     0,    90,    93,    94,     0,    95,    96,
      97,     0,     0,    98,     0,     0,     0,    93,    94,     0,
      95,    96,    97,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,     0,   103,   104,
      90,     0,     0,   105,     0,    53,   144,   101,   102,     0,
     103,   104,     0,    93,    94,   105,    95,    96,    97,    90,
     145,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,     0,    95,    96,    97,     0,     0,
      98,     0,   144,   101,   102,     0,   103,   104,     0,     0,
       0,   105,     0,     0,     0,    90,   300,     0,     0,     0,
       0,   144,   101,   102,     0,   103,   104,     0,    93,    94,
     105,    95,    96,    97,    90,   329,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,     0,
      95,    96,    97,     0,     0,    98,     0,   144,   101,   102,
       0,   103,   104,     0,     0,     0,   105,     0,   154,   331,
       0,     0,     0,     0,     0,    90,   144,   101,   102,     0,
     103,   104,     0,     0,     0,   105,    90,   154,    93,    94,
       0,    95,    96,    97,     0,     0,    98,     0,     0,    93,
      94,     0,    95,    96,    97,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   101,   102,
       0,   103,   104,     0,     0,     0,   105,   270,   144,   101,
     102,    90,   103,   104,     0,     0,     0,   105,   334,     0,
       0,     0,    90,     0,    93,    94,     0,    95,    96,    97,
       0,     0,    98,     0,     0,    93,    94,     0,    95,    96,
      97,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,   175,   144,   101,   102,     0,   103,   104,     0,
       0,    90,   105,    99,   144,   101,   102,    90,   103,   104,
       0,     0,     0,   105,    93,    94,     0,    95,    96,    97,
      93,    94,    98,    95,    96,    97,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   101,   102,    90,   103,   104,   144,
     101,   102,   105,   103,   104,     0,     0,     0,   177,    93,
      94,     0,    95,    96,    97,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   101,
     102,     0,   103,   104,     0,     0,     0,   182
};

static const yytype_int16 yycheck[] =
{
       0,    89,    59,    85,    34,    59,    58,     0,    20,   139,
       8,    76,   110,    22,   172,    80,    25,   105,    81,    77,
     154,   235,    82,    70,    69,    82,    26,    27,    82,    70,
      42,    31,    46,    90,    81,    35,    32,    69,    36,    46,
     105,    86,    35,    69,   101,   102,    55,   129,    46,    72,
      69,    47,   266,   110,    86,    79,   186,    70,    58,    83,
      86,    57,    71,    70,    57,    79,    70,    86,    81,    83,
      79,    70,    79,    44,    45,    79,    83,    78,    74,    83,
      79,    74,    63,    46,    20,    86,   174,    68,   170,   177,
     150,   179,   180,   150,   182,    51,   150,    80,   256,   181,
     158,    46,   162,    86,   192,   162,    42,    70,   162,   207,
     208,   209,   177,    82,    82,    51,    79,    86,    86,    75,
      76,    77,    80,    80,    80,    70,    80,   139,    86,    86,
     139,   154,    86,    78,    79,   128,    80,   225,    80,    75,
      76,    77,    86,    84,    80,    86,    81,   229,    43,   105,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   191,   105,
     268,   253,    43,   233,   186,   309,   233,    46,    69,   233,
      76,    77,   205,    54,    55,    56,    57,    58,    59,    60,
      61,    69,   252,    80,    78,   252,    52,    53,   252,    86,
      69,    70,   158,    79,   227,   235,    80,    80,    64,    65,
      79,   268,    86,    86,    79,    79,    70,    88,    89,    83,
     232,   177,   158,   232,    47,   313,   314,    82,    66,    67,
      53,    86,   232,   315,    79,   317,   318,    79,    83,   239,
      79,   177,   251,    78,   304,   210,   211,   304,   212,   213,
     304,   303,   334,   265,   214,   215,   216,   217,    49,    71,
      72,    73,    50,   345,   346,   265,   323,    79,    51,   323,
      62,    83,    43,    85,    46,    47,    48,    80,   218,   219,
      86,    78,    84,    78,    37,     0,   309,    69,    84,     4,
      80,    70,     7,     8,    70,    70,    80,    12,   321,    14,
      15,    16,    79,   303,    84,    13,    21,    22,    23,    69,
      80,    26,    27,    80,    29,    30,    80,    32,    33,    34,
      35,    36,   220,   222,   221,    71,    75,   251,    63,   223,
     152,    46,   224,   239,     7,     8,   177,    35,    -1,    12,
      -1,    14,   128,    16,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    26,    27,    70,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    79,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    90,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    44,    45,    46,    82,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    42,    -1,    44,    45,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    74,    75,    -1,    -1,    -1,    79,    -1,
      81,    82,     4,    -1,    -1,     7,     8,    -1,    -1,    90,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,     4,    -1,    -1,     7,     8,
      -1,    -1,    -1,    12,    46,    14,    15,    16,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    26,    27,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    70,    -1,
      -1,    -1,     4,    -1,    43,     7,     8,    79,    80,    -1,
      12,    83,    14,    15,    16,    -1,    -1,    -1,    90,    21,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    -1,    -1,     4,    -1,    -1,
       7,     8,    81,    -1,    46,    12,    -1,    14,    15,    16,
      -1,    90,    -1,    -1,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    29,    30,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    46,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,    -1,    -1,    70,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    79,    21,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    90,    32,    33,    34,    35,    36,     4,
      -1,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    30,    -1,    32,    33,    34,
      35,    36,    70,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,    -1,    80,    -1,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    90,    21,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,     4,
      -1,    -1,     7,     8,    -1,    -1,    81,    12,    -1,    14,
      15,    16,    -1,    -1,    -1,    90,    21,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    30,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,    15,    16,    87,
      -1,    -1,    90,    21,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,     7,
       8,    -1,    -1,    -1,    12,    80,    14,    -1,    16,    -1,
      -1,    -1,    -1,    21,    22,    90,    -1,    -1,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    41,    42,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    74,    75,    -1,     7,
       8,    79,    -1,    -1,    12,    -1,    14,    -1,    16,    -1,
      -1,    -1,    90,    21,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,    -1,    16,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,     5,     6,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    82,    17,    18,    19,    -1,    -1,
      -1,    -1,    90,    25,    -1,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    74,    75,    -1,    -1,    -1,    79,    -1,    81,
      82,     5,     6,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      74,    75,    -1,    -1,    -1,    79,    -1,    81,    82,     5,
       6,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    28,    41,    42,    -1,    44,    45,
      46,    -1,    -1,    49,    -1,    -1,    -1,    41,    42,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    74,    75,
      28,    -1,    -1,    79,    -1,    81,    70,    71,    72,    -1,
      74,    75,    -1,    41,    42,    79,    44,    45,    46,    28,
      84,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    44,    45,    46,    -1,    -1,
      49,    -1,    70,    71,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    28,    84,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    74,    75,    -1,    41,    42,
      79,    44,    45,    46,    28,    84,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    70,    71,    72,
      -1,    74,    75,    -1,    -1,    -1,    79,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    28,    70,    71,    72,    -1,
      74,    75,    -1,    -1,    -1,    79,    28,    81,    41,    42,
      -1,    44,    45,    46,    -1,    -1,    49,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    74,    75,    -1,    -1,    -1,    79,    80,    70,    71,
      72,    28,    74,    75,    -1,    -1,    -1,    79,    80,    -1,
      -1,    -1,    28,    -1,    41,    42,    -1,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    41,    42,    -1,    44,    45,
      46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    74,    75,    -1,
      -1,    28,    79,    69,    70,    71,    72,    28,    74,    75,
      -1,    -1,    -1,    79,    41,    42,    -1,    44,    45,    46,
      41,    42,    49,    44,    45,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    28,    74,    75,    70,
      71,    72,    79,    74,    75,    -1,    -1,    -1,    79,    41,
      42,    -1,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    74,    75,    -1,    -1,    -1,    79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     8,    12,    14,    15,    16,    21,    22,
      23,    26,    27,    29,    30,    32,    33,    34,    35,    36,
      46,    70,    79,    90,   113,   114,   117,   118,   119,   120,
     126,   129,   130,   131,   132,   152,   153,   154,    70,    81,
     129,   132,   133,   130,    69,   115,   116,   130,   114,   114,
      70,    81,   114,    81,   113,   114,   145,   146,    79,    83,
     131,     0,   153,    81,    70,   127,   128,   129,   132,    80,
      69,    86,    43,   145,   146,    81,   118,   121,   122,   123,
     129,     5,     6,     9,    10,    11,    17,    18,    19,    25,
      28,    31,    37,    41,    42,    44,    45,    46,    49,    69,
      70,    71,    72,    74,    75,    79,    82,    92,    93,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   111,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   130,   113,   145,    70,    80,   114,
     134,   135,   136,   137,    70,    84,    95,   108,   112,   127,
      43,    82,    86,   116,    81,   109,   141,   145,   121,   123,
      82,   122,    78,   124,   125,   130,   123,    69,   112,    69,
      78,   143,    79,    70,    79,    69,   111,    79,    95,    79,
      79,    78,    79,    95,    95,   111,   123,   138,    71,    72,
      73,    79,    83,    85,    43,    54,    55,    56,    57,    58,
      59,    60,    61,    88,    89,   110,    97,    46,    47,    48,
      44,    45,    76,    77,    52,    53,    64,    65,    66,    67,
      49,    50,    51,    62,    63,    68,    69,    86,    82,   147,
      82,   143,    79,    83,   130,   132,   139,   140,    80,    86,
      80,    86,    84,    82,   112,   128,   141,   142,    82,   112,
      69,    86,    78,    78,   143,    37,   148,    69,   111,    69,
     138,   111,   111,   143,    80,    79,   132,   139,    80,    70,
      80,    94,   109,   111,    70,   109,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   101,   101,   102,
     103,   104,   105,   106,   111,   109,    82,    80,   134,   139,
      84,   112,   140,    79,    83,    87,   136,    70,    82,    86,
     125,   112,   143,    79,   148,    80,    80,    80,    80,    97,
      80,    86,    84,    78,    80,    80,    84,    80,   134,    84,
     112,    82,   141,   111,    80,   111,   143,   143,   143,   109,
     108,    80,    84,    80,   143,    80,    13,    69,   143,   143
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    98,    98,    99,    99,    99,   100,   100,   100,
     101,   101,   101,   101,   101,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   111,   111,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   119,   120,   120,
     121,   121,   122,   123,   123,   123,   123,   124,   124,   125,
     125,   125,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   142,   142,   143,   143,   143,   143,   143,   143,
     144,   144,   144,   145,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   149,   150,   150,   150,   150,
     151,   151,   151,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1726 "c.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 494 "c.y"

#include <stdio.h>

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
