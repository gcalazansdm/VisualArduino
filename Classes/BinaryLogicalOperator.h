#ifndef BINARYLOGICALOPERATOR_H
#define BINARYLOGICALOPERATOR_H

#include "Node.h"

class BinaryLogicalOperator : public Node
{
	private:
	public:
		BinaryLogicalOperator():Node(){}
		virtual ~BinaryLogicalOperator(){}
		BinaryLogicalOperator(const BinaryLogicalOperator& binarylogicaloperator):BinaryLogicalOperator(){}
}
#endif