#ifndef FACTORRULE2_H
#define FACTORRULE2_H

#include "Factor.h"
#include "Factor.h"
#include "Elem.h"

class FactorRule2 : public Factor
{
	private:
		Factor* factor_;
		Const char op_mul_= '*';
		Elem* elem_;
	public:
		FactorRule2(){}
		FactorRule2( Factor* factor,Elem* elem):Factor(),factor_(factor),elem_(elem){}
		virtual ~FactorRule2()
		{
			delete factor;
			delete elem;
		}
		FactorRule2(const FactorRule2& factorrule2):Factor(factorrule2),factor_(factor->factor_),elem_(factor->elem_){}
		void set_factor(Factor* factor)
		{
			factor_ = factor;
		}
		const Factor factor const ()
		{
			return factor_;
		}
		char op_mul const ()
		{
			return op_mul_;
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