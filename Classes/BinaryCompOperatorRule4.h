#ifndef BINARYCOMPOPERATORRULE4_H
#define BINARYCOMPOPERATORRULE4_H

#include "BinaryCompOperator.h"
#include <string>

class BinaryCompOperatorRule4 : public BinaryCompOperator
{
	private:
		Const std::string op_bool_eqless_= "<=";
	public:
		BinaryCompOperatorRule4(){}
		BinaryCompOperatorRule4():BinaryCompOperator(){}
		virtual ~BinaryCompOperatorRule4()
		{
		}
		BinaryCompOperatorRule4(const BinaryCompOperatorRule4& binarycompoperator):BinaryCompOperator(binarycompoperator){}
		std::string op_bool_eqless const ()
		{
			return op_bool_eqless_;
		}
}
#endif