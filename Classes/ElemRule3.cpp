#include "ElemRule3.h"
#include "Visitor.h"

void ElemRule3::accept(Visitor *v) {
	v->visit(this);
};
