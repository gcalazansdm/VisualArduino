#ifndef FACTORRULE2_H
#define FACTORRULE2_H

#include "Factor.h"
#include "Factor.h"
#include "Elem.h"

class FactorRule2 : public Factor
{
	private:
		Factor* factor_;
		Elem* elem_;
	public:
		FactorRule2( Factor* factor,Elem* elem):Factor(),factor_(factor),elem_(elem){}
		virtual ~FactorRule2()
		{
			delete factor_;
			delete elem_;
		}
		FactorRule2(const FactorRule2& factorrule2):Factor(factorrule2),factor_(factorrule2.factor_),elem_(factorrule2.elem_){}//ol�
		void set_factor(Factor* factor)
		{
			factor_ = factor;
		}
		Factor* factor()
		{
			return factor_;
		}
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