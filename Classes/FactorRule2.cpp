#include "FactorRule2.h"
#include "Visitor.h"

void FactorRule2::accept(Visitor *v) {
	v->visit(this);
};
