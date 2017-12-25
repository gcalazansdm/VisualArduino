#include "ElseClausesRule1.h"
#include "Visitor.h"

void ElseClausesRule1::accept(Visitor *v) {
	v->visit(this);
};
