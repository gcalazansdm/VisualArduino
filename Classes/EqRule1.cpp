#include "EqRule1.h"
#include "Visitor.h"

void EqRule1::accept(Visitor *v) {
	v->visit(this);
};
