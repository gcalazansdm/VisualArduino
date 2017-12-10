#ifndef ELEMRULE2_H
#define ELEMRULE2_H

#include "Elem.h"
#include "Elem.h"

class ElemRule2 : public Elem
{
	private:
		Elem* elem_;
	public:
		ElemRule2(){}
		ElemRule2( Elem* elem):Elem(),elem_(elem){}
		virtual ~ElemRule2()
		{
			delete elem;
		}
		ElemRule2(const ElemRule2& elemrule2):Elem(elemrule2),elem_(elem->elem_){}
		void set_elem(Elem* elem)
		{
			elem_ = elem;
		}
		const Elem elem const ()
		{
			return elem_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif