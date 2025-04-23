/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"

#define YYDEBUG 1

#include <cstdio>
#include <cstdlib>
#include <string>
#include <memory>
#include "ast.h"

// 声明全局根变量
std::unique_ptr<BaseAST> root;

int yylex();
void yyerror(const char *s);
extern char* yytext;


#line 89 "yacc.tab.c"

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

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_CONST = 4,                      /* CONST  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_BREAK = 6,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 7,                   /* CONTINUE  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_GETINT = 11,                    /* GETINT  */
  YYSYMBOL_PRINTF = 12,                    /* PRINTF  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_LESS = 17,                      /* LESS  */
  YYSYMBOL_LEQ = 18,                       /* LEQ  */
  YYSYMBOL_GRE = 19,                       /* GRE  */
  YYSYMBOL_GRQ = 20,                       /* GRQ  */
  YYSYMBOL_EQL = 21,                       /* EQL  */
  YYSYMBOL_NEQ = 22,                       /* NEQ  */
  YYSYMBOL_INTCON = 23,                    /* INTCON  */
  YYSYMBOL_IDENFR = 24,                    /* IDENFR  */
  YYSYMBOL_STRCON = 25,                    /* STRCON  */
  YYSYMBOL_26_ = 26,                       /* '('  */
  YYSYMBOL_27_ = 27,                       /* ')'  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* '['  */
  YYSYMBOL_30_ = 30,                       /* ']'  */
  YYSYMBOL_31_ = 31,                       /* '='  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* '+'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '!'  */
  YYSYMBOL_38_ = 38,                       /* '*'  */
  YYSYMBOL_39_ = 39,                       /* '/'  */
  YYSYMBOL_40_ = 40,                       /* '%'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_CompUnit = 42,                  /* CompUnit  */
  YYSYMBOL_CompUnit1List = 43,             /* CompUnit1List  */
  YYSYMBOL_CompUnit1 = 44,                 /* CompUnit1  */
  YYSYMBOL_CompUnit2 = 45,                 /* CompUnit2  */
  YYSYMBOL_MainFuncDef = 46,               /* MainFuncDef  */
  YYSYMBOL_CompUnit5 = 47,                 /* CompUnit5  */
  YYSYMBOL_Array = 48,                     /* Array  */
  YYSYMBOL_VarDef_value = 49,              /* VarDef_value  */
  YYSYMBOL_VarDefList = 50,                /* VarDefList  */
  YYSYMBOL_VarDef = 51,                    /* VarDef  */
  YYSYMBOL_CompUnit3 = 52,                 /* CompUnit3  */
  YYSYMBOL_ConstDefList = 53,              /* ConstDefList  */
  YYSYMBOL_ConstDef = 54,                  /* ConstDef  */
  YYSYMBOL_InitVal = 55,                   /* InitVal  */
  YYSYMBOL_ExpList = 56,                   /* ExpList  */
  YYSYMBOL_FuncFParams_ = 57,              /* FuncFParams_  */
  YYSYMBOL_FuncFParams = 58,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 59,                /* FuncFParam  */
  YYSYMBOL_CompUnit4 = 60,                 /* CompUnit4  */
  YYSYMBOL_Block = 61,                     /* Block  */
  YYSYMBOL_BlockItemList = 62,             /* BlockItemList  */
  YYSYMBOL_BlockItem = 63,                 /* BlockItem  */
  YYSYMBOL_Stmt = 64,                      /* Stmt  */
  YYSYMBOL_Stmt1 = 65,                     /* Stmt1  */
  YYSYMBOL_Stmt_else = 66,                 /* Stmt_else  */
  YYSYMBOL_Stmt_exp = 67,                  /* Stmt_exp  */
  YYSYMBOL_Stmt_exp2 = 68,                 /* Stmt_exp2  */
  YYSYMBOL_Exp = 69,                       /* Exp  */
  YYSYMBOL_Cond = 70,                      /* Cond  */
  YYSYMBOL_LVal = 71,                      /* LVal  */
  YYSYMBOL_PrimaryExp = 72,                /* PrimaryExp  */
  YYSYMBOL_UnaryExp = 73,                  /* UnaryExp  */
  YYSYMBOL_UnaryOp = 74,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams_ = 75,              /* FuncRParams_  */
  YYSYMBOL_FuncRParams = 76,               /* FuncRParams  */
  YYSYMBOL_MulExp = 77,                    /* MulExp  */
  YYSYMBOL_MulOp = 78,                     /* MulOp  */
  YYSYMBOL_AddExp = 79,                    /* AddExp  */
  YYSYMBOL_AddOp = 80,                     /* AddOp  */
  YYSYMBOL_RelExp = 81,                    /* RelExp  */
  YYSYMBOL_RelOp = 82,                     /* RelOp  */
  YYSYMBOL_EqExp = 83,                     /* EqExp  */
  YYSYMBOL_EqOp = 84,                      /* EqOp  */
  YYSYMBOL_LAndExp = 85,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 86                     /* LOrExp  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,    37,     2,     2,     2,    40,     2,     2,
      26,    27,    38,    35,    32,    36,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
       2,    31,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    29,     2,    30,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    72,    83,   100,   111,   122,   134,   153,
     162,   171,   183,   204,   207,   210,   213,   216,   219,   236,
     248,   260,   262,   276,   288,   295,   304,   311,   322,   325,
     328,   330,   342,   350,   363,   366,   373,   383,   391,   395,
     408,   416,   426,   436,   451,   464,   468,   472,   482,   495,
     497,   504,   507,   510,   513,   516,   519,   530,   533,   536,
     547,   554,   561,   568,   570,   577,   586,   592,   598,   605,
     608,   611,   613,   622,   624,   634,   640,   646,   653,   655,
     665,   671,   678,   680,   690,   696,   702,   708,   715,   717,
     727,   733,   740,   742,   751,   753
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
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "CONST", "INT",
  "BREAK", "CONTINUE", "IF", "ELSE", "WHILE", "GETINT", "PRINTF", "RETURN",
  "VOID", "AND", "OR", "LESS", "LEQ", "GRE", "GRQ", "EQL", "NEQ", "INTCON",
  "IDENFR", "STRCON", "'('", "')'", "';'", "'['", "']'", "'='", "','",
  "'{'", "'}'", "'+'", "'-'", "'!'", "'*'", "'/'", "'%'", "$accept",
  "CompUnit", "CompUnit1List", "CompUnit1", "CompUnit2", "MainFuncDef",
  "CompUnit5", "Array", "VarDef_value", "VarDefList", "VarDef",
  "CompUnit3", "ConstDefList", "ConstDef", "InitVal", "ExpList",
  "FuncFParams_", "FuncFParams", "FuncFParam", "CompUnit4", "Block",
  "BlockItemList", "BlockItem", "Stmt", "Stmt1", "Stmt_else", "Stmt_exp",
  "Stmt_exp2", "Exp", "Cond", "LVal", "PrimaryExp", "UnaryExp", "UnaryOp",
  "FuncRParams_", "FuncRParams", "MulExp", "MulOp", "AddExp", "AddOp",
  "RelExp", "RelOp", "EqExp", "EqOp", "LAndExp", "LOrExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,    12,     0,    10,    72,    32,  -128,    18,  -128,    48,
      37,  -128,  -128,    53,  -128,  -128,  -128,    51,    -1,  -128,
      55,    79,   131,  -128,    54,    79,    57,  -128,    18,    62,
      77,    80,    74,  -128,  -128,    52,   131,  -128,  -128,  -128,
      84,  -128,  -128,  -128,   131,    65,    20,   -14,  -128,    89,
     -14,  -128,   105,  -128,  -128,    62,    79,   131,  -128,    93,
    -128,  -128,  -128,  -128,  -128,   131,  -128,  -128,   131,   131,
    -128,  -128,    25,    62,  -128,    94,    95,    98,    99,   100,
     131,  -128,  -128,  -128,    63,  -128,  -128,   102,    90,  -128,
    -128,  -128,   107,   104,  -128,  -128,    65,   -19,  -128,  -128,
     103,  -128,  -128,  -128,   131,   131,   112,   111,  -128,  -128,
    -128,  -128,    15,  -128,   131,   131,  -128,    51,  -128,   119,
      20,    42,    43,   117,   132,   124,  -128,  -128,   126,  -128,
     125,  -128,  -128,    54,   137,  -128,  -128,  -128,  -128,   131,
    -128,  -128,   131,   131,   131,   137,   -16,   129,  -128,  -128,
     149,    20,    42,    43,   117,  -128,   134,   131,   136,   137,
    -128,  -128,  -128,  -128,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     0,     6,     0,
      13,     5,     9,     0,     7,     1,     4,    13,     0,    21,
       0,    28,     0,     8,    15,    28,     0,    20,     0,     0,
       0,     0,    29,    30,    62,    13,     0,    66,    67,    68,
       0,    61,    63,    73,     0,    78,    57,     0,    17,     0,
       0,    22,     0,    10,    32,     0,     0,    69,    59,     0,
      14,    65,    75,    76,    77,     0,    80,    81,     0,     0,
      16,    24,     0,     0,    23,     0,     0,     0,     0,     0,
      53,    40,    37,    42,     0,    35,    38,     0,    61,    11,
      31,    71,     0,    70,    60,    74,    79,     0,    26,    12,
       0,    33,    45,    46,     0,     0,     0,     0,    54,    34,
      36,    41,     0,    64,     0,     0,    25,    13,    18,     0,
      82,    88,    92,    94,    58,     0,    55,    47,     0,    39,
       0,    72,    27,    15,     0,    84,    86,    85,    87,     0,
      90,    91,     0,     0,     0,     0,     0,     0,    49,    19,
      51,    83,    89,    93,    95,    44,     0,     0,     0,     0,
      43,    48,    56,    50,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,    49,  -128,  -128,  -128,   -15,    26,  -128,
    -128,  -128,  -128,   141,   121,  -128,   150,  -128,   120,  -128,
     -25,  -128,    96,  -127,  -128,  -128,  -128,  -128,   -22,    73,
     -51,  -128,   -36,  -128,  -128,  -128,   109,  -128,   -99,  -128,
      39,  -128,    36,  -128,    38,  -128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    82,    11,    12,    23,    24,    48,    72,
     118,     8,    18,    19,    70,    97,    31,    32,    33,    14,
      83,    84,    85,    86,   129,   160,   107,   146,    87,   119,
      41,    42,    43,    44,    92,    93,    45,    65,    46,    68,
     121,   139,   122,   142,   123,   124
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,    88,    26,     9,    53,   120,   120,   150,    61,    34,
      35,   156,    36,   115,    59,   116,   157,     7,   155,    69,
      58,    37,    38,    39,    10,    71,   128,    27,    71,    95,
      89,    28,   164,    88,    13,    91,     1,     2,    34,    35,
     151,    36,    17,   120,   120,   120,     3,    98,   101,     6,
      37,    38,    39,    99,    16,    66,    67,   100,   108,   135,
     136,   137,   138,    21,   140,   141,    22,     1,     2,    75,
      76,    77,    15,    78,    20,    79,    80,     3,    57,    25,
      22,    22,    29,    88,    30,    47,    34,    35,    50,    36,
     130,    81,   131,   132,    88,    52,    52,   109,    37,    38,
      39,    54,   133,    62,    63,    64,    56,    55,    88,     1,
       2,    75,    76,    77,    60,    78,    73,    79,    80,     3,
      94,   112,   102,   103,   104,   105,   106,   117,    34,    35,
     111,    36,   143,    81,   113,   162,   114,   126,    52,   127,
      37,    38,    39,    75,    76,    77,   134,    78,   144,    79,
      80,   145,   147,   148,    34,    35,   158,    36,   159,   149,
      34,    35,   161,    36,   163,    81,    37,    38,    39,    51,
      52,    74,    37,    38,    39,    49,    90,    96,   125,   153,
     110,   152,   154
};

static const yytype_uint8 yycheck[] =
{
      22,    52,    17,     3,    29,   104,   105,   134,    44,    23,
      24,    27,    26,    32,    36,    34,    32,     5,   145,    33,
      35,    35,    36,    37,    24,    47,    11,    28,    50,    65,
      55,    32,   159,    84,    24,    57,     4,     5,    23,    24,
     139,    26,    24,   142,   143,   144,    14,    69,    73,     0,
      35,    36,    37,    28,     5,    35,    36,    32,    80,    17,
      18,    19,    20,    26,    21,    22,    29,     4,     5,     6,
       7,     8,     0,    10,    26,    12,    13,    14,    26,    26,
      29,    29,    27,   134,     5,    31,    23,    24,    31,    26,
     112,    28,   114,   115,   145,    33,    33,    34,    35,    36,
      37,    24,   117,    38,    39,    40,    32,    27,   159,     4,
       5,     6,     7,     8,    30,    10,    27,    12,    13,    14,
      27,    31,    28,    28,    26,    26,    26,    24,    23,    24,
      28,    26,    15,    28,    27,   157,    32,    25,    33,    28,
      35,    36,    37,     6,     7,     8,    27,    10,    16,    12,
      13,    27,    26,    28,    23,    24,    27,    26,     9,   133,
      23,    24,    28,    26,    28,    28,    35,    36,    37,    28,
      33,    50,    35,    36,    37,    25,    56,    68,   105,   143,
      84,   142,   144
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,    14,    42,    43,    44,     5,    52,     3,
      24,    45,    46,    24,    60,     0,    44,    24,    53,    54,
      26,    26,    29,    47,    48,    26,    48,    28,    32,    27,
       5,    57,    58,    59,    23,    24,    26,    35,    36,    37,
      69,    71,    72,    73,    74,    77,    79,    31,    49,    57,
      31,    54,    33,    61,    24,    27,    32,    26,    48,    69,
      30,    73,    38,    39,    40,    78,    35,    36,    80,    33,
      55,    69,    50,    27,    55,     6,     7,     8,    10,    12,
      13,    28,    44,    61,    62,    63,    64,    69,    71,    61,
      59,    69,    75,    76,    27,    73,    77,    56,    69,    28,
      32,    61,    28,    28,    26,    26,    26,    67,    69,    34,
      63,    28,    31,    27,    32,    32,    34,    24,    51,    70,
      79,    81,    83,    85,    86,    70,    25,    28,    11,    65,
      69,    69,    69,    48,    27,    17,    18,    19,    20,    82,
      21,    22,    84,    15,    16,    27,    68,    26,    28,    49,
      64,    79,    81,    83,    85,    64,    27,    32,    27,     9,
      66,    28,    69,    28,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    45,    45,
      46,    47,    47,    48,    48,    49,    49,    50,    50,    51,
      52,    53,    53,    54,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    60,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    70,    71,
      72,    72,    72,    73,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     1,
       4,     4,     4,     0,     3,     0,     2,     0,     3,     3,
       3,     1,     3,     4,     1,     3,     1,     3,     0,     1,
       1,     3,     2,     5,     3,     1,     2,     1,     1,     3,
       1,     2,     1,     6,     5,     2,     2,     3,     6,     2,
       4,     0,     2,     0,     1,     0,     3,     1,     1,     2,
       3,     1,     1,     1,     4,     2,     1,     1,     1,     0,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* CompUnit: CompUnit1List  */
#line 60 "yacc.y"
                         {
    auto ast = std::make_unique<CompUnitAST>();
    std::unique_ptr<CompUnit1ListAST> old(static_cast<CompUnit1ListAST*>((yyvsp[0].ast_ptr)));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    root = std::move(ast);  // 设置全局根节点
}
#line 1292 "yacc.tab.c"
    break;

  case 3: /* CompUnit1List: CompUnit1  */
#line 72 "yacc.y"
                          {
    auto ast = std::make_unique<CompUnit1ListAST>();
    std::unique_ptr<CompUnit1AST> old(static_cast<CompUnit1AST*>((yyvsp[0].ast_ptr)));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    (yyval.ast_ptr) = ast.release();
}
#line 1309 "yacc.tab.c"
    break;

  case 4: /* CompUnit1List: CompUnit1List CompUnit1  */
#line 83 "yacc.y"
                            {
    auto ast = std::make_unique<CompUnit1ListAST>();
    std::unique_ptr<CompUnit1ListAST> old(static_cast<CompUnit1ListAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<CompUnit1AST> old2(static_cast<CompUnit1AST*>((yyvsp[0].ast_ptr)));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    for (auto &now : old2->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old2->func_decl) ast->func_decl.push_back(std::move(now));
    if (old2->main_func_def) ast->main_func_def = std::move(old2->main_func_def);

    (yyval.ast_ptr) = ast.release();
}
#line 1331 "yacc.tab.c"
    break;

  case 5: /* CompUnit1: INT CompUnit2  */
#line 100 "yacc.y"
                         {
    auto ast = std::make_unique<CompUnit1AST>();
    std::unique_ptr<CompUnit2AST> old(static_cast<CompUnit2AST*>((yyvsp[0].ast_ptr)));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    (yyval.ast_ptr) = ast.release();
}
#line 1348 "yacc.tab.c"
    break;

  case 6: /* CompUnit1: CONST CompUnit3  */
#line 111 "yacc.y"
                    {
    auto ast = std::make_unique<CompUnit1AST>();
    std::unique_ptr<CompUnit3AST> old(static_cast<CompUnit3AST*>((yyvsp[0].ast_ptr)));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    (yyval.ast_ptr) = ast.release();
}
#line 1365 "yacc.tab.c"
    break;

  case 7: /* CompUnit1: VOID CompUnit4  */
#line 122 "yacc.y"
                   {
    auto ast = std::make_unique<CompUnit1AST>();
    std::unique_ptr<CompUnit4AST> old(static_cast<CompUnit4AST*>((yyvsp[0].ast_ptr)));

    //ast->decl = std::move(old->decl);
    //ast->func_decl = std::move(old->func_decl);
    for (auto &now : old->decl) ast->decl.push_back(std::move(now));
    for (auto &now : old->func_decl) ast->func_decl.push_back(std::move(now));
    if (old->main_func_def) ast->main_func_def = std::move(old->main_func_def);

    (yyval.ast_ptr) = ast.release();
}
#line 1382 "yacc.tab.c"
    break;

  case 8: /* CompUnit2: IDENFR CompUnit5  */
#line 134 "yacc.y"
                             {
    auto ast = std::make_unique<CompUnit2AST>();
    std::unique_ptr<CompUnit5AST> old(static_cast<CompUnit5AST*>((yyvsp[0].ast_ptr)));

    if (old->decl.size()) {
        std::unique_ptr<DeclAST> now(static_cast<DeclAST*>(old->decl[0].release()));
        now->name = std::string((yyvsp[-1].str_val));
        now->type = TYPE_INT;
        ast->decl.push_back(std::move(now));
    }

    if (old->func_decl.size()) {
        std::unique_ptr<FuncDeclAST> now(static_cast<FuncDeclAST*>(old->func_decl[0].release()));
        now->name = std::string((yyvsp[-1].str_val));
        now->type = TYPE_INT;
        ast->func_decl.push_back(std::move(now));
    }

    (yyval.ast_ptr) = ast.release();
}
#line 1407 "yacc.tab.c"
    break;

  case 9: /* CompUnit2: MainFuncDef  */
#line 153 "yacc.y"
              {
    auto ast = std::make_unique<CompUnit2AST>();
    std::unique_ptr<FuncDeclAST> old(static_cast<FuncDeclAST*>((yyvsp[0].ast_ptr)));

    old->type = TYPE_INT;
    ast->func_decl.push_back(std::move(old));

    (yyval.ast_ptr) = ast.release();
}
#line 1421 "yacc.tab.c"
    break;

  case 10: /* MainFuncDef: MAIN '(' ')' Block  */
#line 162 "yacc.y"
                                 {
    auto ast = std::make_unique<FuncDeclAST>();
    std::unique_ptr<BlockAST> old(static_cast<BlockAST*>((yyvsp[0].ast_ptr)));

    ast->name = "main";
    ast->Block = std::move(old);

    (yyval.ast_ptr) = ast.release();
}
#line 1435 "yacc.tab.c"
    break;

  case 11: /* CompUnit5: '(' FuncFParams_ ')' Block  */
#line 171 "yacc.y"
                                       {
    auto ast0 = std::make_unique<CompUnit5AST>();

    auto ast = std::make_unique<FuncDeclAST>();
    std::unique_ptr<FuncFParamsAST> old1(static_cast<FuncFParamsAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<BlockAST> old2(static_cast<BlockAST*>((yyvsp[0].ast_ptr)));

    ast->FuncFParams = std::move(old1);
    ast->Block = std::move(old2);

    ast0->func_decl.push_back(std::move(ast));
    (yyval.ast_ptr) = ast0.release();
}
#line 1453 "yacc.tab.c"
    break;

  case 12: /* CompUnit5: Array VarDef_value VarDefList ';'  */
#line 183 "yacc.y"
                                      {
    auto ast0 = std::make_unique<CompUnit5AST>();

    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-3].ast_ptr)));
    std::unique_ptr<InitValAST> old2(static_cast<InitValAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<DeclAST> old3(static_cast<DeclAST*>((yyvsp[-1].ast_ptr)));

    if (old1->exp.length()) {
        ast->Array = std::move(old1);
    }
    if (old2->brace || old2->exp.size()) {
        ast->Val = std::move(old2);
    }
    if (old3->name.length()) {
        ast->nxt = std::move(old3);
    }

    ast0->decl.push_back(std::move(ast));
    (yyval.ast_ptr) = ast0.release();
}
#line 1479 "yacc.tab.c"
    break;

  case 13: /* Array: %empty  */
#line 204 "yacc.y"
        {
    auto ast = std::make_unique<ExpAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 1488 "yacc.tab.c"
    break;

  case 14: /* Array: '[' Exp ']'  */
#line 207 "yacc.y"
              {
    (yyval.ast_ptr) = (yyvsp[-1].ast_ptr);
}
#line 1496 "yacc.tab.c"
    break;

  case 15: /* VarDef_value: %empty  */
#line 210 "yacc.y"
               {
    auto ast = std::make_unique<InitValAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 1505 "yacc.tab.c"
    break;

  case 16: /* VarDef_value: '=' InitVal  */
#line 213 "yacc.y"
               {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 1513 "yacc.tab.c"
    break;

  case 17: /* VarDefList: %empty  */
#line 216 "yacc.y"
              {
    auto ast = std::make_unique<DeclAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 1522 "yacc.tab.c"
    break;

  case 18: /* VarDefList: VarDefList ',' VarDef  */
#line 219 "yacc.y"
                         {
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<DeclAST> old1(static_cast<DeclAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<DeclAST> old2(static_cast<DeclAST*>((yyvsp[0].ast_ptr)));
    ast = std::move(old1);
    if (ast->name.length()) {
        DeclAST* now = ast.get();
        while (now->nxt) {
            now = now->nxt.get();
        }
        now->nxt = std::move(old2);
    }
    else {
        ast = std::move(old2);
    }
    (yyval.ast_ptr) = ast.release();
}
#line 1544 "yacc.tab.c"
    break;

  case 19: /* VarDef: IDENFR Array VarDef_value  */
#line 236 "yacc.y"
                                   {
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<InitValAST> old2(static_cast<InitValAST*>((yyvsp[0].ast_ptr)));

    ast->name = std::string((yyvsp[-2].str_val));
    if (old1->exp.length()) ast->Array = std::move(old1);
    if (old2->brace || old2->exp.size()) ast->Val = std::move(old2);

    (yyval.ast_ptr) = ast.release();
}
#line 1560 "yacc.tab.c"
    break;

  case 20: /* CompUnit3: INT ConstDefList ';'  */
#line 248 "yacc.y"
                                 {
    auto ast0 = std::make_unique<CompUnit3AST>();

    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<DeclAST> old1(static_cast<DeclAST*>((yyvsp[-1].ast_ptr)));
    
    old1->type = TYPE_CONST;
    ast = std::move(old1);

    ast0->decl.push_back(std::move(ast));
    (yyval.ast_ptr) = ast0.release();
}
#line 1577 "yacc.tab.c"
    break;

  case 21: /* ConstDefList: ConstDef  */
#line 260 "yacc.y"
                        {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 1585 "yacc.tab.c"
    break;

  case 22: /* ConstDefList: ConstDefList ',' ConstDef  */
#line 262 "yacc.y"
                             {
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<DeclAST> old1(static_cast<DeclAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<DeclAST> old2(static_cast<DeclAST*>((yyvsp[0].ast_ptr)));
    
    ast = std::move(old1);
    DeclAST* now = ast.get();
    while (now->nxt) {
        now = now->nxt.get();
    }
    now->nxt = std::move(old2);

    (yyval.ast_ptr) = ast.release();
}
#line 1604 "yacc.tab.c"
    break;

  case 23: /* ConstDef: IDENFR Array '=' InitVal  */
#line 276 "yacc.y"
                                   {
    auto ast = std::make_unique<DeclAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<InitValAST> old2(static_cast<InitValAST*>((yyvsp[0].ast_ptr)));

    ast->name = std::string((yyvsp[-3].str_val));
    if (old1->exp.length()) ast->Array = std::move(old1);
    if (old2->brace || old2->exp.size()) ast->Val = std::move(old2);

    (yyval.ast_ptr) = ast.release();
}
#line 1620 "yacc.tab.c"
    break;

  case 24: /* InitVal: Exp  */
#line 288 "yacc.y"
              {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp.push_back(std::move(old1));

    (yyval.ast_ptr) = ast.release();
}
#line 1633 "yacc.tab.c"
    break;

  case 25: /* InitVal: '{' ExpList '}'  */
#line 295 "yacc.y"
                   {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<InitValAST> old1(static_cast<InitValAST*>((yyvsp[-1].ast_ptr)));

    old1->brace = true;
    ast = std::move(old1);

    (yyval.ast_ptr) = ast.release();
}
#line 1647 "yacc.tab.c"
    break;

  case 26: /* ExpList: Exp  */
#line 304 "yacc.y"
              {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp.push_back(std::move(old1));

    (yyval.ast_ptr) = ast.release();
}
#line 1660 "yacc.tab.c"
    break;

  case 27: /* ExpList: ExpList ',' Exp  */
#line 311 "yacc.y"
                   {
    auto ast = std::make_unique<InitValAST>();
    std::unique_ptr<InitValAST> old1(static_cast<InitValAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    old1->exp.push_back(std::move(old2));
    ast = std::move(old1);

    (yyval.ast_ptr) = ast.release();
}
#line 1675 "yacc.tab.c"
    break;

  case 28: /* FuncFParams_: %empty  */
#line 322 "yacc.y"
               {
    auto ast = std::make_unique<FuncFParamsAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 1684 "yacc.tab.c"
    break;

  case 29: /* FuncFParams_: FuncFParams  */
#line 325 "yacc.y"
               {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 1692 "yacc.tab.c"
    break;

  case 30: /* FuncFParams: FuncFParam  */
#line 328 "yacc.y"
                         {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 1700 "yacc.tab.c"
    break;

  case 31: /* FuncFParams: FuncFParams ',' FuncFParam  */
#line 330 "yacc.y"
                              {
    auto ast = std::make_unique<FuncFParamsAST>();
    std::unique_ptr<FuncFParamsAST> old1(static_cast<FuncFParamsAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<FuncFParamsAST> old2(static_cast<FuncFParamsAST*>((yyvsp[0].ast_ptr)));

    for (auto now : old2->params) {
        old1->params.push_back(now);
    }
    ast = std::move(old1);

    (yyval.ast_ptr) = ast.release();
}
#line 1717 "yacc.tab.c"
    break;

  case 32: /* FuncFParam: INT IDENFR  */
#line 342 "yacc.y"
                        {
    auto ast = std::make_unique<FuncFParamsAST>();
    
    ast->params.push_back(std::string((yyvsp[0].str_val)));

    (yyval.ast_ptr) = ast.release();
}
#line 1729 "yacc.tab.c"
    break;

  case 33: /* CompUnit4: IDENFR '(' FuncFParams_ ')' Block  */
#line 350 "yacc.y"
                                              {
    auto ast = std::make_unique<FuncDeclAST>();
    std::unique_ptr<FuncFParamsAST> old1(static_cast<FuncFParamsAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<BlockAST> old2(static_cast<BlockAST*>((yyvsp[0].ast_ptr)));

    ast->type = TYPE_VOID;
    ast->name = std::string((yyvsp[-4].str_val));
    ast->FuncFParams = std::move(old1);
    ast->Block = std::move(old2);

    (yyval.ast_ptr) = ast.release();
}
#line 1746 "yacc.tab.c"
    break;

  case 34: /* Block: '{' BlockItemList '}'  */
#line 363 "yacc.y"
                              {
    (yyval.ast_ptr) = (yyvsp[-1].ast_ptr);
}
#line 1754 "yacc.tab.c"
    break;

  case 35: /* BlockItemList: BlockItem  */
#line 366 "yacc.y"
                          {
    auto ast = std::make_unique<BlockAST>();
    std::unique_ptr<BlockItemAST> old1(static_cast<BlockItemAST*>((yyvsp[0].ast_ptr)));

    ast->BlockItem.push_back(std::move(old1));

    (yyval.ast_ptr) = ast.release();
}
#line 1767 "yacc.tab.c"
    break;

  case 36: /* BlockItemList: BlockItemList BlockItem  */
#line 373 "yacc.y"
                           {
    auto ast = std::make_unique<BlockAST>();
    std::unique_ptr<BlockAST> old1(static_cast<BlockAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<BlockItemAST> old2(static_cast<BlockItemAST*>((yyvsp[0].ast_ptr)));

    old1->BlockItem.push_back(std::move(old2));
    ast = std::move(old1);

    (yyval.ast_ptr) = ast.release();
}
#line 1782 "yacc.tab.c"
    break;

  case 37: /* BlockItem: CompUnit1  */
#line 383 "yacc.y"
                      {
    auto ast = std::make_unique<BlockItemAST>();
    std::unique_ptr<CompUnit1AST> old1(static_cast<CompUnit1AST*>((yyvsp[0].ast_ptr)));

    ast->type = block_decl;
    ast->item = std::move(old1->decl[0]);

    (yyval.ast_ptr) = ast.release();
}
#line 1796 "yacc.tab.c"
    break;

  case 38: /* BlockItem: Stmt  */
#line 391 "yacc.y"
        { //因为代码一定正确，因此可以把CompUnit弄过来定义，二者first无交集
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 1804 "yacc.tab.c"
    break;

  case 39: /* Stmt: LVal '=' Stmt1  */
#line 395 "yacc.y"
                     {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<GiveValueAST>();
    std::unique_ptr<LValAST> old1(static_cast<LValAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->LVal = std::move(old1);
    ast->exp = std::move(old2);
    
    ast0->item = std::move(ast);
    ast0->type = block_give_value;
    (yyval.ast_ptr) = ast0.release();
}
#line 1823 "yacc.tab.c"
    break;

  case 40: /* Stmt: ';'  */
#line 408 "yacc.y"
       {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<ExpAST>();
    
    ast0->item = std::move(ast);
    ast0->type = block_exp;
    (yyval.ast_ptr) = ast0.release();
}
#line 1837 "yacc.tab.c"
    break;

  case 41: /* Stmt: Exp ';'  */
#line 416 "yacc.y"
           {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    ast = std::move(old1);

    ast0->item = std::move(ast);
    ast0->type = block_exp;
    (yyval.ast_ptr) = ast0.release();
}
#line 1853 "yacc.tab.c"
    break;

  case 42: /* Stmt: Block  */
#line 426 "yacc.y"
         {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<BlockAST>();
    std::unique_ptr<BlockAST> old1(static_cast<BlockAST*>((yyvsp[0].ast_ptr)));
    ast = std::move(old1);

    ast0->item = std::move(ast);
    ast0->type = block_block;
    (yyval.ast_ptr) = ast0.release();
}
#line 1869 "yacc.tab.c"
    break;

  case 43: /* Stmt: IF '(' Cond ')' Stmt Stmt_else  */
#line 436 "yacc.y"
                                  {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<IfAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-3].ast_ptr)));
    std::unique_ptr<BlockItemAST> old2(static_cast<BlockItemAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<BlockItemAST> old3(static_cast<BlockItemAST*>((yyvsp[0].ast_ptr)));

    ast->cond = std::move(old1);
    ast->ifstmt = std::move(old2);
    if (old3->type != block_empty) ast->elsestmt = std::move(old3);

    ast0->item = std::move(ast);
    ast0->type = block_if;
    (yyval.ast_ptr) = ast0.release();
}
#line 1890 "yacc.tab.c"
    break;

  case 44: /* Stmt: WHILE '(' Cond ')' Stmt  */
#line 451 "yacc.y"
                           {
    auto ast0 = std::make_unique<BlockItemAST>();

    auto ast = std::make_unique<WhileAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<BlockItemAST> old2(static_cast<BlockItemAST*>((yyvsp[0].ast_ptr)));

    ast->cond = std::move(old1);
    ast->stmt = std::move(old2);

    ast0->item = std::move(ast);
    ast0->type = block_while;
    (yyval.ast_ptr) = ast0.release();
}
#line 1909 "yacc.tab.c"
    break;

  case 45: /* Stmt: BREAK ';'  */
#line 464 "yacc.y"
             {
    auto ast0 = std::make_unique<BlockItemAST>();
    ast0->type = block_break;
    (yyval.ast_ptr) = ast0.release();
}
#line 1919 "yacc.tab.c"
    break;

  case 46: /* Stmt: CONTINUE ';'  */
#line 468 "yacc.y"
                {
    auto ast0 = std::make_unique<BlockItemAST>();
    ast0->type = block_continue;
    (yyval.ast_ptr) = ast0.release();
}
#line 1929 "yacc.tab.c"
    break;

  case 47: /* Stmt: RETURN Stmt_exp ';'  */
#line 472 "yacc.y"
                       {
    auto ast0 = std::make_unique<BlockItemAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));

    ast0->type = block_return;
    if (old1->exp.length()) {
        ast0->item = std::move(old1);
    }

    (yyval.ast_ptr) = ast0.release();
}
#line 1945 "yacc.tab.c"
    break;

  case 48: /* Stmt: PRINTF '(' STRCON Stmt_exp2 ')' ';'  */
#line 482 "yacc.y"
                                      {
    auto ast0 = std::make_unique<BlockItemAST>();
    
    auto ast = std::make_unique<PrintfAST>();
    std::unique_ptr<PrintfAST> old1(static_cast<PrintfAST*>((yyvsp[-2].ast_ptr)));

    ast->s = std::string((yyvsp[-3].str_val));
    ast->exp = std::move(old1->exp);

    ast0->item = std::move(ast);
    ast0->type = block_printf;
    (yyval.ast_ptr) = ast0.release();
}
#line 1963 "yacc.tab.c"
    break;

  case 49: /* Stmt1: Exp ';'  */
#line 495 "yacc.y"
                 {
    (yyval.ast_ptr) = (yyvsp[-1].ast_ptr);
}
#line 1971 "yacc.tab.c"
    break;

  case 50: /* Stmt1: GETINT '(' ')' ';'  */
#line 497 "yacc.y"
                      {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "getint()";

    (yyval.ast_ptr) = ast.release();
}
#line 1983 "yacc.tab.c"
    break;

  case 51: /* Stmt_else: %empty  */
#line 504 "yacc.y"
            {
    auto ast = std::make_unique<BlockItemAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 1992 "yacc.tab.c"
    break;

  case 52: /* Stmt_else: ELSE Stmt  */
#line 507 "yacc.y"
             {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2000 "yacc.tab.c"
    break;

  case 53: /* Stmt_exp: %empty  */
#line 510 "yacc.y"
            {
    auto ast = std::make_unique<ExpAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 2009 "yacc.tab.c"
    break;

  case 54: /* Stmt_exp: Exp  */
#line 513 "yacc.y"
       {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2017 "yacc.tab.c"
    break;

  case 55: /* Stmt_exp2: %empty  */
#line 516 "yacc.y"
            {
    auto ast = std::make_unique<PrintfAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 2026 "yacc.tab.c"
    break;

  case 56: /* Stmt_exp2: Stmt_exp2 ',' Exp  */
#line 519 "yacc.y"
                     {
    auto ast = std::make_unique<PrintfAST>();
    std::unique_ptr<PrintfAST> old1(static_cast<PrintfAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    old1->exp.push_back(std::move(old2));
    ast = std::move(old1);

    (yyval.ast_ptr) = ast.release();
}
#line 2041 "yacc.tab.c"
    break;

  case 57: /* Exp: AddExp  */
#line 530 "yacc.y"
             {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2049 "yacc.tab.c"
    break;

  case 58: /* Cond: LOrExp  */
#line 533 "yacc.y"
              {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2057 "yacc.tab.c"
    break;

  case 59: /* LVal: IDENFR Array  */
#line 536 "yacc.y"
                    {
    auto ast = std::make_unique<LValAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->name = std::string((yyvsp[-1].str_val));
    if (old1->exp.length()) {
        ast->array = std::move(old1);
    }

    (yyval.ast_ptr) = ast.release();
}
#line 2073 "yacc.tab.c"
    break;

  case 60: /* PrimaryExp: '(' Exp ')'  */
#line 547 "yacc.y"
                         {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));

    ast->exp = "(" + old1->exp + ")";

    (yyval.ast_ptr) = ast.release();
}
#line 2086 "yacc.tab.c"
    break;

  case 61: /* PrimaryExp: LVal  */
#line 554 "yacc.y"
         {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<LValAST> old1(static_cast<LValAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->to_str();

    (yyval.ast_ptr) = ast.release();
}
#line 2099 "yacc.tab.c"
    break;

  case 62: /* PrimaryExp: INTCON  */
#line 561 "yacc.y"
          {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = std::string((yyvsp[0].str_val));

    (yyval.ast_ptr) = ast.release();
}
#line 2111 "yacc.tab.c"
    break;

  case 63: /* UnaryExp: PrimaryExp  */
#line 568 "yacc.y"
                      {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2119 "yacc.tab.c"
    break;

  case 64: /* UnaryExp: IDENFR '(' FuncRParams_ ')'  */
#line 570 "yacc.y"
                              {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    
    ast->exp = std::string((yyvsp[-3].str_val)) + "(" + old1->exp + ")";

    (yyval.ast_ptr) = ast.release();
}
#line 2132 "yacc.tab.c"
    break;

  case 65: /* UnaryExp: UnaryOp UnaryExp  */
#line 577 "yacc.y"
                     {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));
    
    ast->exp = old1->exp + old2->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2146 "yacc.tab.c"
    break;

  case 66: /* UnaryOp: '+'  */
#line 586 "yacc.y"
              {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "+";

    (yyval.ast_ptr) = ast.release();
}
#line 2158 "yacc.tab.c"
    break;

  case 67: /* UnaryOp: '-'  */
#line 592 "yacc.y"
       {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "-";

    (yyval.ast_ptr) = ast.release();
}
#line 2170 "yacc.tab.c"
    break;

  case 68: /* UnaryOp: '!'  */
#line 598 "yacc.y"
       {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "!";

    (yyval.ast_ptr) = ast.release();
}
#line 2182 "yacc.tab.c"
    break;

  case 69: /* FuncRParams_: %empty  */
#line 605 "yacc.y"
               {
    auto ast = std::make_unique<ExpAST>();
    (yyval.ast_ptr) = ast.release();
}
#line 2191 "yacc.tab.c"
    break;

  case 70: /* FuncRParams_: FuncRParams  */
#line 608 "yacc.y"
               {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2199 "yacc.tab.c"
    break;

  case 71: /* FuncRParams: Exp  */
#line 611 "yacc.y"
                  {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2207 "yacc.tab.c"
    break;

  case 72: /* FuncRParams: FuncRParams ',' Exp  */
#line 613 "yacc.y"
                       {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->exp + "," + old2->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2221 "yacc.tab.c"
    break;

  case 73: /* MulExp: UnaryExp  */
#line 622 "yacc.y"
                  {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2229 "yacc.tab.c"
    break;

  case 74: /* MulExp: MulExp MulOp UnaryExp  */
#line 624 "yacc.y"
                          {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->exp + old2->exp + old3->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2244 "yacc.tab.c"
    break;

  case 75: /* MulOp: '*'  */
#line 634 "yacc.y"
            {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "*";

    (yyval.ast_ptr) = ast.release();
}
#line 2256 "yacc.tab.c"
    break;

  case 76: /* MulOp: '/'  */
#line 640 "yacc.y"
       { 
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "/";

    (yyval.ast_ptr) = ast.release();
}
#line 2268 "yacc.tab.c"
    break;

  case 77: /* MulOp: '%'  */
#line 646 "yacc.y"
       {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "%";

    (yyval.ast_ptr) = ast.release();
}
#line 2280 "yacc.tab.c"
    break;

  case 78: /* AddExp: MulExp  */
#line 653 "yacc.y"
                {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2288 "yacc.tab.c"
    break;

  case 79: /* AddExp: AddExp AddOp MulExp  */
#line 655 "yacc.y"
                       {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->exp + old2->exp + old3->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2303 "yacc.tab.c"
    break;

  case 80: /* AddOp: '+'  */
#line 665 "yacc.y"
            {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "+";

    (yyval.ast_ptr) = ast.release();
}
#line 2315 "yacc.tab.c"
    break;

  case 81: /* AddOp: '-'  */
#line 671 "yacc.y"
        {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "-";

    (yyval.ast_ptr) = ast.release();
}
#line 2327 "yacc.tab.c"
    break;

  case 82: /* RelExp: AddExp  */
#line 678 "yacc.y"
                {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2335 "yacc.tab.c"
    break;

  case 83: /* RelExp: RelExp RelOp AddExp  */
#line 680 "yacc.y"
                        {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->exp + old2->exp + old3->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2350 "yacc.tab.c"
    break;

  case 84: /* RelOp: LESS  */
#line 690 "yacc.y"
             {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "<";

    (yyval.ast_ptr) = ast.release();
}
#line 2362 "yacc.tab.c"
    break;

  case 85: /* RelOp: GRE  */
#line 696 "yacc.y"
        {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = ">";

    (yyval.ast_ptr) = ast.release();
}
#line 2374 "yacc.tab.c"
    break;

  case 86: /* RelOp: LEQ  */
#line 702 "yacc.y"
        { 
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "<=";

    (yyval.ast_ptr) = ast.release();
}
#line 2386 "yacc.tab.c"
    break;

  case 87: /* RelOp: GRQ  */
#line 708 "yacc.y"
       {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = ">=";

    (yyval.ast_ptr) = ast.release();
}
#line 2398 "yacc.tab.c"
    break;

  case 88: /* EqExp: RelExp  */
#line 715 "yacc.y"
               {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2406 "yacc.tab.c"
    break;

  case 89: /* EqExp: EqExp EqOp RelExp  */
#line 717 "yacc.y"
                      {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old2(static_cast<ExpAST*>((yyvsp[-1].ast_ptr)));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->exp + old2->exp + old3->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2421 "yacc.tab.c"
    break;

  case 90: /* EqOp: EQL  */
#line 727 "yacc.y"
           {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "==";

    (yyval.ast_ptr) = ast.release();
}
#line 2433 "yacc.tab.c"
    break;

  case 91: /* EqOp: NEQ  */
#line 733 "yacc.y"
        {
    auto ast = std::make_unique<ExpAST>();
    
    ast->exp = "!=";

    (yyval.ast_ptr) = ast.release();
}
#line 2445 "yacc.tab.c"
    break;

  case 92: /* LAndExp: EqExp  */
#line 740 "yacc.y"
                {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2453 "yacc.tab.c"
    break;

  case 93: /* LAndExp: LAndExp AND EqExp  */
#line 742 "yacc.y"
                      {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->exp + "&&" + old3->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2467 "yacc.tab.c"
    break;

  case 94: /* LOrExp: LAndExp  */
#line 751 "yacc.y"
                 {
    (yyval.ast_ptr) = (yyvsp[0].ast_ptr);
}
#line 2475 "yacc.tab.c"
    break;

  case 95: /* LOrExp: LOrExp OR LAndExp  */
#line 753 "yacc.y"
                      {
    auto ast = std::make_unique<ExpAST>();
    std::unique_ptr<ExpAST> old1(static_cast<ExpAST*>((yyvsp[-2].ast_ptr)));
    std::unique_ptr<ExpAST> old3(static_cast<ExpAST*>((yyvsp[0].ast_ptr)));

    ast->exp = old1->exp + "||" + old3->exp;

    (yyval.ast_ptr) = ast.release();
}
#line 2489 "yacc.tab.c"
    break;


#line 2493 "yacc.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 764 "yacc.y"
 

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

