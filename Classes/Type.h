#ifndef TYPE_H
#define TYPE_H

#define L_INT      1
#define L_FLOAT    2
#define L_DOUBLE   3
#define L_CHAR     4
#define L_STRING   5
#define L_BOOL     6
#define L_ID       7

class Tipo {
	private:
		int tipo_;
	public:
		Tipo(){};
		Tipo(int tipo):tipo_(tipo){};
		virtual ~Tipo(){};
		int compatible(Tipo* t);
		const int tipo(){
			return tipo_;
		};
		Tipo(const Tipo& type):tipo_(type.tipo_){}
};
#endif