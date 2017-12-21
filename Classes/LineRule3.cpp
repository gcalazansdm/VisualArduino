#include "LineRule3.h"
#include "Visitor.h"

void LineRule3::accept(Visitor *v) {
	v->visit(this);
};
