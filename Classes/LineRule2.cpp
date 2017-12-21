#include "LineRule2.h"
#include "Visitor.h"

void LineRule2::accept(Visitor *v) {
	v->visit(this);
};
