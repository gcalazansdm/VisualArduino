#include "ParametersRule1.h"
#include "Visitor.h"

void ParametersRule1::accept(Visitor *v) {
	v->visit(this);
};
