#ifndef BINARYCOMPOPERATORRULE4_H
#define BINARYCOMPOPERATORRULE4_H

#include "BinaryCompOperator.h"
#include <string>

class BinaryCompOperatorRule4 : public BinaryCompOperator
{
	private:
	public:
		BinaryCompOperatorRule4(){}
		BinaryCompOperatorRule4():BinaryCompOperator(){}
		virtual ~BinaryCompOperatorRule4()
		{
		}
		BinaryCompOperatorRule4(const BinaryCompOperatorRule4& binarycompoperatorrule4):BinaryCompOperator(binarycompoperatorrule4){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif