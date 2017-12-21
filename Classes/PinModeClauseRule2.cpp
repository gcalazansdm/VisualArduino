#include "PinModeClauseRule2.h"
#include "Visitor.h"

void PinModeClauseRule2::accept(Visitor *v) {
	v->visit(this);
};
