#ifndef BINARYLOGICALOPERATORRULE2_H
#define BINARYLOGICALOPERATORRULE2_H

#include "BinaryLogicalOperator.h"
#include <string>

class BinaryLogicalOperatorRule2 : public BinaryLogicalOperator
{
	private:
	public:
		BinaryLogicalOperatorRule2():BinaryLogicalOperator(){};
		virtual ~BinaryLogicalOperatorRule2()
		{
		};
		BinaryLogicalOperatorRule2(const BinaryLogicalOperatorRule2& binarylogicaloperatorrule2):BinaryLogicalOperator(binarylogicaloperatorrule2){};//olá
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif