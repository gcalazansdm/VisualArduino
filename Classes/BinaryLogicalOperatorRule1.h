#ifndef BINARYLOGICALOPERATORRULE1_H
#define BINARYLOGICALOPERATORRULE1_H

#include "BinaryLogicalOperator.h"
#include <string>

class BinaryLogicalOperatorRule1 : public BinaryLogicalOperator
{
	private:
		Const std::string op_bool_and_= "e";
	public:
		BinaryLogicalOperatorRule1(){}
		BinaryLogicalOperatorRule1():BinaryLogicalOperator(){}
		virtual ~BinaryLogicalOperatorRule1()
		{
		}
		BinaryLogicalOperatorRule1(const BinaryLogicalOperatorRule1& binarylogicaloperator):BinaryLogicalOperator(binarylogicaloperator){}
		std::string op_bool_and const ()
		{
			return op_bool_and_;
		}
}
#endif