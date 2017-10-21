#ifndef BINARYLOGICALOPERATORRULE2_H
#define BINARYLOGICALOPERATORRULE2_H

#include "BinaryLogicalOperator.h"
#include <string>

class BinaryLogicalOperatorRule2 : public BinaryLogicalOperator
{
	private:
		Const std::string op_bool_or_= "ou";
	public:
		BinaryLogicalOperatorRule2(){}
		BinaryLogicalOperatorRule2():BinaryLogicalOperator(){}
		virtual ~BinaryLogicalOperatorRule2()
		{
		}
		BinaryLogicalOperatorRule2(const BinaryLogicalOperatorRule2& binarylogicaloperator):BinaryLogicalOperator(binarylogicaloperator){}
		std::string op_bool_or const ()
		{
			return op_bool_or_;
		}
}
#endif