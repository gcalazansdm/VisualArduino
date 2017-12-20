#ifndef BINARYCOMPOPERATORRULE2_H
#define BINARYCOMPOPERATORRULE2_H

#include "BinaryCompOperator.h"

class BinaryCompOperatorRule2 : public BinaryCompOperator
{
	private:
	public:
		BinaryCompOperatorRule2(){};
		BinaryCompOperatorRule2( ):BinaryCompOperator(){};
		virtual ~BinaryCompOperatorRule2()
		{
		};
		BinaryCompOperatorRule2(const BinaryCompOperatorRule2& binarycompoperatorrule2):BinaryCompOperator(binarycompoperatorrule2){};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif