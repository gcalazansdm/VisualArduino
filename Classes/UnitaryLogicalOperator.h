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
		UnitaryLogicalOperator(const UnitaryLogicalOperator& unitarylogicaloperator):Node(unitarylogicaloperator){}//ol�
		void accept(Visitor *v);
};
#endif