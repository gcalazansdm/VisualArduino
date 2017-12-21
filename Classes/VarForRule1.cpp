#include "VarForRule1.h"
#include "Visitor.h"

void VarForRule1::accept(Visitor *v) {
	v->visit(this);
};
