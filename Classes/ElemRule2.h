#ifndef ELEMRULE2_H
#define ELEMRULE2_H

#include "Elem.h"
#include "Elem.h"

class ElemRule2 : public Elem
{
	private:
		Elem* elem_;
	public:
		ElemRule2( Elem* elem):Elem(),elem_(elem){}
		virtual ~ElemRule2()
		{
			delete elem_;
		}
		ElemRule2(const ElemRule2& elemrule2):Elem(elemrule2),elem_(elemrule2.elem_){}//olá
		void set_elem(Elem* elem)
		{
			elem_ = elem;
		}
		const Elem* const elem()
		{
			return elem_;
		}
		void accept(Visitor *v);
};
#endif