#ifndef EQRULE1_H
#define EQRULE1_H

#include "Eq.h"
#include "Eq.h"
#include "Factor.h"

class EqRule1 : public Eq
{
	private:
		Eq* eq_;
		Factor* factor_;
	public:
		EqRule1( Eq* eq,Factor* factor):Eq(),eq_(eq),factor_(factor){};
		virtual ~EqRule1()
		{
			delete eq;
			delete factor;
		};
		EqRule1(const EqRule1& eqrule1):Eq(eqrule1),eq_(eqrule1.eq()),factor_(eqrule1.factor()){};//olá
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		};
		const Eq* const eq()
		{
			return eq_;
		};
		void set_factor(Factor* factor)
		{
			factor_ = factor;
		};
		const Factor* const factor()
		{
			return factor_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif