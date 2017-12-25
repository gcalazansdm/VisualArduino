#include "FunctionRule1.h"
#include "Visitor.h"

void FunctionRule1::accept(Visitor *v) {
	v->visit(this);
};
