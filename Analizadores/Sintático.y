%{
  #include<string>
  #include<stdint.h>
  #include<stdbool.h>
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
%token T_FLOAT
%token T_CHAR
%token T_STRING
%token OP_BOOL_IS
%token OP_BOOL_DIFF
%token OP_BOOL_GRE
%token OP_BOOL_EQGRE
%token OP_BOOL_LESS
%token OP_BOOL_EQLESS
%token OP_BOOL_AND
%token OP_BOOL_OR
%token OP_BOOL_NOT
%token T_FUNC
%token T_IF
%token T_ELSE
%token T_IFELSE
%token T_WHI
%token T_FOR
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

%union{
  	int64_t integer;
    std::string str;
    bool logic;
  	float float_point;
    double double_point;
    char caractere;
}

%type <caractere> L_CHAR
%type <integer> L_INT
%type <logic> L_BOOL
%type <str> L_STRING
%type <str> L_ID
%type <float_point> L_FLOAT
%type <double_point> L_DOUBLE
%%
MainBody : Function MainBody
         | Var A_SEMICOLON MainBody
         | Function
         | Var A_SEMICOLON 
         ;

Function : T_FUNC VariablesTypes L_ID Parameters Body
         | T_FUNC VariablesTypes L_ID Parameters A_SEMICOLON
         ;

Parameter : A_LPAR Parameters A_RPAR
          | A_LPAR A_RPAR
          ;

Parameters : Var A_COMMA Parameters
           | Var
           ;

Body : A_LKEY LocalBody A_RKEY
     | A_LKEY A_RKEY
     ;

LocalBody : Line A_SEMICOLON LocalBody
          | Line A_SEMICOLON
          ;

Line : Operation 
     | Var 
     | Condiction
     ;

Condiction : SelectionClause
           | WhileClause
           | ForClause
           ;

SelectionClause : IfClause 
                | IfClause ElseClauses
                ;

ElseClauses : IfElseClauses ElseClause
            | ElseClause
            ;

IfElseClauses : IfElseClause IfElseClauses
              | IfElseClause
              ;

IfClause : T_IF A_LPAR LogicOperation A_RPAR Command;

ElseClause  : T_ELSE Command;

IfElseClause  : T_IFELSE A_LPAR LogicOperation A_RPAR Command;

WhileClause : T_WHI A_LPAR LogicOperation A_RPAR Command;

ForClause : T_FOR VarFor LogicOperation A_SEMICOLON UnitaryOperators A_RPAR Command;

Command : A_LKEY LocalBody A_RKEY 
        | Line A_SEMICOLON
        ;

VarFor : A_LPAR VariablesTypes L_ID OP_EQ Operation A_SEMICOLON
       | A_LPAR L_ID OP_EQ Operation A_SEMICOLON
       | A_LPAR A_SEMICOLON
       ;

LogicOperation : LogicOP
               | LogicComp
               ;

Operation : Eq 
          | LogicOperation 
          | UnitaryOperators
          ;

//FIXME FAZER += -= \= e *=
UnitaryOperators : Values L_INC
                 | Values L_DEC
                 ;

LogicComp : Eq BinaryCompOperator Eq
          | A_LPAR LogicComp A_RPAR
          ;

BinaryCompOperator : OP_BOOL_GRE
                   | OP_BOOL_LESS
                   | OP_BOOL_EQGRE
                   | OP_BOOL_EQLESS
                   ;

LogicOP : LogicOP BinaryLogicalOperator LogicOP
        | UnitaryLogicalOperator LogicOP
        | L_BOOL 
        | A_LPAR LogicOP A_RPAR
        ;
        
BinaryLogicalOperator : OP_BOOL_AND
                      | OP_BOOL_OR
                      ;

UnitaryLogicalOperator : OP_BOOL_NOT;

Eq : Eq OP_SUM Factor 
   | Eq OP_SUB Factor 
   | Factor
   ;

Factor : Factor OP_DIV Elem
       | Factor OP_MUL Elem
       | Elem
       ;

Elem : OP_SUM Elem 
     | OP_SUB Elem
     | A_LPAR Eq A_RPAR
     | Values
     ;

Values : L_INT
       | L_FLOAT
       | L_DOUBLE
       | L_CHAR
       | L_STRING
       | L_BOOL
       | L_ID
       ;

Var : VariablesTypes L_ID
    | VariablesTypes L_ID OP_EQ Operation
    ;

VariablesTypes : T_DOUBLE
               | T_INT
               | T_FLOAT
               | T_CHAR
               | T_STRING
               | T_BOOL
               ;