#ifndef FACTORRULE1_H
#define FACTORRULE1_H

#include "Factor.h"
#include "Factor.h"
#include "Elem.h"

class FactorRule1 : public Factor
{
	private:
		Factor* factor_;
		Elem* elem_;
	public:
		FactorRule1( Factor* factor,Elem* elem):Factor(),factor_(factor),elem_(elem){};
		virtual ~FactorRule1()
		{
			delete factor;
			delete elem;
		};
		FactorRule1(const FactorRule1& factorrule1):Factor(factorrule1),factor_(factorrule1.factor()),elem_(factorrule1.elem()){};//olá
		void set_factor(Factor* factor)
		{
			factor_ = factor;
		};
		const Factor* const factor()
		{
			return factor_;
		};
		void set_elem(Elem* elem)
		{
			elem_ = elem;
		};
		const Elem* const elem()
		{
			return elem_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif