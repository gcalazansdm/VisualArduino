#ifndef BINARYCOMPOPERATORRULE3_H
#define BINARYCOMPOPERATORRULE3_H

#include "BinaryCompOperator.h"

class BinaryCompOperatorRule3 : public BinaryCompOperator
{
	private:
	public:
		BinaryCompOperatorRule3( ):BinaryCompOperator(){}
		virtual ~BinaryCompOperatorRule3()
		{
		}
		BinaryCompOperatorRule3(const BinaryCompOperatorRule3& binarycompoperatorrule3):BinaryCompOperator(binarycompoperatorrule3){}//ol�
		void accept(Visitor *v);
};
#endif