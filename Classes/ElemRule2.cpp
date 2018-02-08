#include "ElemRule2.h"
#include "Visitor.h"

void ElemRule2::accept(Visitor *v) {
	v->visit(this);
};
