#include "SetupRule1.h"
#include "Visitor.h"

void SetupRule1::accept(Visitor *v) {
	v->visit(this);
};
