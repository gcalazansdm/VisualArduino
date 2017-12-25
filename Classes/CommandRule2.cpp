#include "CommandRule2.h"
#include "Visitor.h"

void CommandRule2::accept(Visitor *v) {
	v->visit(this);
};
