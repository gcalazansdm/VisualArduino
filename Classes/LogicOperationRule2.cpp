#include "LogicOperationRule2.h"
#include "Visitor.h"

void LogicOperationRule2::accept(Visitor *v) {
	v->visit(this);
};
