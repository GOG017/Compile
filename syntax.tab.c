/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntax.y" /* yacc.c:339  */

	#include "error.c"
	#include "lex.yy.c"
	#include "symbol_table.c"
	#include <string.h>
	int yylex();
	void yyerror(char *);
	char name[28][10] = {"INT", "FLOAT", "ID", "SEMI", "COMMA", "ASSIGNOP", 
	"RELOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT", "NOT", 
	"TYPE", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN", "IF", 
	"ELSE", "WHILE"};

#line 79 "syntax.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntax.tab.h".  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    ID = 260,
    SEMI = 261,
    COMMA = 262,
    ASSIGNOP = 263,
    RELOP = 264,
    PLUS = 265,
    MINUS = 266,
    STAR = 267,
    DIV = 268,
    AND = 269,
    OR = 270,
    DOT = 271,
    NOT = 272,
    TYPE = 273,
    LP = 274,
    RP = 275,
    LB = 276,
    RB = 277,
    LC = 278,
    RC = 279,
    STRUCT = 280,
    RETURN = 281,
    IF = 282,
    ELSE = 283,
    WHILE = 284,
    LOWER_THAN_ELSE = 285,
    UMINUS = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "syntax.y" /* yacc.c:355  */

	struct ast *a;

#line 155 "syntax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 172 "syntax.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    38,    39,    41,    42,    43,    44,    46,
      47,    50,    51,    53,    56,    58,    59,    61,    63,    64,
      65,    66,    67,    68,    69,    71,    72,    78,    80,    81,
      82,    83,    84,    85,    87,    91,    93,    95,    96,   101,
     102,   105,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   123,   124,   125,   126,   127,   128,   129,   131,
     132
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ID", "SEMI", "COMMA",
  "ASSIGNOP", "RELOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT",
  "NOT", "TYPE", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN",
  "IF", "ELSE", "WHILE", "LOWER_THAN_ELSE", "UMINUS", "$accept", "Program",
  "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "StructSpecifier",
  "OptTag", "Tag", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,     3,   -63,    10,    45,   -63,    22,    46,   -63,   -63,
      32,    47,   -63,   -63,   -63,    49,   -63,    65,     0,    51,
     -12,   204,   -63,    67,    73,   -12,   -63,    67,    68,   -12,
     -63,    67,    71,    86,   -63,   -63,    83,    31,    -3,   100,
     101,   -63,   -63,    99,   -63,   -12,   -63,   -63,   -63,   102,
      62,    62,    62,    62,   104,   115,   -63,    98,    31,    74,
      62,   -63,    67,   -63,    58,    25,    43,   132,    88,    62,
      62,   -63,   -63,   -63,    62,    62,    62,    62,    62,    62,
      62,    62,   130,    62,   174,   -63,   -63,   103,    87,   -63,
     -63,   146,   160,   174,   207,    25,    25,    43,    43,   200,
     187,   -63,   117,    62,   -63,    31,    31,   -63,   -63,   108,
     -63,    31,   -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    11,    16,     0,     2,     0,     0,    12,     8,
      17,     0,    14,     1,     3,    18,     6,     0,     9,     0,
      35,     0,     5,     0,     0,    35,     7,     0,     0,    35,
      21,     0,     0,    23,    18,    10,     0,    27,    40,     0,
      37,    13,    34,    24,    20,     0,    19,    57,    58,    56,
       0,     0,     0,     0,     0,     0,    29,     0,    27,     0,
       0,    36,     0,    22,     0,    50,    51,     0,     0,     0,
       0,    25,    26,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    38,    53,    60,     0,    49,
      30,     0,     0,    41,    44,    45,    46,    47,    48,    42,
      43,    55,     0,     0,    52,     0,     0,    54,    59,    31,
      33,     0,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   131,   -63,   126,    11,   -63,   -63,   -63,   -23,
     -63,   105,   -63,   144,    93,   -62,   -13,   -63,   116,   -63,
     -50,    61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    17,    27,     8,    11,    12,    18,
      19,    32,    33,    56,    57,    58,    28,    29,    39,    40,
      59,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      65,    66,    67,    68,    38,    60,     2,    23,    43,     9,
      84,     7,    37,     3,    87,    10,    42,     7,    24,    91,
      92,    24,    -4,     1,    93,    94,    95,    96,    97,    98,
      99,   100,    31,   102,    47,    48,    49,    78,    79,    38,
       2,    82,    50,   109,   110,    13,    83,     3,    51,   112,
      52,    15,    16,    87,    25,   -15,    31,    53,    54,    82,
      55,    47,    48,    49,    83,    47,    48,    49,    21,    50,
      20,    22,    34,    50,    25,    51,    36,    52,    86,    51,
      73,    52,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    44,    41,    45,    90,    83,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    46,    61,   104,    62,    83,
     103,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      24,    64,    71,    69,    83,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    70,   101,   111,    14,    83,   107,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    35,
      63,    72,    89,    83,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    26,   108,     0,   105,    83,    74,    75,
      76,    77,    78,    79,    80,    81,    82,     0,    85,     0,
     106,    83,    74,    75,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,    83,    75,    76,    77,    78,
      79,    80,     0,    82,     0,     0,     0,     0,    83,    75,
      76,    77,    78,    79,     0,     0,    82,    76,    77,    78,
      79,    83,     2,    82,    30,     0,     0,     0,    83,     3
};

static const yytype_int8 yycheck[] =
{
      50,    51,    52,    53,    27,     8,    18,     7,    31,     6,
      60,     0,    25,    25,    64,     5,    29,     6,    21,    69,
      70,    21,     0,     1,    74,    75,    76,    77,    78,    79,
      80,    81,    21,    83,     3,     4,     5,    12,    13,    62,
      18,    16,    11,   105,   106,     0,    21,    25,    17,   111,
      19,     5,     6,   103,    23,    23,    45,    26,    27,    16,
      29,     3,     4,     5,    21,     3,     4,     5,    19,    11,
      23,     6,     5,    11,    23,    17,     3,    19,    20,    17,
       6,    19,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    20,    24,     7,     6,    21,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    22,     6,    20,     7,    21,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      21,    19,    24,    19,    21,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    19,     5,    28,     6,    21,    22,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    23,
      45,    58,    20,    21,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    19,   103,    -1,    20,    21,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    62,    -1,
      20,    21,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    21,     9,    10,    11,    12,
      13,    14,    -1,    16,    -1,    -1,    -1,    -1,    21,     9,
      10,    11,    12,    13,    -1,    -1,    16,    10,    11,    12,
      13,    21,    18,    16,    20,    -1,    -1,    -1,    21,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    18,    25,    33,    34,    35,    37,    38,     6,
       5,    39,    40,     0,    34,     5,     6,    36,    41,    42,
      23,    19,     6,     7,    21,    23,    45,    37,    48,    49,
      20,    37,    43,    44,     5,    36,     3,    48,    41,    50,
      51,    24,    48,    41,    20,     7,    22,     3,     4,     5,
      11,    17,    19,    26,    27,    29,    45,    46,    47,    52,
       8,     6,     7,    43,    19,    52,    52,    52,    52,    19,
      19,    24,    46,     6,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    21,    52,    50,    20,    52,    53,    20,
       6,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,     5,    52,     7,    20,    20,    20,    22,    53,    47,
      47,    28,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    35,    35,    36,
      36,    37,    37,    38,    38,    39,    39,    40,    41,    41,
      42,    42,    43,    43,    44,    45,    46,    46,    47,    47,
      47,    47,    47,    47,    48,    48,    49,    50,    50,    51,
      51,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     2,     1,
       3,     1,     1,     5,     2,     1,     0,     1,     1,     4,
       4,     3,     3,     1,     2,     4,     2,     0,     2,     1,
       3,     5,     7,     5,     2,     0,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     4,     3,     4,     3,     1,     1,     1,     3,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 32 "syntax.y" /* yacc.c:1646  */
    {
	(yyval.a) = newast1(maketext("Program"), (yyvsp[0].a));
	initsymbollist();
	freesymbollist();
}
#line 1351 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("ExtDefList"), (yyvsp[-1].a), (yyvsp[0].a));}
#line 1357 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast(maketext("null"));}
#line 1363 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 41 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("ExtDef"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); addsymbol1((yyvsp[-2].a)->name, (yyvsp[-1].a)->namearg, (yyvsp[-2].a)->line);}
#line 1369 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 42 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("ExtDef"), (yyvsp[-1].a), (yyvsp[0].a));}
#line 1375 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 43 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("ExtDef"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); changefunctype((yyvsp[-1].a)->name, (yyvsp[-2].a)->name); error8((yyvsp[-2].a)->name, (yyvsp[0].a)->funcomptype, (yyvsp[-2].a)->line);}
#line 1381 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 44 "syntax.y" /* yacc.c:1646  */
    {}
#line 1387 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("ExtDecList"), (yyvsp[0].a)); (yyval.a)->namearg=addnamelist((yyval.a),(yyvsp[0].a)->name, (yyvsp[0].a)->arraymark);}
#line 1393 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 47 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("ExtDecList"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); (yyval.a)->namearg=addnamelist((yyvsp[0].a), (yyvsp[-2].a)->name, (yyvsp[-2].a)->arraymark);}
#line 1399 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 50 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Specifier"), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[0].a)->info.name);}
#line 1405 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 51 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Specifier"), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[0].a)->name);}
#line 1411 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 53 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast5(maketext("StructSpecifier"), (yyvsp[-4].a), (yyvsp[-3].a), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[-3].a)->name); 
					addstruct((yyvsp[-3].a)->name, (yyvsp[-1].a)->namearg, 1, (yyvsp[-4].a)->line); strcpy((yyval.a)->name, (yyvsp[-4].a)->info.name); 
					char* name = "struct"; changefunctype((yyvsp[-3].a)->name, name); error15((yyvsp[-1].a)->funcomptype, (yyval.a)->line);}
#line 1419 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 56 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("StructSpecifier"), (yyvsp[-1].a), (yyvsp[0].a)); strcpy((yyval.a)->name,(yyvsp[0].a)->name); error17((yyvsp[0].a)->name, (yyvsp[-1].a)->line);}
#line 1425 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("OptTag"), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[0].a)->info.name);}
#line 1431 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast(maketext("null"));}
#line 1437 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 61 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Tag"), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[0].a)->info.name);}
#line 1443 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 63 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("VarDec"), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[0].a)->info.name); (yyval.a)->arraymark = 0; }
#line 1449 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 64 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast4(maketext("VarDec"), (yyvsp[-3].a), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[-3].a)->name); (yyval.a)->arraymark = 1;}
#line 1455 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 65 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast4(maketext("FunDec"), (yyvsp[-3].a), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); addfunc((yyvsp[-3].a)->info.name,(yyvsp[-1].a)->namearg,3,(yyvsp[-3].a)->line); strcpy((yyval.a)->name,(yyvsp[-3].a)->info.name);}
#line 1461 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 66 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("FunDec"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); addfunc((yyvsp[-2].a)->info.name,NULL, 3, (yyvsp[-2].a)->line); strcpy((yyval.a)->name, (yyvsp[-2].a)->info.name);}
#line 1467 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 67 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("VarList"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); (yyval.a)->namearg=addnamelist((yyvsp[0].a), (yyvsp[-2].a)->name, (yyvsp[-2].a)->arraymark);}
#line 1473 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 68 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("VarList"), (yyvsp[0].a)); (yyval.a)->namearg = addnamelist((yyval.a), (yyvsp[0].a)->name, (yyvsp[0].a)->arraymark);}
#line 1479 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 69 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("ParamDec"), (yyvsp[-1].a), (yyvsp[0].a)); (yyval.a)->arraymark = (yyvsp[0].a)->arraymark; strcpy((yyval.a)->name, (yyvsp[0].a)->name); (yyval.a)->namearg = addnamelist((yyval.a), (yyvsp[0].a)->name, (yyvsp[0].a)->arraymark); addsymbol1((yyvsp[-1].a)->name, (yyval.a)->namearg, (yyvsp[-1].a)->line);}
#line 1485 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 71 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast4(maketext("CompSt"), (yyvsp[-3].a), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); strcpy((yyval.a)->funcomptype, (yyvsp[-1].a)->funcomptype);}
#line 1491 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 72 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("StmtList"), (yyvsp[-1].a), (yyvsp[0].a));
			if (strcmp((yyvsp[-1].a)->funcomptype, "int") == 0 || strcmp((yyvsp[-1].a)->funcomptype, "float") == 0) 
				strcpy((yyval.a)->funcomptype, (yyvsp[-1].a)->funcomptype);
			if (strcmp((yyvsp[0].a)->funcomptype, "int") == 0 || strcmp((yyvsp[0].a)->funcomptype, "float") == 0) 
				strcpy((yyval.a)->funcomptype, (yyvsp[0].a)->funcomptype);
		}
#line 1502 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 78 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast(maketext("null"));}
#line 1508 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 80 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("Stmt"), (yyvsp[-1].a), (yyvsp[0].a));}
#line 1514 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 81 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Program"), (yyvsp[0].a));}
#line 1520 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 82 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Stmt"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); strcpy((yyval.a)->funcomptype, (yyvsp[-1].a)->typename);}
#line 1526 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 83 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast5(maketext("Stmt"), (yyvsp[-4].a), (yyvsp[-3].a), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a));}
#line 1532 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 84 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast7(maketext("Stmt"), (yyvsp[-6].a), (yyvsp[-5].a), (yyvsp[-4].a), (yyvsp[-3].a), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a));}
#line 1538 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 85 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast5(maketext("Stmt"), (yyvsp[-4].a), (yyvsp[-3].a), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a));}
#line 1544 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 87 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("DefList"), (yyvsp[-1].a), (yyvsp[0].a)); (yyval.a)->namearg = linknamelist((yyvsp[-1].a)->namearg, (yyvsp[0].a)->namearg);
						if (strcmp((yyvsp[-1].a)->funcomptype, "no") == 0 || strcmp((yyvsp[0].a)->funcomptype, "no") == 0)
							strcmp((yyval.a)->funcomptype, "no");
					}
#line 1553 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 91 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast(maketext("null")); (yyval.a)->namearg = NULL;}
#line 1559 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 93 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Def"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); addsymbol1((yyvsp[-2].a)->name, (yyvsp[-1].a)->namearg, (yyvsp[-2].a)->line); (yyval.a)->namearg = (yyvsp[-1].a)->namearg; strcpy((yyval.a)->funcomptype, (yyvsp[-1].a)->funcomptype);}
#line 1565 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 95 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("DecList"), (yyvsp[0].a)); (yyval.a)->namearg = addnamelist((yyval.a), (yyvsp[0].a)->name, (yyvsp[0].a)->arraymark); strcpy((yyval.a)->funcomptype, (yyvsp[0].a)->funcomptype);}
#line 1571 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 96 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("DecList"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); (yyval.a)->namearg = addnamelist((yyvsp[0].a),(yyvsp[-2].a)->name, (yyvsp[-2].a)->arraymark);
							if (strcmp((yyvsp[-2].a)->funcomptype, "no") == 0 || strcmp((yyvsp[0].a)->funcomptype, "no") == 0)
								strcpy((yyval.a)->funcomptype, "no");
						}
#line 1580 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 101 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Dec"), (yyvsp[-2].a), (yyvsp[-1].a), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[-2].a)->name); (yyval.a)->arraymark = (yyvsp[-2].a)->arraymark; strcpy((yyval.a)->funcomptype,"no");}
#line 1586 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 102 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Dec"), (yyvsp[0].a)); strcpy((yyval.a)->name, (yyvsp[0].a)->name); (yyval.a)->arraymark = (yyvsp[0].a)->arraymark;}
#line 1592 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 105 "syntax.y" /* yacc.c:1646  */
    {
	(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),"int",0,0); error6((yyvsp[-2].a)->rmark,(yyvsp[-2].a)->line); error5((yyvsp[-2].a),(yyvsp[0].a),(yyvsp[-2].a)->line);
	emit((yyvsp[-2].a)); //输出E1.place
    printf("="); //输出‘=’
    emit((yyvsp[0].a)); //输出E2.place
    printf("\n");
	}
#line 1604 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 112 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),"int",0,0);}
#line 1610 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),"int",0,0);}
#line 1616 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 114 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),"int",0,0);}
#line 1622 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 115 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),(yyvsp[-2].a)->typename,0,0); error7((yyvsp[-2].a),(yyvsp[0].a),(yyvsp[-2].a)->line);}
#line 1628 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 116 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),(yyvsp[-2].a)->typename,0,0); error7((yyvsp[-2].a),(yyvsp[0].a),(yyvsp[-2].a)->line);}
#line 1634 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 117 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),(yyvsp[-2].a)->typename,0,0); error7((yyvsp[-2].a),(yyvsp[0].a),(yyvsp[-2].a)->line);}
#line 1640 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 118 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),(yyvsp[-2].a)->typename,0,0); error7((yyvsp[-2].a),(yyvsp[0].a),(yyvsp[-2].a)->line);}
#line 1646 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 119 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),(yyvsp[-1].a)->typename,0,0);}
#line 1652 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 120 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("Exp"), (yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),(yyvsp[0].a)->typename,0,0);}
#line 1658 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 121 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast2(maketext("Exp"), (yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),"int",0,0);}
#line 1664 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 123 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast4(maketext("Exp"), (yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); error2((yyvsp[-3].a)->info.name,(yyvsp[-3].a)->line); setarraytype((yyval.a),(yyvsp[-3].a)->typename,0,1); error11((yyvsp[-3].a)->info.name,(yyvsp[-3].a)->line); error9((yyvsp[-3].a)->info.name,(yyvsp[-1].a)->namearg,(yyvsp[-3].a)->line);}
#line 1670 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 124 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); error2((yyvsp[-2].a)->info.name,(yyvsp[-2].a)->line); setarraytype((yyval.a),(yyvsp[-2].a)->typename,0,1); error11((yyvsp[-2].a)->info.name,(yyvsp[-2].a)->line);}
#line 1676 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 125 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast4(maketext("Exp"), (yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),(yyvsp[-3].a)->typename,1,1);error12((yyvsp[-1].a)->typename,(yyvsp[-3].a)->line); error10((yyvsp[-3].a)->name,(yyvsp[-3].a)->line);}
#line 1682 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 126 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Exp"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); setarraytype((yyval.a),checkstruct((yyvsp[-2].a)->typename,(yyvsp[0].a)->info.name,(yyvsp[-2].a)->line),0,1);}
#line 1688 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 127 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Exp"), (yyvsp[0].a)); strcpy((yyval.a)->name,(yyvsp[0].a)->info.name); error1((yyval.a)->name,(yyval.a)->line); setarraytype((yyval.a),gettype((yyvsp[0].a)->info.name),0,1);}
#line 1694 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 128 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Exp"), (yyvsp[0].a)); strcpy((yyval.a)->name,"no"); setarraytype((yyval.a),"int",0,0);}
#line 1700 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 129 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Exp"), (yyvsp[0].a)); strcpy((yyval.a)->name,"no"); setarraytype((yyval.a),"float",0,0);}
#line 1706 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 131 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast3(maketext("Args"), (yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a)); (yyval.a)->namearg=addnamelist((yyvsp[0].a),(yyvsp[-2].a)->typename,(yyvsp[-2].a)->arraymark);}
#line 1712 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 132 "syntax.y" /* yacc.c:1646  */
    {(yyval.a) = newast1(maketext("Args"), (yyvsp[0].a)); (yyval.a)->namearg=addnamelist((yyval.a),(yyvsp[0].a)->typename,(yyvsp[0].a)->arraymark);}
#line 1718 "syntax.tab.c" /* yacc.c:1646  */
    break;


#line 1722 "syntax.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 134 "syntax.y" /* yacc.c:1906  */


//标记是否为数组类型，同时标记左右值
void setarraytype(struct ast *ast, char *name, int arraymark, int rmark)
{
	strcpy(ast->typename, name);
	ast->arraymark = arraymark;
	ast->rmark = rmark;
}

//添加新的变量名到名字列表
struct namelist *addnamelist(struct ast *ast, char *name, int arraymark)
{
	if (ast->namearg == NULL)
	{
		ast->namearg = (struct namelist *)malloc(sizeof(struct namelist));
		ast->namearg->next = NULL;
		ast->namearg->name = (char *)malloc(sizeof(char));
		ast->namearg->arraymark = arraymark;
		strcpy(ast->namearg->name, name);
	}
	else
	{
		struct namelist *temp = ast->namearg;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		struct namelist *tt = (struct namelist *)malloc(sizeof(struct namelist));
		tt->next = NULL;
		tt->name = (char *)malloc(sizeof(char));
		tt->arraymark = arraymark;
		strcpy(tt->name, name);
		temp->next = tt;
	}
	return ast->namearg;
}

//连接两个名字列表
struct namelist *linknamelist(struct namelist *list1, struct namelist *list2)
{
	struct namelist *newlist = (struct namelist *)malloc(sizeof(struct namelist));
	struct namelist *temp = newlist;
	struct namelist *t1 = list1;
	while (t1 != NULL)
	{
		struct namelist *tt = (struct namelist *)malloc(sizeof(struct namelist));
		tt->name = (char *)malloc(sizeof(char));
		strcpy(tt->name, t1->name);
		temp->next = tt;
		temp = temp->next;
		t1 = t1->next;
	}
	t1 = list2;
	while (t1 != NULL)
	{
		struct namelist *tt = (struct namelist *)malloc(sizeof(struct namelist));
		tt->name = (char *)malloc(sizeof(char));
		strcpy(tt->name, t1->name);
		temp->next = tt;
		temp = temp->next;
		t1 = t1->next;
	}
	newlist = newlist->next;
	return newlist;
}

struct ast *newast(union Info v)
{
	struct ast *ast = (struct ast *)malloc(sizeof(struct ast));
	if (!ast)
	{
		printf("error type C at line %d", yylineno);
	}
	ast->info = v;
	ast->name = (char *)malloc(sizeof(char));
	ast->typename = (char *)malloc(sizeof(char));
	ast->funcomptype = (char *)malloc(sizeof(char));
	strcpy(ast->funcomptype, "yes");
	return ast;
}

struct ast *newastinit(union Info info, int type, int line)
{
	struct ast *ast = newast(info);
	ast->line = line;
	ast->type = type;
	return ast;
}
//分别初始化 int,float,string的不同格式
union Info makeint(int n)
{
	union Info info;
	info.in = n;
	return info;
}
union Info makefloat(float f)
{
	union Info info;
	info.fl = f;
	return info;
}
union Info maketext(const char *s)
{
	union Info info;
	strcpy(info.name, s);
	return info;
}
struct ast *newast1(union Info info, struct ast *a)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	ast->llength = 1;
	a->rlength = 0;
	return ast;
}
struct ast *newast2(union Info info, struct ast *a, struct ast *b)
{
	struct ast *ast = newast(info);
	ast->line = a->line; //对应当前语句的行号
	ast->lc = a;		 //在该树下的直接左端
	a->rc = b;			 //通过将兄弟节点改为二叉树的右端
	ast->llength = 2;	 //记录节点的个数，树根的直接左端
	a->rlength = 1;		 //每一层的右端
	b->rlength = 0;
	return ast;
}
struct ast *newast3(union Info info, struct ast *a, struct ast *b, struct ast *c)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 3;
	a->rlength = 2;
	b->rlength = 1;
	b->rc = c;
	c->rlength = 0;
	return ast;
}
struct ast *newast4(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 4;
	a->rlength = 3;
	b->rlength = 2;
	b->rc = c;
	c->rlength = 1;
	c->rc = d;
	d->rlength = 0;
	return ast;
}
struct ast *newast5(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d, struct ast *e)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 5;
	a->rlength = 4;
	b->rlength = 3;
	b->rc = c;
	c->rlength = 2;
	c->rc = d;
	d->rlength = 1;
	d->rc = e;
	e->rlength = 0;
	return ast;
}
struct ast *newast7(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d, struct ast *e, struct ast *f, struct ast *g)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 7;
	a->rlength = 6;
	b->rlength = 5;
	b->rc = c;
	c->rlength = 4;
	c->rc = d;
	d->rlength = 3;
	d->rc = e;
	e->rlength = 2;
	e->rc = f;
	f->rc = g;
	f->rlength = 1;
	g->rlength = 0;
	return ast;
}
void freetree(struct ast *t)
{ //释放树的空间，考虑搜索到的位置
	if (t->llength != 0)
		freetree(t->lc);
	if (t->rlength != 0)
		freetree(t->rc);
	free(t);
}

void tracetree(struct ast *t, int l)
{
	int i;
	if (strcmp(t->info.name, "null") != 0)
	{ //当记录的不是null时
		for (i = 0; i < l; ++i)
		{ //对应所在层次
			printf("  ");
		}
	}
	if (t == NULL)
	{
		printf("null\n");
		return;
	}
	if (t->type == INT)
	{
		printf("INT:%d\n", t->info.in);
	}
	else if (t->type == FLOAT)
	{
		printf("FLOAT:%f\n", t->info.fl);
	}
	else if (t->type == ID)
	{
		printf("ID:%s\n", t->info.name);
	}
	else if (t->type == TYPE)
	{
		printf("TYPE:%s\n", t->info.name);
	}
	else if (t->type != 0)
	{ //对应标号的记录值，最开始是从258开始记录的
		printf("%s\n", name[t->type - 258]);
	}
	else if (strcmp(t->info.name, "null") == 0) {}
	else
	{
		printf("%s(%d)\n", t->info.name, t->line);
	}
	if (t->llength != 0)
		tracetree(t->lc, l + 1); //需要空格空出的位置
	if (t->rlength != 0)
		tracetree(t->rc, l);
}

int main(int argc, char **argv)
{
	initsymbollist();
	if (argc <= 1)
		return 1;
	FILE *f = fopen(argv[1], "r");
	if (!f)
	{
		perror(argv[1]);
		return 1;
	}
	yyrestart(f);
	yyparse();
	return 0;
}

void yyerror(char *msg)
{ //错误信息
	fprintf(stderr, "Error Type B at line %d: %s\n", yylineno, msg);
}
