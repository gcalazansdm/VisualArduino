%{
   #include <stdio.h>
   #include <string>
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
   #include "analisador_sintatico.hpp"
   std::string literal;

%}

%option noyywrap  

%x STRING

%x COMMENT

%x COMMENTSTRING

%%

"+" { return OP_SUM; }
"-" { return OP_SUB; } 
"*" { return OP_MUL; }
"/" { return OP_DIV; }
"^" { return OP_POT; }
"ALTO" { return A_LOW; }
"BAIXO" { return A_HIGH; }
"(" { return A_RPAR; }
")" { return A_LPAR; }
"{" { return A_RKEY; }
"}" { return A_LKEY; }
"," { return A_COMMA; }
"SAIDA" { return A_OUT; }
"ENTRADA" { return A_INP; }
"repeticao" { return A_LOOP; }
"inicio" { return A_SETUP; }
";" {return A_SEMICOLON; }
"=" { return OP_EQ; }
"++" { return L_INC; }
"--" { return L_DEC; }
"==" {return OP_BOOL_EQUAL; }
"!=" {return OP_BOOL_DIF; } 
">" {return OP_BOOL_GRE; }
"<" {return OP_BOOL_LESS; }
">=" {return OP_BOOL_EQGRE; }
"<=" {return OP_BOOL_EQLESS; }
"e" {return OP_BOOL_AND; }
"ou" {return OP_BOOL_OR; }
"nao" {return OP_BOOL_NOT; }
"inteiro" { return T_INT; }
"real" { return T_DOUBLE; }
"flutuante" { return T_FLOAT; }
"caractere" {return T_CHAR; }
"texto" {return T_STRING; }
"logico" {return T_BOOL; }
"funcao" { return T_FUNC; }
"se" { return T_IF; }
"tipoPino" { return T_PINMODE; }
"pulso" { return T_DIGITALWRITE; }
"entao" { return T_ELSE; }
"porem" { return T_IFELSE; }
"enquanto" { return T_WHI; }
"para" { return T_FOR; }
[A-Za-z][A-Za-z0-9_-]* {yylval.str = new std::string(yytext);return L_ID;}
[\r\n ] {}
[/][/][^\n\r]* {}
[']([^"]|"\\\"")['] {return L_CHAR; }
(0|[+-]?[1-9][0-9]*) {return L_INT; }
[+-]?(0|[1-9][0-9]*)?\.[0-9]+ {return L_DOUBLE; }
[+-]?(0|[1-9][0-9]*)?\.[0-9]+[fF] {return L_FLOAT; }
"//"[.]* {BEGIN(COMMENT); }
<COMMENT>"*/" {BEGIN(INITIAL); }
<COMMENT>. {}
\" {BEGIN(STRING); literal = ""; }
<STRING>\" {yylval.str = new std::string(literal);BEGIN(INITIAL);return L_STRING; }
<STRING>[/][/][^$]* {}
<STRING>. {literal += yytext; }
" "|"\\t" {}
. { printf("caractere invalido [%s] \n", yytext); return 0; }

%%
