#include "VarRule2.h"
#include "Visitor.h"

void VarRule2::accept(Visitor *v) {
	v->visit(this);
};
