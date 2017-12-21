#include "OperationRule1.h"
#include "Visitor.h"

void OperationRule1::accept(Visitor *v) {
	v->visit(this);
};
