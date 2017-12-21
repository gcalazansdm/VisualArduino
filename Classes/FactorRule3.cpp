#include "FactorRule3.h"
#include "Visitor.h"

void FactorRule3::accept(Visitor *v) {
	v->visit(this);
};
