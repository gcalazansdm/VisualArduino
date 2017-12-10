#ifndef BINARYCOMPOPERATORRULE1_H
#define BINARYCOMPOPERATORRULE1_H

#include "BinaryCompOperator.h"

class BinaryCompOperatorRule1 : public BinaryCompOperator
{
	private:
	public:
		BinaryCompOperatorRule1(){}
		BinaryCompOperatorRule1( ):BinaryCompOperator(){}
		virtual ~BinaryCompOperatorRule1()
		{
		}
		BinaryCompOperatorRule1(const BinaryCompOperatorRule1& binarycompoperatorrule1):BinaryCompOperator(binarycompoperatorrule1){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif