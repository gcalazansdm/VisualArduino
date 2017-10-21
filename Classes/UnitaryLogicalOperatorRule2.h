#ifndef UNITARYLOGICALOPERATORRULE2_H
#define UNITARYLOGICALOPERATORRULE2_H

#include "UnitaryLogicalOperator.h"
#include "Eq.h"
#include "Factor.h"

class UnitaryLogicalOperatorRule2 : public UnitaryLogicalOperator
{
	private:
		Eq* eq_;
		Const char op_sub_= '-';
		Factor* factor_;
	public:
		UnitaryLogicalOperatorRule2(){}
		UnitaryLogicalOperatorRule2( Eq* eq,Factor* factor):UnitaryLogicalOperator(),eq_(eq),factor_(factor){}
		virtual ~UnitaryLogicalOperatorRule2()
		{
			delete eq;
			delete factor;
		}
		UnitaryLogicalOperatorRule2(const UnitaryLogicalOperatorRule2& unitarylogicaloperator):UnitaryLogicalOperator(unitarylogicaloperator),eq_(unitarylogicaloperator->eq_),factor_(unitarylogicaloperator->factor_){}
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		const Eq eq const ()
		{
			return eq_;
		}
		char op_sub const ()
		{
			return op_sub_;
		}
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