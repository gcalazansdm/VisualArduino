#include "BodyRule1.h"
#include "Visitor.h"

void BodyRule1::accept(Visitor *v) {
	v->visit(this);
};
