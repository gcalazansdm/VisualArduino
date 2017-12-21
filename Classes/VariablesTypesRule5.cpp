#include "VariablesTypesRule5.h"
#include "Visitor.h"

void VariablesTypesRule5::accept(Visitor *v) {
	v->visit(this);
};
