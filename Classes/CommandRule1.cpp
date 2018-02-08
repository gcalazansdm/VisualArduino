#include "CommandRule1.h"
#include "Visitor.h"

void CommandRule1::accept(Visitor *v) {
	v->visit(this);
};
