#include "BinaryLogicalOperatorRule1.h"
#include "Visitor.h"

void BinaryLogicalOperatorRule1::accept(Visitor *v) {
	v->visit(this);
};
