#ifndef COMMAND_H
#define COMMAND_H

#include "Node.h"

class Command : public Node
{
	private:
	public:
		Command():Node(){}
		virtual ~Command(){}
		Command(const Command& command):Command(){}
}
#endif