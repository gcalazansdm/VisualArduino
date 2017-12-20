#ifndef FUNCTION_H
#define FUNCTION_H

#include "Node.h"

class Function : public Node
{
	private:
	public:
		Function():Node(){};
		virtual ~Function(){};
		Function(const Function& function):Function(){};
};
#endif