#ifndef ELEMRULE1_H
#define ELEMRULE1_H

#include "Elem.h"
#include "Elem.h"

class ElemRule1 : public Elem
{
	private:
		Elem* elem_;
	public:
		ElemRule1( Elem* elem):Elem(),elem_(elem){}
		virtual ~ElemRule1()
		{
			delete elem_;
		}
		ElemRule1(const ElemRule1& elemrule1):Elem(elemrule1),elem_(elemrule1.elem_){}//olá
		void set_elem(Elem* elem)
		{
			elem_ = elem;
		}
		Elem* elem()
		{
			return elem_;
		}
		void accept(Visitor *v);
};
#endif