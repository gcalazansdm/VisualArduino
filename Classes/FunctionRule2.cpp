#include "FunctionRule2.h"
#include "Visitor.h"

void FunctionRule2::accept(Visitor *v) {
	v->visit(this);
};
