#ifndef PINMODECLAUSE_H
#define PINMODECLAUSE_H

#include "Node.h"

class PinModeClause : public Node
{
	private:
	public:
		PinModeClause():Node(){};
		virtual ~PinModeClause(){};
		PinModeClause(const PinModeClause& pinmodeclause):PinModeClause(){};
};
#endif