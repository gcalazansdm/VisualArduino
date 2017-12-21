#include "ForClause.h"
#include "Visitor.h"

void ForClause::accept(Visitor *v) {
	v->visit(this);
};
