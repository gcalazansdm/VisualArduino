#include "FactorRule1.h"
#include "Visitor.h"

void FactorRule1::accept(Visitor *v) {
	v->visit(this);
};
