#include "BinaryLogicalOperatorRule2.h"
#include "Visitor.h"

void BinaryLogicalOperatorRule2::accept(Visitor *v) {
	v->visit(this);
};
