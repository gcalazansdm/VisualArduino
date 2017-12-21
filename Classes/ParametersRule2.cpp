#include "ParametersRule2.h"
#include "Visitor.h"

void ParametersRule2::accept(Visitor *v) {
	v->visit(this);
};
