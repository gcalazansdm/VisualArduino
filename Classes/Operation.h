#ifndef OPERATION_H
#define OPERATION_H

#include "Node.h"

class Operation : public Node
{
	private:
	public:
		Operation():Node(){}
		virtual ~Operation(){}
		Operation(const Operation& operation):Operation(){}
}
#endif