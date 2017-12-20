#ifndef CONDICTION_H
#define CONDICTION_H

#include "Node.h"

class Condiction : public Node
{
	private:
	public:
		Condiction():Node(){};
		virtual ~Condiction(){};
		Condiction(const Condiction& condiction):Condiction(){};
};
#endif