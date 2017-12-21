#include "BodyRule2.h"
#include "Visitor.h"

void BodyRule2::accept(Visitor *v) {
	v->visit(this);
};
