#include "ParameterRule2.h"
#include "Visitor.h"

void ParameterRule2::accept(Visitor *v) {
	v->visit(this);
};
