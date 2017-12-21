#include "LogicOperationRule1.h"
#include "Visitor.h"

void LogicOperationRule1::accept(Visitor *v) {
	v->visit(this);
};
