#include "SelectionClauseRule2.h"
#include "Visitor.h"

void SelectionClauseRule2::accept(Visitor *v) {
	v->visit(this);
};
