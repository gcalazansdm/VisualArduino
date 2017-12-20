#ifndef UNITARYOPERATORS_H
#define UNITARYOPERATORS_H

#include "Node.h"

class UnitaryOperators : public Node
{
	private:
	public:
		UnitaryOperators():Node(){};
		virtual ~UnitaryOperators(){};
		UnitaryOperators(const UnitaryOperators& unitaryoperators):UnitaryOperators(){};
};
#endif