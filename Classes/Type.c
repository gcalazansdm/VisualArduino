#include "Type.h"

int compatible(Type* t){
	int a = 0;
	int b = 0;
	int c = 0;
	switch(t->tipo()):
		case L_CHAR:
		--a;
		case L_INT:
		--a;
		case L_FLOAT:
		--a;
		case L_DOUBLE:
		a += 3;
		break;
		case L_BOOL:
		a = -8;
		break;
		case L_STRING:
		b=1;
		break;
		default:
			return -2;

	switch(tipo()):
		case L_CHAR:
		--c;
		case L_INT:
		--c;
		case L_FLOAT:
		--c;
		case L_DOUBLE:
		c += 3;
		return a*c/abs(a*c)
		break;
		case L_BOOL:
		c = -8;
		return a*c/abs(a*c)
		break;
		case L_STRING:
		if(b== 1){
			return 1;
		}
		break;
		default:
			return -2;

}