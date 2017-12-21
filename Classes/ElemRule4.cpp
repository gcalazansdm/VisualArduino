#include "ElemRule4.h"
#include "Visitor.h"

void ElemRule4::accept(Visitor *v) {
	v->visit(this);
};
