#include "BinaryCompOperatorRule1.h"
#include "Visitor.h"

void BinaryCompOperatorRule1::accept(Visitor *v) {
	v->visit(this);
};
