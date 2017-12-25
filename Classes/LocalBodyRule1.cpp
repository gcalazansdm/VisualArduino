#include "LocalBodyRule1.h"
#include "Visitor.h"

void LocalBodyRule1::accept(Visitor *v) {
	v->visit(this);
};
