#include "VarForRule2.h"
#include "Visitor.h"

void VarForRule2::accept(Visitor *v) {
	v->visit(this);
};
