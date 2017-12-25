#include "OperationRule2.h"
#include "Visitor.h"

void OperationRule2::accept(Visitor *v) {
	v->visit(this);
};
