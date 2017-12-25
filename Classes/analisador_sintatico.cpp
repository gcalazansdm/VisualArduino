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
#line 1 "../Analizadores/Sintatico.y" /* yacc.c:339  */

  #include<string>
  #include<stdint.h>
  #include<stdbool.h>
  #include "Node.h"
  #include "MainBodyRule1.h"
  #include "MainBodyRule2.h"
  #include "MainBodyRule3.h"
  #include "MainBodyRule4.h"
  #include "MainArduino.h"
  #include "FunctionRule1.h"
  #include "FunctionRule2.h"
  #include "ParameterRule1.h"
  #include "ParameterRule2.h"
  #include "ParametersRule1.h"
  #include "ParametersRule2.h"
  #include "BodyRule1.h"
  #include "BodyRule2.h"
  #include "LocalBodyRule1.h"
  #include "LocalBodyRule2.h"
  #include "LineRule1.h"
  #include "LineRule2.h"
  #include "LineRule3.h"
  #include "CondictionRule1.h"
  #include "CondictionRule2.h"
  #include "CondictionRule3.h"
  #include "LoopRule1.h"
  #include "LoopRule2.h"
  #include "SetupRule1.h"
  #include "SetupRule2.h"
  #include "SelectionClauseRule1.h"
  #include "SelectionClauseRule2.h"
  #include "ElseClausesRule1.h"
  #include "ElseClausesRule2.h"
  #include "IfElseClausesRule1.h"
  #include "IfElseClausesRule2.h"
  #include "IfClause.h"
  #include "PinModeClauseRule1.h"
  #include "PinModeClauseRule2.h"
  #include "DigitalWriteClauseRule1.h"
  #include "DigitalWriteClauseRule2.h"
  #include "ElseClause.h"
  #include "IfElseClause.h"
  #include "WhileClause.h"
  #include "ForClause.h"
  #include "CommandRule1.h"
  #include "CommandRule2.h"
  #include "VarForRule1.h"
  #include "VarForRule2.h"
  #include "VarForRule3.h"
  #include "LogicOperationRule1.h"
  #include "LogicOperationRule2.h"
  #include "OperationRule1.h"
  #include "OperationRule2.h"
  #include "OperationRule3.h"
  #include "UnitaryOperatorsRule1.h"
  #include "UnitaryOperatorsRule2.h"
  #include "LogicCompRule1.h"
  #include "LogicCompRule2.h"
  #include "BinaryCompOperatorRule1.h"
  #include "BinaryCompOperatorRule2.h"
  #include "BinaryCompOperatorRule3.h"
  #include "BinaryCompOperatorRule4.h"
  #include "LogicOPRule1.h"
  #include "LogicOPRule2.h"
  #include "LogicOPRule3.h"
  #include "LogicOPRule4.h"
  #include "BinaryLogicalOperatorRule1.h"
  #include "BinaryLogicalOperatorRule2.h"
  #include "UnitaryLogicalOperator.h"
  #include "EqRule1.h"
  #include "EqRule2.h"
  #include "EqRule3.h"
  #include "FactorRule1.h"
  #include "FactorRule2.h"
  #include "FactorRule3.h"
  #include "ElemRule1.h"
  #include "ElemRule2.h"
  #include "ElemRule3.h"
  #include "ElemRule4.h"
  #include "ValuesRule1.h"
  #include "ValuesRule2.h"
  #include "ValuesRule3.h"
  #include "ValuesRule4.h"
  #include "ValuesRule5.h"
  #include "ValuesRule6.h"
  #include "ValuesRule7.h"
  #include "VarRule1.h"
  #include "VarRule2.h"
  #include "VariablesTypesRule1.h"
  #include "VariablesTypesRule2.h"
  #include "VariablesTypesRule3.h"
  #include "VariablesTypesRule4.h"
  #include "VariablesTypesRule5.h"
  #include "VariablesTypesRule6.h"
  #include "program.h"
//  #include "TypeChecker.h"
  #include "PrintVisitor.h"
  #include "GeradorDeCodigo.h"
  Node *root = NULL;
  extern int yylex();

  int yyerror(const char *s) {
     printf("yyerror : %s\n",s); 
  }


#line 174 "../Classes/analisador_sintatico.cpp" /* yacc.c:339  */

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
   by #include "analisador_sintatico.hpp".  */
#ifndef YY_YY_CLASSES_ANALISADOR_SINTATICO_HPP_INCLUDED
# define YY_YY_CLASSES_ANALISADOR_SINTATICO_HPP_INCLUDED
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
    L_INT = 258,
    L_DOUBLE = 259,
    L_FLOAT = 260,
    L_CHAR = 261,
    L_STRING = 262,
    L_BOOL = 263,
    L_ID = 264,
    T_BOOL = 265,
    T_INT = 266,
    T_PINMODE = 267,
    T_DOUBLE = 268,
    T_FLOAT = 269,
    T_CHAR = 270,
    T_STRING = 271,
    T_FUNC = 272,
    T_IF = 273,
    T_ELSE = 274,
    T_DIGITALWRITE = 275,
    T_IFELSE = 276,
    T_WHI = 277,
    T_FOR = 278,
    L_DEC = 279,
    L_INC = 280,
    OP_BOOL_IS = 281,
    OP_BOOL_DIFF = 282,
    OP_BOOL_GRE = 283,
    OP_BOOL_EQUAL = 284,
    OP_BOOL_DIF = 285,
    OP_BOOL_EQGRE = 286,
    OP_BOOL_LESS = 287,
    OP_BOOL_EQLESS = 288,
    OP_BOOL_AND = 289,
    OP_BOOL_OR = 290,
    OP_BOOL_NOT = 291,
    OP_EQ = 292,
    OP_SUM = 293,
    OP_SUB = 294,
    OP_DIV = 295,
    OP_MUL = 296,
    OP_POT = 297,
    A_LPAR = 298,
    A_LKEY = 299,
    A_RPAR = 300,
    A_RKEY = 301,
    A_SEMICOLON = 302,
    A_COMMA = 303,
    A_OUT = 304,
    A_INP = 305,
    A_HIGH = 306,
    A_LOW = 307,
    A_LOOP = 308,
    A_SETUP = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 160 "../Analizadores/Sintatico.y" /* yacc.c:355  */

    int64_t integer;
    std::string* str;
    bool logic;
    float float_point;
    double double_point;
    char caractere;
    program *program_t;
    MainBody *mainbody_t;
    MainArduino *mainarduino_t;
    Function *function_t;
    Parameter *parameter_t;
    Parameters *parameters_t;
    Body *body_t;
    LocalBody *localbody_t;
    Line *line_t;
    Condiction *condiction_t;
    Loop *loop_t;
    Setup *setup_t;
    SelectionClause *selectionclause_t;
    ElseClauses *elseclauses_t;
    IfElseClauses *ifelseclauses_t;
    IfClause *ifclause_t;
    PinModeClause *pinmodeclause_t;
    DigitalWriteClause *digitalwriteclause_t;
    ElseClause *elseclause_t;
    IfElseClause *ifelseclause_t;
    WhileClause *whileclause_t;
    ForClause *forclause_t;
    Command *command_t;
    VarFor *varfor_t;
    LogicOperation *logicoperation_t;
    Operation *operation_t;
    UnitaryOperators *unitaryoperators_t;
    LogicComp *logiccomp_t;
    BinaryCompOperator *binarycompoperator_t;
    LogicOP *logicop_t;
    BinaryLogicalOperator *binarylogicaloperator_t;
    UnitaryLogicalOperator *unitarylogicaloperator_t;
    Eq *eq_t;
    Factor *factor_t;
    Elem *elem_t;
    Values *values_t;
    Var *var_t;
    VariablesTypes *variablestypes_t;


#line 317 "../Classes/analisador_sintatico.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CLASSES_ANALISADOR_SINTATICO_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 334 "../Classes/analisador_sintatico.cpp" /* yacc.c:358  */

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   254,   254,   256,   257,   258,   259,   262,   263,   266,
     267,   270,   271,   274,   275,   278,   279,   282,   283,   284,
     287,   288,   289,   292,   293,   296,   297,   300,   301,   304,
     306,   308,   310,   312,   314,   315,   318,   319,   320,   323,
     324,   327,   328,   329,   332,   333,   336,   337,   340,   341,
     342,   343,   346,   355,   356,   357,   360,   361,   362,   365,
     366,   367,   368,   371,   372,   373,   374,   375,   376,   379,
     380,   383,   384,   385,   386,   387,   388
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_INT", "L_DOUBLE", "L_FLOAT", "L_CHAR",
  "L_STRING", "L_BOOL", "L_ID", "T_BOOL", "T_INT", "T_PINMODE", "T_DOUBLE",
  "T_FLOAT", "T_CHAR", "T_STRING", "T_FUNC", "T_IF", "T_ELSE",
  "T_DIGITALWRITE", "T_IFELSE", "T_WHI", "T_FOR", "L_DEC", "L_INC",
  "OP_BOOL_IS", "OP_BOOL_DIFF", "OP_BOOL_GRE", "OP_BOOL_EQUAL",
  "OP_BOOL_DIF", "OP_BOOL_EQGRE", "OP_BOOL_LESS", "OP_BOOL_EQLESS",
  "OP_BOOL_AND", "OP_BOOL_OR", "OP_BOOL_NOT", "OP_EQ", "OP_SUM", "OP_SUB",
  "OP_DIV", "OP_MUL", "OP_POT", "A_LPAR", "A_LKEY", "A_RPAR", "A_RKEY",
  "A_SEMICOLON", "A_COMMA", "A_OUT", "A_INP", "A_HIGH", "A_LOW", "A_LOOP",
  "A_SETUP", "$accept", "Program", "MainBody", "Function", "Parameter",
  "Parameters", "Body", "LocalBody", "Line", "Condiction",
  "SelectionClause", "ElseClauses", "IfElseClauses", "IfClause",
  "ElseClause", "IfElseClause", "WhileClause", "ForClause", "Command",
  "VarFor", "LogicOperation", "Operation", "UnitaryOperators", "LogicComp",
  "BinaryCompOperator", "LogicOP", "Eq", "Factor", "Elem", "Values", "Var",
  "VariablesTypes", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      77,   -88,   -88,   -88,   -88,   -88,   -88,   228,    27,   -88,
      77,     4,    37,    49,   -88,   -88,    77,    30,    33,   -88,
     134,   195,    15,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     175,   175,   194,   -88,   -88,   -88,   -88,   -88,   155,   -32,
     -88,    45,   -88,    36,    54,    34,   -88,   -88,   175,   -88,
     -88,   -88,    58,   184,   -88,   -88,   -88,   -88,   175,   175,
     175,   175,   175,   -88,   -88,   -88,   228,    35,    61,    62,
     -88,    63,    64,   -88,   -88,    -1,   -88,   -88,   -88,   -88,
     -28,   -88,   -88,   -32,   -32,    46,   -88,   -88,   -88,   134,
     134,    19,   134,   -88,   153,   111,    65,   -88,    93,   -88,
     102,    83,   155,    85,    94,   -88,   123,    88,   -88,   153,
      89,   -88,   134,   -88,   -88,   111,   111,   134,   107,   221,
      99,   -88,   101,   -88,   -88,   100,   134,   103,    45,   -88,
     111,   -88,   104,   111,   -88,   -88,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    76,    72,    71,    73,    74,    75,     0,     0,     2,
       5,     0,     0,     0,     1,     3,     6,    69,     0,     4,
       0,     0,     0,    63,    65,    64,    66,    67,    52,    68,
       0,     0,     0,    42,    70,    43,    40,    39,    41,    55,
      58,    62,    10,     0,    12,     0,     8,     7,     0,    59,
      62,    60,     0,     0,    48,    50,    49,    51,     0,     0,
       0,     0,     0,    45,    44,     9,     0,     0,     0,     0,
      14,     0,     0,    19,    20,    23,    21,    22,    17,    18,
       0,    47,    61,    53,    54,    46,    56,    57,    11,     0,
       0,     0,     0,    13,    16,     0,     0,    24,     0,    26,
      28,     0,     0,     0,     0,    38,     0,     0,    15,     0,
       0,    30,     0,    25,    27,     0,     0,     0,     0,     0,
       0,    35,     0,    29,    32,     0,     0,     0,     0,    34,
       0,    37,     0,     0,    31,    36,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,    -4,   -88,   -88,    86,   -88,   -87,   -41,   -88,
     -88,   -88,    53,   -88,    67,   -88,   -88,   -88,   -51,   -88,
     -76,   -19,    51,   142,   -88,   -88,   -29,    42,    -7,   -20,
       5,    -5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,     9,    10,    22,    43,    47,    71,   110,    73,
      74,    97,    98,    75,    99,   100,    76,    77,   111,    92,
      33,    78,    35,    36,    60,    37,    38,    39,    40,    50,
      79,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    34,    13,    53,    72,    11,    15,   108,    61,    62,
      58,    59,    19,   101,   103,    11,   107,    82,    95,    80,
      96,    11,   120,    49,    51,    41,    44,    14,   104,     1,
       2,    85,     3,     4,     5,     6,   122,    23,    24,    25,
      26,    27,    28,    29,     1,     2,    17,     3,     4,     5,
       6,    16,    67,    72,    86,    87,    68,    69,    18,    45,
     102,   102,    46,   102,   123,   124,   105,    20,    72,    63,
      64,    44,    30,    31,    41,    41,    21,    32,    89,   134,
      70,    65,   136,   102,    58,    59,   106,     1,     2,    41,
       3,     4,     5,     6,     7,    41,    41,    41,   125,   128,
      83,    84,    66,    81,    90,    91,    41,   132,   112,    93,
      41,    94,    95,    41,    23,    24,    25,    26,    27,    28,
      29,     1,     2,    96,     3,     4,     5,     6,   115,    67,
     116,   117,   118,    68,    69,   119,   121,    23,    24,    25,
      26,    27,    28,    29,   126,   129,   130,   131,   133,    30,
      31,   135,    88,   114,    32,   109,    23,    24,    25,    26,
      27,    28,    29,     1,     2,   113,     3,     4,     5,     6,
     127,    67,    30,    31,    52,    68,    69,    32,    23,    24,
      25,    26,    27,    54,    29,     0,    55,    56,    57,     0,
       0,    30,    31,    58,    59,     0,    32,    23,    24,    25,
      26,    27,     0,    29,     0,     1,     2,     0,     3,     4,
       5,     6,    54,    30,    31,    55,    56,    57,    48,     0,
       0,     0,    58,    59,    23,    24,    25,    26,    27,    82,
      29,     0,    30,    31,     0,     0,     0,    32,     1,     2,
      42,     3,     4,     5,     6
};

static const yytype_int16 yycheck[] =
{
      20,    20,     7,    32,    45,     0,    10,    94,    40,    41,
      38,    39,    16,    89,    90,    10,    92,    45,    19,    48,
      21,    16,   109,    30,    31,    45,    21,     0,     9,    10,
      11,    60,    13,    14,    15,    16,   112,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     9,    13,    14,    15,
      16,    47,    18,    94,    61,    62,    22,    23,     9,    44,
      89,    90,    47,    92,   115,   116,    47,    37,   109,    24,
      25,    66,    38,    39,    94,    95,    43,    43,    43,   130,
      46,    45,   133,   112,    38,    39,    91,    10,    11,   109,
      13,    14,    15,    16,    17,   115,   116,   117,   117,   119,
      58,    59,    48,    45,    43,    43,   126,   126,    43,    46,
     130,    47,    19,   133,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    21,    13,    14,    15,    16,    45,    18,
      45,    37,     9,    22,    23,    47,    47,     3,     4,     5,
       6,     7,     8,     9,    37,    46,    45,    47,    45,    38,
      39,    47,    66,   100,    43,    44,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    98,    13,    14,    15,    16,
     119,    18,    38,    39,    32,    22,    23,    43,     3,     4,
       5,     6,     7,    28,     9,    -1,    31,    32,    33,    -1,
      -1,    38,    39,    38,    39,    -1,    43,     3,     4,     5,
       6,     7,    -1,     9,    -1,    10,    11,    -1,    13,    14,
      15,    16,    28,    38,    39,    31,    32,    33,    43,    -1,
      -1,    -1,    38,    39,     3,     4,     5,     6,     7,    45,
       9,    -1,    38,    39,    -1,    -1,    -1,    43,    10,    11,
      45,    13,    14,    15,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    13,    14,    15,    16,    17,    56,    57,
      58,    85,    86,    86,     0,    57,    47,     9,     9,    57,
      37,    43,    59,     3,     4,     5,     6,     7,     8,     9,
      38,    39,    43,    75,    76,    77,    78,    80,    81,    82,
      83,    84,    45,    60,    85,    44,    47,    61,    43,    83,
      84,    83,    78,    81,    28,    31,    32,    33,    38,    39,
      79,    40,    41,    24,    25,    45,    48,    18,    22,    23,
      46,    62,    63,    64,    65,    68,    71,    72,    76,    85,
      81,    45,    45,    82,    82,    81,    83,    83,    60,    43,
      43,    43,    74,    46,    47,    19,    21,    66,    67,    69,
      70,    75,    81,    75,     9,    47,    86,    75,    62,    44,
      63,    73,    43,    69,    67,    45,    45,    37,     9,    47,
      62,    47,    75,    73,    73,    76,    37,    77,    84,    46,
      45,    47,    76,    45,    73,    47,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      64,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      69,    70,    71,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    80,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     2,     5,     5,     3,
       2,     3,     1,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     1,     5,
       2,     5,     5,     7,     3,     2,     6,     5,     2,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     1,     1,     1,     1,     1,     1
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
#line 254 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    {printf("program"); root = (yyvsp[0].mainbody_t);}
#line 1537 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 256 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.mainbody_t) = new MainBodyRule1((yyvsp[-1].function_t),(yyvsp[0].mainbody_t)); }
#line 1543 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 257 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.mainbody_t) = new MainBodyRule2((yyvsp[-2].var_t),(yyvsp[0].mainbody_t)); }
#line 1549 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 258 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.mainbody_t) = new MainBodyRule3((yyvsp[0].function_t));}
#line 1555 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 259 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.mainbody_t) = new MainBodyRule4((yyvsp[-1].var_t)); }
#line 1561 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 262 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.function_t) = new FunctionRule1((yyvsp[-3].variablestypes_t),*((yyvsp[-2].str)),(yyvsp[-1].parameter_t),(yyvsp[0].body_t));}
#line 1567 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 263 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.function_t) = new FunctionRule2((yyvsp[-3].variablestypes_t),*((yyvsp[-2].str)),(yyvsp[-1].parameter_t)); }
#line 1573 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 266 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.parameter_t) = new ParameterRule1((yyvsp[-1].parameters_t)); }
#line 1579 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 267 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    {  (yyval.parameter_t) = new ParameterRule2(); }
#line 1585 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 270 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.parameters_t) = new ParametersRule1((yyvsp[-2].var_t),(yyvsp[0].parameters_t)); }
#line 1591 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 271 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.parameters_t) = new ParametersRule2((yyvsp[0].var_t)); }
#line 1597 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 274 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.body_t) = new BodyRule1((yyvsp[-1].localbody_t));}
#line 1603 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 275 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.body_t) = new BodyRule2();}
#line 1609 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 278 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.localbody_t) = new LocalBodyRule1((yyvsp[-2].line_t),(yyvsp[0].localbody_t));}
#line 1615 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 279 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.localbody_t) = new LocalBodyRule2((yyvsp[-1].line_t));}
#line 1621 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 282 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.line_t) = new LineRule1((yyvsp[0].operation_t));}
#line 1627 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 283 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.line_t) = new LineRule2((yyvsp[0].var_t));}
#line 1633 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 284 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.line_t) = new LineRule3((yyvsp[0].condiction_t));}
#line 1639 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 287 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.condiction_t) = new CondictionRule1((yyvsp[0].selectionclause_t));}
#line 1645 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 288 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.condiction_t) = new CondictionRule2((yyvsp[0].whileclause_t));}
#line 1651 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 289 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.condiction_t) = new CondictionRule3((yyvsp[0].forclause_t));}
#line 1657 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 292 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    {}
#line 1663 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 293 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.selectionclause_t) = new SelectionClauseRule2((yyvsp[-1].ifclause_t),(yyvsp[0].elseclauses_t)); }
#line 1669 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 296 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.elseclauses_t) = new ElseClausesRule1((yyvsp[-1].ifelseclauses_t),(yyvsp[0].elseclause_t)); }
#line 1675 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 297 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.elseclauses_t) = new ElseClausesRule2((yyvsp[0].elseclause_t)); }
#line 1681 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 300 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.ifelseclauses_t) = new IfElseClausesRule1((yyvsp[-1].ifelseclause_t), (yyvsp[0].ifelseclauses_t)); }
#line 1687 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 301 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.ifelseclauses_t) = new IfElseClausesRule2((yyvsp[0].ifelseclause_t)); }
#line 1693 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 304 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.ifclause_t) = new IfClause((yyvsp[-2].logicoperation_t),(yyvsp[0].command_t));}
#line 1699 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 306 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.elseclause_t) = new ElseClause((yyvsp[0].command_t)); }
#line 1705 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 308 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.ifelseclause_t) = new IfElseClause( (yyvsp[-2].logicoperation_t), (yyvsp[0].command_t) ); }
#line 1711 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 310 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.whileclause_t) = new WhileClause( (yyvsp[-2].logicoperation_t), (yyvsp[0].command_t) ); }
#line 1717 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 312 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.forclause_t) = new ForClause((yyvsp[-5].varfor_t), (yyvsp[-4].logicoperation_t), (yyvsp[-2].unitaryoperators_t) , (yyvsp[0].command_t)); }
#line 1723 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 314 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.command_t) = new CommandRule1((yyvsp[-1].localbody_t)); }
#line 1729 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 315 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.command_t) = new CommandRule2((yyvsp[-1].line_t)); }
#line 1735 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 318 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.varfor_t) = new VarForRule1((yyvsp[-4].variablestypes_t),*(yyvsp[-3].str),(yyvsp[-1].operation_t)); }
#line 1741 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 319 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.varfor_t) = new VarForRule2(*(yyvsp[-3].str),(yyvsp[-1].operation_t)); }
#line 1747 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 323 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.logicoperation_t) = new LogicOperationRule1((yyvsp[0].logicop_t)); }
#line 1753 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 324 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.logicoperation_t) = new LogicOperationRule2((yyvsp[0].logiccomp_t)); }
#line 1759 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 327 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.operation_t) = new OperationRule1((yyvsp[0].eq_t)); }
#line 1765 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 328 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.operation_t) = new OperationRule2((yyvsp[0].logicoperation_t)); }
#line 1771 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 329 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.operation_t) = new OperationRule3((yyvsp[0].unitaryoperators_t)); }
#line 1777 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.unitaryoperators_t) = new UnitaryOperatorsRule1((yyvsp[-1].values_t)); }
#line 1783 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 333 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.unitaryoperators_t) = new UnitaryOperatorsRule2((yyvsp[-1].values_t)); }
#line 1789 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 336 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.logiccomp_t) = new LogicCompRule1((yyvsp[-2].eq_t),(yyvsp[-1].binarycompoperator_t),(yyvsp[0].eq_t)); }
#line 1795 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 337 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.logiccomp_t) = new LogicCompRule2((yyvsp[-1].logiccomp_t)); }
#line 1801 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 346 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.logicop_t) =  new LogicOPRule3((yyvsp[0].logic));}
#line 1807 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 355 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.eq_t) = new EqRule1((yyvsp[-2].eq_t),(yyvsp[0].factor_t)); }
#line 1813 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 356 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.eq_t) = new EqRule2((yyvsp[-2].eq_t),(yyvsp[0].factor_t)); }
#line 1819 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 357 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.eq_t) = new EqRule3((yyvsp[0].factor_t)); }
#line 1825 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 360 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.factor_t) = new FactorRule1((yyvsp[-2].factor_t),(yyvsp[0].elem_t)); }
#line 1831 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 361 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.factor_t) = new FactorRule2((yyvsp[-2].factor_t),(yyvsp[0].elem_t)); }
#line 1837 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 362 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    {  (yyval.factor_t) = new FactorRule3((yyvsp[0].elem_t));  }
#line 1843 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 365 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.elem_t) = new ElemRule1((yyvsp[0].elem_t)); }
#line 1849 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 366 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.elem_t) = new ElemRule2((yyvsp[0].elem_t)); }
#line 1855 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 367 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.elem_t) = new ElemRule3((yyvsp[-1].eq_t)); }
#line 1861 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 368 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.elem_t) = new ElemRule4((yyvsp[0].values_t)); }
#line 1867 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 371 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.values_t) =  new ValuesRule1((yyvsp[0].integer));}
#line 1873 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 372 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.values_t) =  new ValuesRule2((yyvsp[0].float_point));}
#line 1879 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 373 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.values_t) =  new ValuesRule3((yyvsp[0].double_point));}
#line 1885 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 374 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.values_t) =  new ValuesRule4((yyvsp[0].caractere));}
#line 1891 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 375 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.values_t) =  new ValuesRule5(*((yyvsp[0].str)));}
#line 1897 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 376 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.values_t) =  new ValuesRule7(*((yyvsp[0].str)));}
#line 1903 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 379 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.var_t) = new VarRule1((yyvsp[-1].variablestypes_t),*(yyvsp[0].str)); }
#line 1909 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 380 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.var_t) = new VarRule2((yyvsp[-3].variablestypes_t),*(yyvsp[-2].str),(yyvsp[0].operation_t)); }
#line 1915 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 383 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.variablestypes_t) = new VariablesTypesRule1(); }
#line 1921 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 384 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    {(yyval.variablestypes_t) = new VariablesTypesRule2(); }
#line 1927 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 385 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    {  (yyval.variablestypes_t) = new VariablesTypesRule3();}
#line 1933 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 386 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.variablestypes_t) = new VariablesTypesRule4();}
#line 1939 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 387 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.variablestypes_t) = new VariablesTypesRule5();}
#line 1945 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 388 "../Analizadores/Sintatico.y" /* yacc.c:1646  */
    { (yyval.variablestypes_t) = new VariablesTypesRule6();}
#line 1951 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
    break;


#line 1955 "../Classes/analisador_sintatico.cpp" /* yacc.c:1646  */
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
#line 390 "../Analizadores/Sintatico.y" /* yacc.c:1906  */

int main(int argc, char **argv) {
  extern FILE *yyin;
  if(argc != 2) {
    printf("Uso: %s arquivo_de_entrada\n", argv[0]);
    return 1;
  }
  
  if ((yyin = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "Erro ao tentar abrir o arquivo %s!\n", argv[1]);
    return 1;
  }
  
  if (yyparse()) {
    fprintf(stderr, "Não foi possível compilar dazd %s!\n", argv[1]);
    return 1;
  }

  root->accept(new PrintVisitor());
  //root->accept(new TypeChecker());
  root->accept(new GeradorDeCodigo());
  return 0;
}
