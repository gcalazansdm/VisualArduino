#include "IfElseClausesRule2.h"
#include "Visitor.h"

void IfElseClausesRule2::accept(Visitor *v) {
	v->visit(this);
};
