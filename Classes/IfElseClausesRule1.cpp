#include "IfElseClausesRule1.h"
#include "Visitor.h"

void IfElseClausesRule1::accept(Visitor *v) {
	v->visit(this);
};
