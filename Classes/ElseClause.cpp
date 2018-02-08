#include "ElseClause.h"
#include "Visitor.h"

void ElseClause::accept(Visitor *v) {
	v->visit(this);
};
