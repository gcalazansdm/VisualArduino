#ifndef VALUES_H
#define VALUES_H

#include "Node.h"

class Values : public Node
{
	private:
	public:
		Values():Node(){};
		virtual ~Values(){};
		Values(const Values& values):Values(){};
};
#endif