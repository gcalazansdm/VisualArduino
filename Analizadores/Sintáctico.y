%{
	#include<string>
%}
%token L_INT
%token L_DOUBLE
%token L_FLOAT
%token T_INT
%token T_DOUBLE
%token T_FLOAT
%token T_WHI
%token T_IF
%token T_FUNC
%token T_FOR
%token OP_SUM
%token OP_SUB
%token OP_DIV
%token OP_MUL
%token OP_POW
%token A_LPAR
%token A_RPAR
%token T_ID

%union{
	int64_t integer;
	std::string str;
	double float_point
}

%type <integer> L_INT
%type <str> L_STRING
%type <str> ID
%type <float_point> L_FLOAT
%%

Eq: Eq OP_SUM Eq 
  | Eq OP_SUB Eq 
  | Fator;

Fator: Fator OP_DIV Fator
     | Fator OP_MUL Fator
     | Elem;

Elem: OP_SUM Elem 
    | OP_SUB Elem
    | A_LPAR Eq A_RPAR
    | Valor;

Var : Tipos ID

Tipos : T_DOUBLE
      | T_INT
      | T_FLOAT; 