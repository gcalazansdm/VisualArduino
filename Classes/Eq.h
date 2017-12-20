#ifndef EQ_H
#define EQ_H

#include "Node.h"

class Eq : public Node
{
	private:
	public:
		Eq():Node(){};
		virtual ~Eq(){};
		Eq(const Eq& eq):Eq(){};
};
#endif