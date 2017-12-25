#include "LocalBodyRule2.h"
#include "Visitor.h"

void LocalBodyRule2::accept(Visitor *v) {
	v->visit(this);
};
