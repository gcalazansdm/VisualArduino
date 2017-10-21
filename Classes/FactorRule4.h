#ifndef FACTORRULE4_H
#define FACTORRULE4_H

#include "Factor.h"
#include "Elem.h"

class FactorRule4 : public Factor
{
	private:
		Const char op_sub_= '-';
		Elem* elem_;
	public:
		FactorRule4(){}
		FactorRule4( Elem* elem):Factor(),elem_(elem){}
		virtual ~FactorRule4()
		{
			delete elem;
		}
		FactorRule4(const FactorRule4& factor):Factor(factor),elem_(factor->elem_){}
		char op_sub const ()
		{
			return op_sub_;
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