#include "CondictionRule3.h"
#include "Visitor.h"

void CondictionRule3::accept(Visitor *v) {
	v->visit(this);
};
