#include "VarForRule3.h"
#include "Visitor.h"

void VarForRule3::accept(Visitor *v) {
	v->visit(this);
};
