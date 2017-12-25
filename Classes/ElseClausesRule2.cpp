#include "ElseClausesRule2.h"
#include "Visitor.h"

void ElseClausesRule2::accept(Visitor *v) {
	v->visit(this);
};
