#ifndef UNITARYLOGICALOPERATORRULE1_H
#define UNITARYLOGICALOPERATORRULE1_H

#include "UnitaryLogicalOperator.h"
#include <string>

class UnitaryLogicalOperatorRule1 : public UnitaryLogicalOperator
{
	private:
		Const std::string op_bool_not_= "nao";
	public:
		UnitaryLogicalOperatorRule1(){}
		UnitaryLogicalOperatorRule1():UnitaryLogicalOperator(){}
		virtual ~UnitaryLogicalOperatorRule1()
		{
		}
		UnitaryLogicalOperatorRule1(const UnitaryLogicalOperatorRule1& unitarylogicaloperator):UnitaryLogicalOperator(unitarylogicaloperator){}
		std::string op_bool_not const ()
		{
			return op_bool_not_;
		}
}
#endif