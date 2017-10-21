#ifndef LOGICOPERATION_H
#define LOGICOPERATION_H

#include "Node.h"

class LogicOperation : public Node
{
	private:
	public:
		LogicOperation():Node(){}
		virtual ~LogicOperation(){}
		LogicOperation(const LogicOperation& logicoperation):LogicOperation(){}
}
#endif