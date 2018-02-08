#include "EqRule3.h"
#include "Visitor.h"

void EqRule3::accept(Visitor *v) {
	v->visit(this);
};
