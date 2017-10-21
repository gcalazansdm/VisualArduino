#ifndef BINARYCOMPOPERATORRULE1_H
#define BINARYCOMPOPERATORRULE1_H

#include "BinaryCompOperator.h"

class BinaryCompOperatorRule1 : public BinaryCompOperator
{
	private:
		Const char op_bool_gre_= '>';
	public:
		BinaryCompOperatorRule1(){}
		BinaryCompOperatorRule1( ):BinaryCompOperator(){}
		virtual ~BinaryCompOperatorRule1()
		{
		}
		BinaryCompOperatorRule1(const BinaryCompOperatorRule1& binarycompoperator):BinaryCompOperator(binarycompoperator){}
		char op_bool_gre const ()
		{
			return op_bool_gre_;
		}
}
#endif