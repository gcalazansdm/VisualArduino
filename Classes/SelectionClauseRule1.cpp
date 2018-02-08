#include "SelectionClauseRule1.h"
#include "Visitor.h"

void SelectionClauseRule1::accept(Visitor *v) {
	v->visit(this);
};
