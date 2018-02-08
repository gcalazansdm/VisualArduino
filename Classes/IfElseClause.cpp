#include "IfElseClause.h"
#include "Visitor.h"

void IfElseClause::accept(Visitor *v) {
	v->visit(this);
};
