#ifndef BODY_H
#define BODY_H

#include "Node.h"

class Body : public Node
{
	private:
	public:
		Body():Node(){};
		virtual ~Body(){};
		Body(const Body& body):Body(){};
};
#endif