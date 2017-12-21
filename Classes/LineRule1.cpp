#include "LineRule1.h"
#include "Visitor.h"

void LineRule1::accept(Visitor *v) {
	v->visit(this);
};
