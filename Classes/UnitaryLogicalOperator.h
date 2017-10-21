#ifndef UNITARYLOGICALOPERATOR_H
#define UNITARYLOGICALOPERATOR_H

#include "Node.h"

class UnitaryLogicalOperator : public Node
{
	private:
		Const std::string op_bool_not_= "nao";
	public:
		UnitaryLogicalOperator(){}
		UnitaryLogicalOperator(){}
		virtual ~UnitaryLogicalOperatorRule1()
		{
		}
		UnitaryLogicalOperator(const UnitaryLogicalOperator& unitarylogicaloperator):UnitaryLogicalOperator(){}
		std::string op_bool_not const ()
		{
			return op_bool_not_;
		}
}
#endif