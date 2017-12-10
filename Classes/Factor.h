#ifndef FACTOR_H
#define FACTOR_H

#include "Node.h"

class Factor : public Node
{
	private:
	public:
		Factor():Node(){}
		virtual ~Factor(){}
		Factor(const Factor& factor):Factor(){}
}
#endif