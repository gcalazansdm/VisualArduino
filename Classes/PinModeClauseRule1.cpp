#include "PinModeClauseRule1.h"
#include "Visitor.h"

void PinModeClauseRule1::accept(Visitor *v) {
	v->visit(this);
};
