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
		T_BOOL,
		T_INT,
		T_DOUBLE,
		T_FUNC,
		T_CHAR,
		T_STRING,
		T_WHI,
		T_IF,
		T_ELSE,
		T_IFELSE,
		T_FLOAT,
		T_FOR,
		OP_EQ,
		OP_BOOL_IS,
		OP_BOOL_DIFF,
		OP_BOOL_GRE,
		OP_BOOL_EQGRE,
		OP_BOOL_LESS,
		OP_BOOL_EQLESS,
		OP_BOOL_AND,
		OP_BOOL_OR,
		OP_BOOL_NOT,
		OP_SUM,
		OP_SUB,
		OP_DIV,
		OP_MUL,
		OP_POW,
		A_LPAR,
		A_RPAR,
		A_SEMICOLON
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
"(" { return A_RPAR;}
")" { return A_LPAR;}
"=" { return OP_EQ; }
"==" {return OP_BOOL_IS;}
"!=" {return OP_BOOL_DIFF;}
">" {return OP_BOOL_GRE;}
">=" {return OP_BOOL_LESS;}
"<" {return OP_BOOL_IS;}
"<=" {return OP_BOOL_EQLESS;}
"e" {return OP_BOOL_AND;}
"ou" {return OP_BOOL_OR;}
"nao" {return OP_BOOL_NOT;}
"se" { return T_IF;}
"se nao mas" { return T_IFELSE;}
"entao" { return T_ELSE;}
"real" { return T_DOUBLE;}
"funcao" { return T_FUNC;}
"inteiro" { return T_INT;}
"logico" {return T_BOOL;}
"caractere" {return T_CHAR;}
"texto" {return T_STRING;}
"enquanto" { return T_WHI;}
"flutuante" { return T_FLOAT;}
"para" { return T_FOR;}
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
";" {return A_SEMICOLON;}
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

//$> flex -o analise_lexico.c Compilers.l
//gcc -o teste analise_lexico.c