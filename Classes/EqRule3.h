#ifndef EQRULE3_H
#define EQRULE3_H

#include "Eq.h"
#include "Factor.h"

class EqRule3 : public Eq
{
	private:
		Factor* factor_;
	public:
		EqRule3(){}
		EqRule3( Factor* factor):Eq(),factor_(factor){}
		virtual ~EqRule3()
		{
			delete factor;
		}
		EqRule3(const EqRule3& eq):Eq(eq),factor_(eq->factor_){}
		void set_factor(Factor* factor)
		{
			factor_ = factor;
		}
		const Factor factor const ()
		{
			return factor_;
		}
}
#endif