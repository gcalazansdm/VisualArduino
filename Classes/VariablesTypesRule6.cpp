#include "VariablesTypesRule6.h"
#include "Visitor.h"

void VariablesTypesRule6::accept(Visitor *v) {
	v->visit(this);
};
