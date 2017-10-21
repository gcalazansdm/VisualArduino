#ifndef UNITARYLOGICALOPERATORRULE3_H
#define UNITARYLOGICALOPERATORRULE3_H

#include "UnitaryLogicalOperator.h"
#include "Factor.h"

class UnitaryLogicalOperatorRule3 : public UnitaryLogicalOperator
{
	private:
		Factor* factor_;
	public:
		UnitaryLogicalOperatorRule3(){}
		UnitaryLogicalOperatorRule3( Factor* factor):UnitaryLogicalOperator(),factor_(factor){}
		virtual ~UnitaryLogicalOperatorRule3()
		{
			delete factor;
		}
		UnitaryLogicalOperatorRule3(const UnitaryLogicalOperatorRule3& unitarylogicaloperator):UnitaryLogicalOperator(unitarylogicaloperator),factor_(unitarylogicaloperator->factor_){}
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