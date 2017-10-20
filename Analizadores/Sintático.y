%{
	#include<string>
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
%token T_DOUBLE
%token T_FUNC
%token T_CHAR
%token T_STRING
%token T_FLOAT
%token T_WHI
%token T_IF
%token T_ELSE
%token T_IFELSE
%token T_FOR
%token OP_EQ
%token OP_BOOL_IS
%token OP_BOOL_DIFF
%token OP_BOOL_GRE
%token OP_BOOL_EQGRE
%token OP_BOOL_LESS
%token OP_BOOL_EQLESS
%token OP_BOOL_AND
%token OP_BOOL_OR
%token OP_BOOL_NOT
%token OP_SUM
%token OP_SUB
%token OP_DIV
%token OP_MUL
%token OP_POW
%token A_LPAR
%token A_LKEY
%token A_RPAR
%token A_RKEY
%token A_SEMICOLON
%token A_COMMA
%token A_COMMA

%union{
	int64_t integer;
  std::string str;
  bool logic;
	double float_point
}

%type <integer> L_INT
%type <logic> L_BOOL
%type <str> L_STRING
%type <str> L_ID
%type <float_point> L_FLOAT
%%

MainBody : Function MainBody
         | Var A_SEMICOLON MainBody
         | Function
         | Var A_SEMICOLON 


Function : T_FUNC TiposDeVariaveis L_ID A_LPAR Parametros A_RPAR A_LKEY LocalBody A_RKEY
         | T_FUNC TiposDeVariaveis L_ID A_LPAR Parametros A_RPAR A_SEMICOLON
         ;

Parametros : Var A_COMMA Parametros
           | Var
           ;

LocalBody : Lines A_SEMICOLON LocalBody
          | Lines A_SEMICOLON
          ;

Lines: Line Lines
     | Line
     ;

Line      : Operation 
          | Var 
          | Condiction
          ;

Condiction : SelectionClause
           | WhileClause
           | ForClause
           ;

SelectionClause : IfCLause 
                | IfCLause ElseClauses
                ;

ElseClauses : IfElseClauses ElseClauses
            | ElseClause
            ;

IfElseClauses : IfElseClause ElseClauses
              | IfElseClause
              ;

IfCLause : T_IF A_LPAR LogicOperation A_RPAR Command;

ElseClause  : T_ELSE Command;

IfElseClause  : T_IFELSE A_LPAR LogicOperation A_RPAR Command;

WhileClause : T_WHI A_LPAR LogicOperation A_RPAR Command;

ForClause : T_WHI A_LPAR VarFor A_SEMICOLON Operation A_SEMICOLON UnaryOperators A_RPAR Command;

Command : A_LKEY LocalBody A_RKEY 
        | Lines A_SEMICOLON
        ;

VarFor : TiposDeVariaveis L_ID
       : TiposDeVariaveis L_ID
       : TiposDeVariaveis L_ID OP_EQ Operation
       | TiposDeVariaveis L_ID OP_EQ Operation
       ;

LogicOperation : LogicOP
               | LogicComp

Operation : Eq 
          | LogicOperation 
          | UnaryOperators
          ;

UnaryOperators : Valores L_INC
               | Valores L_DEC
               ;

LogicComp : Eq OperadorCompBinario Eq
          | OperadorCompUnitario Eq
          | A_LPAR LogicComp A_RPAR
          ;

LogicOP : LogicOP OperadorLogicoBinario LogicOP
        | OperadorLogicoUnitario LogicOP
        | L_BOOL 
        | A_LPAR LogicOP A_RPAR
        ;

OperadorLogicoBinario : OP_BOOL_AND
                      | OP_BOOL_OR
                      ;

OperadorLogicoUnitario : OP_BOOL_NOT;

Eq : Eq OP_SUM Fator 
   | Eq OP_SUB Fator 
   | Fator
   ;

Fator : Fator OP_DIV Elem
      | Fator OP_MUL Elem
      | Elem
      ;

Elem : OP_SUM Elem 
     | OP_SUB Elem
     | A_LPAR Eq A_RPAR
     | Valores
     ;

Valores : L_INT
        | L_FLOAT
        | L_DOUBLE
        | L_CHAR
        | L_STRING
        | L_BOOL
        | L_ID
        ;

Var : TiposDeVariaveis L_ID
    | TiposDeVariaveis L_ID OP_EQ Operation
    ;

TiposDeVariaveis : T_DOUBLE
                 | T_INT
                 | T_FLOAT
                 | T_CHAR
                 | T_ID
                 | T_STRING
                 | T_BOOL
                 ;