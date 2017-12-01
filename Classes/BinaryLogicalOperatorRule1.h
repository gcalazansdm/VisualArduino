#ifndef BINARYLOGICALOPERATORRULE1_H
#define BINARYLOGICALOPERATORRULE1_H

#include "BinaryLogicalOperator.h"
#include <string>

class BinaryLogicalOperatorRule1 : public BinaryLogicalOperator
{
	private:
	public:
		BinaryLogicalOperatorRule1(){}
		BinaryLogicalOperatorRule1():BinaryLogicalOperator(){}
		virtual ~BinaryLogicalOperatorRule1()
		{
		}
		BinaryLogicalOperatorRule1(const BinaryLogicalOperatorRule1& binarylogicaloperatorrule1):BinaryLogicalOperator(binarylogicaloperatorrule1){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif