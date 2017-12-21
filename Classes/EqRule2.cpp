#include "EqRule2.h"
#include "Visitor.h"

void EqRule2::accept(Visitor *v) {
	v->visit(this);
};
