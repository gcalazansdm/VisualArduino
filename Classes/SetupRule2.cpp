#include "SetupRule2.h"
#include "Visitor.h"

void SetupRule2::accept(Visitor *v) {
	v->visit(this);
};
