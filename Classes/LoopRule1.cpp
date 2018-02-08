#include "LoopRule1.h"
#include "Visitor.h"

void LoopRule1::accept(Visitor *v) {
	v->visit(this);
};
