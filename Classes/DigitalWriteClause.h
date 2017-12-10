#ifndef DIGITALWRITECLAUSE_H
#define DIGITALWRITECLAUSE_H

#include "Node.h"

class DigitalWriteClause : public Node
{
	private:
	public:
		DigitalWriteClause():Node(){}
		virtual ~DigitalWriteClause(){}
		DigitalWriteClause(const DigitalWriteClause& digitalwriteclause):DigitalWriteClause(){}
}
#endif