#include "WhileClause.h"
#include "Visitor.h"

void WhileClause::accept(Visitor *v) {
	v->visit(this);
};
