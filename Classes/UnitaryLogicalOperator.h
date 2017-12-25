#ifndef UNITARYLOGICALOPERATOR_H
#define UNITARYLOGICALOPERATOR_H

#include "Node.h"

class UnitaryLogicalOperator : public Node
{
	private:
	public:
		UnitaryLogicalOperator( ):Node(){}
		virtual ~UnitaryLogicalOperator()
		{
		}
		UnitaryLogicalOperator(const UnitaryLogicalOperator& unitarylogicaloperator):Node(unitarylogicaloperator){}//olá
		void accept(Visitor *v);
};
#endif