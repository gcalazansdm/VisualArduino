#ifndef ELEMRULE1_H
#define ELEMRULE1_H

#include "Elem.h"
#include "Elem.h"

class ElemRule1 : public Elem
{
	private:
		Const char op_sum_= '+';
		Elem* elem_;
	public:
		ElemRule1(){}
		ElemRule1( Elem* elem):Elem(),elem_(elem){}
		virtual ~ElemRule1()
		{
			delete elem;
		}
		ElemRule1(const ElemRule1& elem):Elem(elem),elem_(elem->elem_){}
		char op_sum const ()
		{
			return op_sum_;
		}
		void set_elem(Elem* elem)
		{
			elem_ = elem;
		}
		const Elem elem const ()
		{
			return elem_;
		}
}
#endif