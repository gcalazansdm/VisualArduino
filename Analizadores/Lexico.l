%{
   #include<string>
	enum Tokens{
		L_INT = 1,
		L_DOUBLE,
		L_FLOAT,
		L_CHAR,
		L_STRING,
		L_BOOL,
		L_ID,
		T_INT,
		T_DOUBLE,
		T_FLOAT,
		T_CHAR,
		T_STRING,
		T_BOOL,
		T_FUNC,
		T_IF,
		T_ELSE,
		T_IFELSE,
		T_WHI,
		T_FOR,
		OP_SUM,
		OP_SUB,
		OP_MUL,
		OP_DIV,
		OP_POT,
		OP_EQ,
		OP_BOOL_EQUAL,
		OP_BOOL_DIF,
		OP_BOOL_GRE,
		OP_BOOL_LESS,
		OP_BOOL_EQGRE,
		OP_BOOL_EQLESS,
		OP_BOOL_AND,
		OP_BOOL_OR,
		OP_BOOL_NOT,
		A_SEMICOLON,
		A_RPAR,
		A_LPAR,
	};
   string literal;
%}
%option nodefault noyywrap	
%x STRING
%x COMMENT
%%
"+" { return OP_SUM;}
"-" { return OP_SUB;}
"*" { return OP_MUL;}
"/" { return OP_DIV;}
"^" { return OP_POT;}
\( { return A_RPAR;}
\) { return A_LPAR;}
"=" { return OP_EQ; }
"==" {return OP_BOOL_EQUAL;}
"!=" {return OP_BOOL_DIF;}
">" {return OP_BOOL_GRE;}
"<" {return OP_BOOL_LESS;}
">=" {return OP_BOOL_EQGRE;}
"<=" {return OP_BOOL_EQLESS;}
"e" {return OP_BOOL_AND;}
"ou" {return OP_BOOL_OR;}
"nao" {return OP_BOOL_NOT;}
"inteiro" { return T_INT;}
"real" { return T_DOUBLE;}
"flutuante" { return T_FLOAT;}
"caractere" {return T_CHAR;}
"texto" {return T_STRING;}
"logico" {return T_BOOL;}
"funcao" { return T_FUNC;}
"se" { return T_IF;}
"entao" { return T_ELSE;}
"se nao mas" { return T_IFELSE;}
"enquanto" { return T_WHI;}
"para" { return T_FOR;}
";" {return A_SEMICOLON;}
[A-Za-z][A-Za-z0-9_-] {return L_ID}
[\r\n ] {}
"\\"[.]* {}
[']([.^"]|"\\\"")['] { printf("[%s]", yytext); return L_CHAR}
(0|[+-]?[1-9][0-9]*) { printf("[%s]", yytext); return L_INT;}
[+-]?(0|[1-9][0-9]*)?\.[0-9]+ { printf("[%s]", yytext); return L_DOUBLE;}
[+-]?(0|[1-9][0-9]*)?\.[0-9]+[fF] { printf("[%s]", yytext); return L_FLOAT;}
\" {BEGIN(STRING); literal = "";}
<STRING> \t {literal += '\t';}
<STRING> \n {literal += '\n';}
<STRING> \b {literal += '\b';}
<STRING> \a {literal += '\a';}
<STRING> \" {BEGIN(INITIAL);yylval.str = literal;return L_STRING;}
<STRING> . {literal += yytext}
"\*" {BEGIN(COMMENT);}
<COMMENT> "*\" {BEGIN(INITIAL);}
<COMMENT> . {}
. { printf("caractere invalido [%s] \n", yytext); return 0;}

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