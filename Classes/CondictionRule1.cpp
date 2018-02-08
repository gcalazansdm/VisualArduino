#include "CondictionRule1.h"
#include "Visitor.h"

void CondictionRule1::accept(Visitor *v) {
	v->visit(this);
};
