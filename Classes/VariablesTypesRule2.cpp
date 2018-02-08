#include "VariablesTypesRule2.h"
#include "Visitor.h"

void VariablesTypesRule2::accept(Visitor *v) {
	v->visit(this);
};
