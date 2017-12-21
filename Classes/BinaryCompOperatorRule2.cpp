#include "BinaryCompOperatorRule2.h"
#include "Visitor.h"

void BinaryCompOperatorRule2::accept(Visitor *v) {
	v->visit(this);
};
