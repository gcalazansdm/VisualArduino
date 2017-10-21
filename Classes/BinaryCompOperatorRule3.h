#ifndef BINARYCOMPOPERATORRULE3_H
#define BINARYCOMPOPERATORRULE3_H

#include "BinaryCompOperator.h"
#include <string>

class BinaryCompOperatorRule3 : public BinaryCompOperator
{
	private:
		Const std::string op_bool_eqgre_= ">=";
	public:
		BinaryCompOperatorRule3(){}
		BinaryCompOperatorRule3():BinaryCompOperator(){}
		virtual ~BinaryCompOperatorRule3()
		{
		}
		BinaryCompOperatorRule3(const BinaryCompOperatorRule3& binarycompoperator):BinaryCompOperator(binarycompoperator){}
		std::string op_bool_eqgre const ()
		{
			return op_bool_eqgre_;
		}
}
#endif