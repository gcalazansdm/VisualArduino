#ifndef BINARYCOMPOPERATORRULE2_H
#define BINARYCOMPOPERATORRULE2_H

#include "BinaryCompOperator.h"

class BinaryCompOperatorRule2 : public BinaryCompOperator
{
	private:
		Const char op_bool_less_= '<';
	public:
		BinaryCompOperatorRule2(){}
		BinaryCompOperatorRule2( ):BinaryCompOperator(){}
		virtual ~BinaryCompOperatorRule2()
		{
		}
		BinaryCompOperatorRule2(const BinaryCompOperatorRule2& binarycompoperatorrule2):BinaryCompOperator(binarycompoperatorrule2){}
		char op_bool_less const ()
		{
			return op_bool_less_;
		}
}
#endif