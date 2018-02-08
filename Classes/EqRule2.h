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
		EqRule2( Eq* eq,Factor* factor):Eq(),eq_(eq),factor_(factor){}
		virtual ~EqRule2()
		{
			delete eq_;
			delete factor_;
		}
		EqRule2(const EqRule2& eqrule2):Eq(eqrule2),eq_(eqrule2.eq_),factor_(eqrule2.factor_){}//olá
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		Eq* eq()
		{
			return eq_;
		}
		void set_factor(Factor* factor)
		{
			factor_ = factor;
		}
		Factor* factor()
		{
			return factor_;
		}
		void accept(Visitor *v);
};
#endif