#include "VariablesTypesRule4.h"
#include "Visitor.h"

void VariablesTypesRule4::accept(Visitor *v) {
	v->visit(this);
};
