#include "BinaryCompOperatorRule3.h"
#include "Visitor.h"

void BinaryCompOperatorRule3::accept(Visitor *v) {
	v->visit(this);
};
