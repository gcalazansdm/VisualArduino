#ifndef BINARYCOMPOPERATOR_H
#define BINARYCOMPOPERATOR_H

#include "Node.h"

class BinaryCompOperator : public Node
{
	private:
	public:
		BinaryCompOperator():Node(){}
		virtual ~BinaryCompOperator(){}
		BinaryCompOperator(const BinaryCompOperator& binarycompoperator):BinaryCompOperator(){}
}
#endif