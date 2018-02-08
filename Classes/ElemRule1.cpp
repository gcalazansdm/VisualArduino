#include "ElemRule1.h"
#include "Visitor.h"

void ElemRule1::accept(Visitor *v) {
	v->visit(this);
};
