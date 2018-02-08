/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 160 "../Analizadores/Sintatico.y" /* yacc.c:1909  */

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


#line 157 "../Classes/analisador_sintatico.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CLASSES_ANALISADOR_SINTATICO_HPP_INCLUDED  */
