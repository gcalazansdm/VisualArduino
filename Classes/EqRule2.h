#ifndef EQRULE2_H
#define EQRULE2_H

#include "Eq.h"
#include "Eq.h"
#include "Factor.h"

class EqRule2 : public Eq
{
	private:
		Eq* eq_;
		Factor* factor_;
	public:
		EqRule2(){};
		EqRule2( Eq* eq,Factor* factor):Eq(),eq_(eq),factor_(factor){};
		virtual ~EqRule2()
		{
			delete eq;
			delete factor;
		};
		EqRule2(const EqRule2& eqrule2):Eq(eqrule2),eq_(eq->eq_),factor_(eq->factor_){};
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		};
		const Eq eq const ()
		{
			return eq_;
		};
		void set_factor(Factor* factor)
		{
			factor_ = factor;
		};
		const Factor factor const ()
		{
			return factor_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif