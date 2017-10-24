#ifndef UNITARYLOGICALOPERATOR_H
#define UNITARYLOGICALOPERATOR_H

#include "Node.h"
#include <string>

class UnitaryLogicalOperator : public Node
{
	private:
		Const std::string op_bool_not_= "nao";
	public:
		UnitaryLogicalOperator(){}
		UnitaryLogicalOperator():Node(){}
		virtual ~UnitaryLogicalOperator()
		{
		}
		UnitaryLogicalOperator(const UnitaryLogicalOperator& unitarylogicaloperator):Node(unitarylogicaloperator){}
		std::string op_bool_not const ()
		{
			return op_bool_not_;
		}
}
#endif