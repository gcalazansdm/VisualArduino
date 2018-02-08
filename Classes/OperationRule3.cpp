#include "OperationRule3.h"
#include "Visitor.h"

void OperationRule3::accept(Visitor *v) {
	v->visit(this);
};
