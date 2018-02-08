#include "ParameterRule1.h"
#include "Visitor.h"

void ParameterRule1::accept(Visitor *v) {
	v->visit(this);
};
