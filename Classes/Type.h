#ifndef TYPE_H
#define TYPE_H

#define L_INT      1
#define L_FLOAT    2
#define L_DOUBLE   3
#define L_CHAR     4
#define L_STRING   5
#define L_BOOL     6
#define L_ID       7

class Type
{
	private:
		int tipo_;
	public:
		Type(){}
		Type(int tipo):Type(),tipo_ = tipo{}
		virtual ~Type()
		{
		}
		int compatible(Type t);
		const int tipo(){
			return tipo_
		}
		Type(const Type& type):Type(Type){}
};
#endif