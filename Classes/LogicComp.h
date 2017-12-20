#ifndef LOGICCOMP_H
#define LOGICCOMP_H

#include "Node.h"

class LogicComp : public Node
{
	private:
	public:
		LogicComp():Node(){};
		virtual ~LogicComp(){};
		LogicComp(const LogicComp& logiccomp):LogicComp(){};
};
#endif