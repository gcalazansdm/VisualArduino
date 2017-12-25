#include "BinaryCompOperatorRule4.h"
#include "Visitor.h"

void BinaryCompOperatorRule4::accept(Visitor *v) {
	v->visit(this);
};
