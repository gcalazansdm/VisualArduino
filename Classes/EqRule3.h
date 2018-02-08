#ifndef EQRULE3_H
#define EQRULE3_H

#include "Eq.h"
#include "Factor.h"

class EqRule3 : public Eq
{
	private:
		Factor* factor_;
	public:
		EqRule3( Factor* factor):Eq(),factor_(factor){}
		virtual ~EqRule3()
		{
			delete factor_;
		}
		EqRule3(const EqRule3& eqrule3):Eq(eqrule3),factor_(eqrule3.factor_){}//olá
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