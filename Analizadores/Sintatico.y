%{
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

%}
%token L_INT
%token L_DOUBLE
%token L_FLOAT
%token L_CHAR
%token L_STRING
%token L_BOOL
%token L_ID
%token T_BOOL
%token T_INT 
%token T_PINMODE
%token T_DOUBLE
%token T_FLOAT
%token T_CHAR
%token T_STRING
%token T_FUNC
%token T_IF
%token T_ELSE
%token T_DIGITALWRITE
%token T_IFELSE
%token T_WHI
%token T_FOR
%token L_DEC
%token L_INC
%token OP_BOOL_IS
%token OP_BOOL_DIFF
%token OP_BOOL_GRE
%token OP_BOOL_EQUAL
%token OP_BOOL_DIF
%token OP_BOOL_EQGRE
%token OP_BOOL_LESS
%token OP_BOOL_EQLESS
%token OP_BOOL_AND
%token OP_BOOL_OR
%token OP_BOOL_NOT
%token OP_EQ
%token OP_SUM
%token OP_SUB
%token OP_DIV
%token OP_MUL
%token OP_POT
%token A_LPAR
%token A_LKEY
%token A_RPAR
%token A_RKEY
%token A_SEMICOLON
%token A_COMMA
%token A_OUT
%token A_INP
%token A_HIGH
%token A_LOW
%token A_LOOP
%token A_SETUP
%union{
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

}
%type <str> L_STRING
%type <float_point> L_FLOAT
%type <double_point> L_DOUBLE
%type <caractere> L_CHAR
%type <integer> L_INT
%type <logic> L_BOOL
%type <str> L_ID
%type <eq_t> Eq
%type <var_t> Var
%type <loop_t> Loop
%type <line_t> Line
%type <body_t> Body
%type <elem_t> Elem
%type <setup_t> Setup
%type <factor_t> Factor
%type <varfor_t> VarFor
%type <values_t> Values
%type <logicop_t> LogicOP
%type <command_t> Command
%type <program_t> Program
%type <function_t> Function
%type <mainbody_t> MainBody
%type <ifclause_t> IfClause
%type <logiccomp_t> LogicComp
%type <operation_t> Operation
%type <forclause_t> ForClause
%type <localbody_t> LocalBody
%type <parameter_t> Parameter
%type <elseclause_t> ElseClause
%type <condiction_t> Condiction
%type <parameters_t> Parameters
%type <whileclause_t> WhileClause
%type <elseclauses_t> ElseClauses
%type <mainarduino_t> MainArduino
%type <ifelseclause_t> IfElseClause
%type <ifelseclauses_t> IfElseClauses
%type <pinmodeclause_t> PinModeClause
%type <variablestypes_t> VariablesTypes
%type <logicoperation_t> LogicOperation
%type <selectionclause_t> SelectionClause
%type <unitaryoperators_t> UnitaryOperators
%type <digitalwriteclause_t> DigitalWriteClause
%type <binarycompoperator_t> BinaryCompOperator
%type <binarylogicaloperator_t> BinaryLogicalOperator
%type <unitarylogicaloperator_t> UnitaryLogicalOperator
%%
 
Program : MainBody {printf("program"); root = $1;}

MainBody : Function MainBody { $$ = new MainBodyRule1($1,$2); } 
         | Var A_SEMICOLON MainBody { $$ = new MainBodyRule2($1,$3); }
         | Function { $$ = new MainBodyRule3($1);}
         | Var A_SEMICOLON  { $$ = new MainBodyRule4($1); }
         ;

Function : T_FUNC VariablesTypes L_ID Parameter Body { $$ = new FunctionRule1($2,*($3),$4,$5);}
         | T_FUNC VariablesTypes L_ID Parameter A_SEMICOLON { $$ = new FunctionRule2($2,*($3),$4); }
         ;
 
Parameter : A_LPAR Parameters A_RPAR { $$ = new ParameterRule1($2); }
          | A_LPAR A_RPAR {  $$ = new ParameterRule2(); }
          ;
 
Parameters : Var A_COMMA Parameters { $$ = new ParametersRule1($1,$3); }
           | Var { $$ = new ParametersRule2($1); }
           ;
  
Body : A_LKEY LocalBody A_RKEY { $$ = new BodyRule1($2);}
     | A_LKEY A_RKEY { $$ = new BodyRule2();}
     ;
 
LocalBody : Line A_SEMICOLON LocalBody { $$ = new LocalBodyRule1($1,$3);}
          | Line A_SEMICOLON { $$ = new LocalBodyRule2($1);}
          ;
  
Line : Operation  { $$ = new LineRule1($1);}
     | Var { $$ = new LineRule2($1);}
     | Condiction { $$ = new LineRule3($1);}
     ;
 
Condiction : SelectionClause { $$ = new CondictionRule1($1);}
           | WhileClause { $$ = new CondictionRule2($1);}
           | ForClause { $$ = new CondictionRule3($1);}
           ;
  
SelectionClause : IfClause {}
                | IfClause ElseClauses { $$ = new SelectionClauseRule2($1,$2); }
                ;
 
ElseClauses : IfElseClauses ElseClause { $$ = new ElseClausesRule1($1,$2); }
            | ElseClause { $$ = new ElseClausesRule2($1); }
            ;
 
IfElseClauses : IfElseClause IfElseClauses { $$ = new IfElseClausesRule1($1, $2); }
              | IfElseClause { $$ = new IfElseClausesRule2($1); }
              ;
 
IfClause : T_IF A_LPAR LogicOperation A_RPAR Command { $$ = new IfClause($3,$5);};
 
ElseClause  : T_ELSE Command { $$ = new ElseClause($2); };
 
IfElseClause  : T_IFELSE A_LPAR LogicOperation A_RPAR Command { $$ = new IfElseClause( $3, $5 ); };
  
WhileClause : T_WHI A_LPAR LogicOperation A_RPAR Command { $$ = new WhileClause( $3, $5 ); };
  
ForClause : T_FOR VarFor LogicOperation A_SEMICOLON UnitaryOperators A_RPAR Command { $$ = new ForClause($2, $3, $5 , $7); };
 
Command : A_LKEY LocalBody A_RKEY { $$ = new CommandRule1($2); }
        | Line A_SEMICOLON { $$ = new CommandRule2($1); }
        ;
  
VarFor : A_LPAR VariablesTypes L_ID OP_EQ Operation A_SEMICOLON { $$ = new VarForRule1($2,*$3,$5); }
       | A_LPAR L_ID OP_EQ Operation A_SEMICOLON { $$ = new VarForRule2(*$2,$4); }
       | A_LPAR A_SEMICOLON
       ;

LogicOperation : LogicOP { $$ = new LogicOperationRule1($1); }
               | LogicComp { $$ = new LogicOperationRule2($1); }
               ;
  
Operation : Eq  { $$ = new OperationRule1($1); }
          | LogicOperation { $$ = new OperationRule2($1); }
          | UnitaryOperators { $$ = new OperationRule3($1); } 
          ;
 
UnitaryOperators : Values L_INC { $$ = new UnitaryOperatorsRule1($1); }
                 | Values L_DEC { $$ = new UnitaryOperatorsRule2($1); }
                 ;
 
LogicComp : Eq BinaryCompOperator Eq { $$ = new LogicCompRule1($1,$2,$3); }
          | A_LPAR LogicComp A_RPAR { $$ = new LogicCompRule2($2); }
          ;
 
BinaryCompOperator : OP_BOOL_GRE
                   | OP_BOOL_LESS
                   | OP_BOOL_EQGRE
                   | OP_BOOL_EQLESS
                   ;
 
LogicOP : L_BOOL { $$ =  new LogicOPRule3($1);}
        ;
 
BinaryLogicalOperator : OP_BOOL_AND
                      | OP_BOOL_OR
                      ;
 
UnitaryLogicalOperator : OP_BOOL_NOT;
 
Eq : Eq OP_SUM Factor { $$ = new EqRule1($1,$3); }
   | Eq OP_SUB Factor { $$ = new EqRule2($1,$3); }
   | Factor { $$ = new EqRule3($1); }
   ;
 
Factor : Factor OP_DIV Elem { $$ = new FactorRule1($1,$3); }
       | Factor OP_MUL Elem { $$ = new FactorRule2($1,$3); }
       | Elem {  $$ = new FactorRule3($1);  }
       ;
  
Elem : OP_SUM Elem { $$ = new ElemRule1($2); }
     | OP_SUB Elem { $$ = new ElemRule2($2); }
     | A_LPAR Eq A_RPAR { $$ = new ElemRule3($2); }
     | Values { $$ = new ElemRule4($1); }
     ;
 
Values : L_INT { $$ =  new ValuesRule1($1);}
       | L_FLOAT { $$ =  new ValuesRule2($1);}
       | L_DOUBLE { $$ =  new ValuesRule3($1);}
       | L_CHAR { $$ =  new ValuesRule4($1);}
       | L_STRING { $$ =  new ValuesRule5(*($1));}
       | L_ID { $$ =  new ValuesRule7(*($1));}
       ;
 
Var : VariablesTypes L_ID { $$ = new VarRule1($1,*$2); }
    | VariablesTypes L_ID OP_EQ Operation { $$ = new VarRule2($1,*$2,$4); }
    ;
 
VariablesTypes : T_DOUBLE { $$ = new VariablesTypesRule1(); }
               | T_INT {$$ = new VariablesTypesRule2(); }
               | T_FLOAT {  $$ = new VariablesTypesRule3();}
               | T_CHAR { $$ = new VariablesTypesRule4();}
               | T_STRING { $$ = new VariablesTypesRule5();}
               | T_BOOL { $$ = new VariablesTypesRule6();}
               ;
%%
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