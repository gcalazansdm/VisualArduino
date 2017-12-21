#include "CondictionRule2.h"
#include "Visitor.h"

void CondictionRule2::accept(Visitor *v) {
	v->visit(this);
};
