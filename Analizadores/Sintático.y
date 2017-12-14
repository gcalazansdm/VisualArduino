%{
  #include<string>
  #include<stdint.h>
  #include<stdbool.h>

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
}

%type <caractere> L_CHAR
%type <integer> L_INT
%type <logic> L_BOOL
%type <str> L_STRING
%type <str> L_ID
%type <float_point> L_FLOAT
%type <double_point> L_DOUBLE
%%
 
Program : MainBody {root = $1}

MainBody : Function MainBody { $$ = new MainBodyRule1($1,$2); } 
         | Var A_SEMICOLON MainBody { $$ = new MainBodyRule2($1,$3); }
         | Function { $$ = $1;}
         | Var A_SEMICOLON  { $$ = $1; }
         ;
 
MainArduino : Setup A_SEMICOLON Loop A_SEMICOLON { $$ = new MainArduino($1,$3); };

Function : T_FUNC VariablesTypes L_ID Parameter Body { $$ = new FuctionRule1($2,$3,$4);}
         | T_FUNC VariablesTypes L_ID Parameter A_SEMICOLON { $$ = new FuctionRule2($2,$3); }
         ;
 
Parameter : A_LPAR Parameters A_RPAR { $$ = new ParameterRule1($2,$3); }
          | A_LPAR A_RPAR { $$ = new ParameterRule2(); }
          ;
 
Parameters : Var A_COMMA Parameters { $$ = new ParameterRule1($1,$3); }
           | Var { $$ = $1; }
           ;
  
Body : A_LKEY LocalBody A_RKEY { $$ = new BodyRule1($2,$3);}
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
  
ForClause : T_FOR VarFor LogicOperation A_SEMICOLON UnitaryOperators A_RPAR Command { $$ = new ForClause( $1 , $2 , $5 , $7); };
 
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
 
Values : L_INT
       | L_FLOAT
       | L_DOUBLE
       | L_CHAR
       | L_STRING
       | L_BOOL
       | L_ID
       ;
 
Var : VariablesTypes L_ID { $$ = $1; }
    | VariablesTypes L_ID OP_EQ Operation { $$ = new VarRule2($1,$4); }
    ;
 
VariablesTypes : T_DOUBLE
               | T_INT
               | T_FLOAT
               | T_CHAR
               | T_STRING
               | T_BOOL
               ;