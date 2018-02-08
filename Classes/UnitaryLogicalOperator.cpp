#include "UnitaryLogicalOperator.h"
#include "Visitor.h"

void UnitaryLogicalOperator::accept(Visitor *v) {
	v->visit(this);
};
