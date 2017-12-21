%{
   #include <string>
   std::string literal;
   enum{

 L_INT,
 L_DOUBLE,
 L_FLOAT,
 L_CHAR,
 L_STRING,
 L_BOOL,
 L_ID,
 T_BOOL,
 T_INT ,
 T_PINMODE,
 T_DOUBLE,
 T_FLOAT,
 T_CHAR,
 T_STRING,
 T_FUNC,
 T_IF,
 T_ELSE,
 T_DIGITALWRITE,
 T_IFELSE,
 T_WHI,
 T_FOR,
 L_DEC,
 L_INC,
 OP_BOOL_IS,
 OP_BOOL_DIFF,
 OP_BOOL_GRE,
 OP_BOOL_EQGRE,
 OP_BOOL_LESS,
 OP_BOOL_EQLESS,
 OP_BOOL_AND,
 OP_BOOL_OR,
 OP_BOOL_NOT,
 OP_EQ,
 OP_SUM,
 OP_SUB,
 OP_DIV,
 OP_MUL,
 OP_POT,
 A_LPAR,
 A_LKEY,
 A_RPAR,
 A_RKEY,
 A_SEMICOLON,
 A_COMMA,
 A_OUT,
 A_INP,
 A_HIGH,
A_LOW,
A_LOOP,
A_SETUP
   }
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
\( { return A_RPAR; }
\) { return A_LPAR; }
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
[A-Za-z][A-Za-z0-9_-] {return L_ID;}
[\r\n ] {}
[/][/][^$]* {}
[']([^"]|"\\\"")['] {return L_CHAR; }
(0|[+-]?[1-9][0-9]*) {return L_INT; }
[+-]?(0|[1-9][0-9]*)?\.[0-9]+ {return L_DOUBLE; }
[+-]?(0|[1-9][0-9]*)?\.[0-9]+[fF] {return L_FLOAT; }
[/]"*" {BEGIN(COMMENT); }
<COMMENT>"*/" {BEGIN(INITIAL); }
<COMMENT>. {}
\" {BEGIN(STRING); literal = ""; }
<STRING>\" {yylval.str = literal;BEGIN(INITIAL);return L_STRING; }
<STRING>[/][/][^$]* {}
<STRING>. {literal += yytext; }
. { printf("caractere invalido [%s] \n", yytext); return 0; }

%%
  extern FILE *yyin;
  int main (int argc, char* argv[]) {
    int token = -1;
    if (argc <2){
      printf("Exemplo: %s [arquivo_entradas]",argv[0]);
      return 1;
    }
    yyin = fopen(argv[1], "r");
    while(token = yylex()) {
       printf("Token = %d\n", token);
     }
     return 0;
  }