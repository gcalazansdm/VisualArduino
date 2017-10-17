%{
	enum Tokens{
		L_INT = 1,
		L_DOUBLE,
		L_FLOAT,
		T_INT,
		T_DOUBLE,
		T_FUNC,
		T_VAR,
		T_WHI,
		T_IF,
		T_FLOAT,
		T_FOR,
		OP_SUM,
		OP_SUB,
		OP_DIV,
		OP_MUL,
		OP_POW,
		A_LPAR,
		A_RPAR
	};
%}
%option nodefault noyywrap	
%%

"+" { return OP_SUM;       }
"-" { return OP_SUB;       }
"*" { return OP_MUL;       }
"/" { return OP_DIV;       }
"^" { return OP_POT;       }
"(" { return A_RPAR;       }
")" { return A_LPAR;       }
"se" { return T_IF;        }
"variavel" { return T_VAR; }
"real" { return T_DOUBLE;  }
"funcao" { return T_FUNC;  }
"inteiro" { return T_INT;  }
"enquanto" { return T_WHI; 	}
"flutuante" { return T_FLOAT; }
"para" { return T_FOR; }
[\r\n ] {}
(0|[1-9][0-9]*) { printf("[%s]", yytext); return L_INT; }
(0|[1-9][0-9]*)?\.[0-9]+ { printf("[%s]", yytext); return L_DOUBLE; }
(0|[1-9][0-9]*)?\.[0-9]+[fF] { printf("[%s]", yytext); return L_FLOAT; }
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