#include "IfClause.h"
#include "Visitor.h"

void IfClause::accept(Visitor *v) {
	v->visit(this);
};
