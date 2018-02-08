#include "VariablesTypesRule3.h"
#include "Visitor.h"

void VariablesTypesRule3::accept(Visitor *v) {
	v->visit(this);
};
