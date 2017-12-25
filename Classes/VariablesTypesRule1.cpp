#include "VariablesTypesRule1.h"
#include "Visitor.h"

void VariablesTypesRule1::accept(Visitor *v) {
	v->visit(this);
};
