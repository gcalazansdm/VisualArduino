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
  #include "TypeChecker.h"
 // #include "PrintVisitor.h"
 // #include "GeradorDeCodigo.h"
  Node *root = null
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
    std::string str;
    bool logic;
    float float_point;
    double double_point;
    char caractere;
	Node Program
	MainBody MainBody
	MainArduino MainArduino
	Function Function
	Parameter Parameter
	Parameters Parameters
	Body Body
	LocalBody LocalBody
	Line Line
	Condiction Condiction
	Loop Loop
	Setup Setup
	SelectionClause SelectionClause
	ElseClauses ElseClauses
	IfElseClauses IfElseClauses
	IfClause IfClause
	PinModeClause PinModeClause
	DigitalWriteClause DigitalWriteClause
	ElseClause ElseClause
	IfElseClause IfElseClause
	WhileClause WhileClause
	ForClause ForClause
	Command Command
	VarFor VarFor
	LogicOperation LogicOperation
	Operation Operation
	UnitaryOperators UnitaryOperators
	LogicComp LogicComp
	BinaryCompOperator BinaryCompOperator
	LogicOP LogicOP
	BinaryLogicalOperator BinaryLogicalOperator
	UnitaryLogicalOperator UnitaryLogicalOperator
	Eq Eq
	Factor Factor
	Elem Elem
	Values Values
	Var Var
	VariablesTypes VariablesTypes
}
%type <caractere> L_CHAR
%type <integer> L_INT
%type <logic> L_BOOL
%type <str> L_STRING
%type <str> L_ID
%type <float_point> L_FLOAT
%type <double_point> L_DOUBLE
%type <Node> Program
%type <MainBody> MainBody
%type <MainArduino> MainArduino
%type <Function> Function
%type <Parameter> Parameter
%type <Parameters> Parameters
%type <Body> Body
%type <LocalBody> LocalBody
%type <Line> Line
%type <Condiction> Condiction
%type <Loop> Loop
%type <Setup> Setup
%type <SelectionClause> SelectionClause
%type <ElseClauses> ElseClauses
%type <IfElseClauses> IfElseClauses
%type <IfClause> IfClause
%type <PinModeClause> PinModeClause
%type <DigitalWriteClause> DigitalWriteClause
%type <ElseClause> ElseClause
%type <IfElseClause> IfElseClause
%type <WhileClause> WhileClause
%type <ForClause> ForClause
%type <Command> Command
%type <VarFor> VarFor
%type <LogicOperation> LogicOperation
%type <Operation> Operation
%type <UnitaryOperators> UnitaryOperators
%type <LogicComp> LogicComp
%type <BinaryCompOperator> BinaryCompOperator
%type <LogicOP> LogicOP
%type <BinaryLogicalOperator> BinaryLogicalOperator
%type <UnitaryLogicalOperator> UnitaryLogicalOperator
%type <Eq> Eq
%type <Factor> Factor
%type <Elem> Elem
%type <Values> Values
%type <Var> Var
%type <VariablesTypes> VariablesTypes
%%
 
Program : MainBody {root = $1;}

MainBody : Function MainBody { $$ = new MainBodyRule1($1,$2); } 
         | Var A_SEMICOLON MainBody { $$ = new MainBodyRule2($1,$3); }
         | Function { $$ = $1;}
         | Var A_SEMICOLON  { $$ = $1; }
         ;
 
MainArduino : Setup A_SEMICOLON Loop A_SEMICOLON { $$ = new MainArduino($1,$3); };

Function : T_FUNC VariablesTypes L_ID Parameter Body { $$ = new FuctionRule1($2,$3,$4);}
         | T_FUNC VariablesTypes L_ID Parameter A_SEMICOLON { $$ = new FuctionRule2($2,$3); }
         ;
 
Parameter : A_LPAR Parameters A_RPAR { $$ = $2; }
          | A_LPAR A_RPAR { $$ = new ParameterRule2(); }
          ;
 
Parameters : Var A_COMMA Parameters { $$ = new ParameterRule1($1,$3); }
           | Var { $$ = $1; }
           ;
  
Body : A_LKEY LocalBody A_RKEY { $$ = $2;}
     | A_LKEY A_RKEY { $$ = new BodyRule2();}
     ;
 
LocalBody : Line A_SEMICOLON LocalBody { $$ = new LocalBodyRule1($1,$3);}
          | Line A_SEMICOLON { $$ = $1;}
          ;
  
Line : Operation  { $$ = $1;}
     | Var { $$ = $1;}
     | Condiction { $$ = $1;}
     ;
 
Condiction : SelectionClause { $$ = $1;}
           | WhileClause { $$ = $1;}
           | ForClause { $$ = $1;}
           ;
 
Loop : A_LOOP A_LPAR A_RPAR A_RKEY Loop A_LKEY { $$ = $5;}
     | A_LOOP A_LPAR A_RPAR A_RKEY MainBody Loop A_LKEY { $$ = new CondictionRule2($5,$6);}
     ;
 
Setup : A_SETUP A_LPAR A_RPAR A_RKEY  A_LKEY {}
      | A_SETUP A_LPAR A_RPAR MainBody { $$ = $4 }
      ;
 
SelectionClause : IfClause {}
                | IfClause ElseClauses { $$ = new SelectionClauseRule2($1,$2); }
                ;
 
ElseClauses : IfElseClauses ElseClause { $$ = $1; }
            | ElseClause { $$ = $1; }
            ;
 
IfElseClauses : IfElseClause IfElseClauses { $$ = $2; }
              | IfElseClause { $$ = $1; }
              ;
 
IfClause : T_IF A_LPAR LogicOperation A_RPAR Command { $$ = new IfClause($3,$5);};
 
PinModeClause : T_PINMODE A_LPAR Values T_INT A_COMMA A_INP A_RPAR A_SEMICOLON { $$ = $3; }
              | T_PINMODE A_LPAR Values T_INT A_COMMA A_OUT A_RPAR A_SEMICOLON { $$ = $3; }
              ;
  
DigitalWriteClause : T_DIGITALWRITE A_LPAR Values T_INT A_COMMA A_HIGH A_RPAR A_SEMICOLON { $$ = $3; }
                   | T_DIGITALWRITE A_LPAR Values T_INT A_COMMA A_LOW A_RPAR A_SEMICOLON { $$ = $3; }
                   ;
 
ElseClause  : T_ELSE Command { $$ = $2; };
 
IfElseClause  : T_IFELSE A_LPAR LogicOperation A_RPAR Command { $$ = new IfElseClause( $3, $5 ); };
  
WhileClause : T_WHI A_LPAR LogicOperation A_RPAR Command { $$ = new WhileClause( $3, $5 ); };
  
ForClause : T_FOR VarFor LogicOperation A_SEMICOLON UnitaryOperators A_RPAR Command { $$ = new ForClause($2, $3, $5 , $7); };
 
Command : A_LKEY LocalBody A_RKEY { $$ = $2; }
        | Line A_SEMICOLON { $$ = $1; }
        ;
  
VarFor : A_LPAR VariablesTypes L_ID OP_EQ Operation A_SEMICOLON { $$ = new VarForRule1($2,$5); }
       | A_LPAR L_ID OP_EQ Operation A_SEMICOLON { $$ = $4; }
       | A_LPAR A_SEMICOLON
       ;

LogicOperation : LogicOP { $$ = $1; }
               | LogicComp { $$ = $1; }
               ;
  
Operation : Eq  { $$ = $1; }
          | LogicOperation { $$ = $1; }
          | UnitaryOperators { $$ = $1; } 
          ;
 
UnitaryOperators : Values L_INC { $$ = $1; }
                 | Values L_DEC { $$ = $1; }
                 ;
 
LogicComp : Eq BinaryCompOperator Eq { $$ = new LogicCompRule1($1,$2,$3); }
          | A_LPAR LogicComp A_RPAR { $$ = $2; }
          ;
 
BinaryCompOperator : OP_BOOL_GRE
                   | OP_BOOL_LESS
                   | OP_BOOL_EQGRE
                   | OP_BOOL_EQLESS
                   ;
 
LogicOP : LogicOP BinaryLogicalOperator LogicOP { $$ = new LogicOPRule1($1,$2,$3); }
        | UnitaryLogicalOperator LogicOP { $$ = new LogicOPRule2($1,$2); }
        | L_BOOL 
        | A_LPAR LogicOP A_RPAR { $$ = $2; }
        ;
 
BinaryLogicalOperator : OP_BOOL_AND
                      | OP_BOOL_OR
                      ;
 
UnitaryLogicalOperator : OP_BOOL_NOT;
 
Eq : Eq OP_SUM Factor { $$ = new EqRule1($1,$3); }
   | Eq OP_SUB Factor { $$ = new EqRule2($1,$3); }
   | Factor { $$ = $1 }
   ;
 
Factor : Factor OP_DIV Elem { $$ = new FactorRule1($1,$3); }
       | Factor OP_MUL Elem { $$ = new FactorRule2($1,$3); }
       | Elem { $$ = $1; }
       ;
  
Elem : OP_SUM Elem { $$ = $2; }
     | OP_SUB Elem { $$ = $2; }
     | A_LPAR Eq A_RPAR { $$ = $2; }
     | Values { $$ = $1; }
     ;
 
Values : L_INT { $$ =  new ValuesRule1($1);}
       | L_FLOAT { $$ =  new ValuesRule2($1);}
       | L_DOUBLE { $$ =  new ValuesRule3($1);}
       | L_CHAR { $$ =  new ValuesRule4($1);}
       | L_STRING { $$ =  new ValuesRule5($1);}
       | L_BOOL { $$ =  new ValuesRule6($1);}
       | L_ID { $$ =  new ValuesRule7($1);}
       ;
 
Var : VariablesTypes L_ID { $$ = new VarRule1($1,$2); }
    | VariablesTypes L_ID OP_EQ Operation { $$ = new VarRule2($1,$2,$4); }
    ;
 
VariablesTypes : T_DOUBLE
               | T_INT
               | T_FLOAT
               | T_CHAR
               | T_STRING
               | T_BOOL
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
    fprintf(stderr, "Não foi possível compilar %s!\n", argv[1]);
    return 1;
  }
  //root->accept(new PrintVisitor());
  root->accept(new TypeChecker());
 // roo
  return 0;
}