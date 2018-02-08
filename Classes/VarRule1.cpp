#include "VarRule1.h"
#include "Visitor.h"

void VarRule1::accept(Visitor *v) {
	v->visit(this);
};
