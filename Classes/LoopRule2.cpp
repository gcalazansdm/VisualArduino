#include "LoopRule2.h"
#include "Visitor.h"

void LoopRule2::accept(Visitor *v) {
	v->visit(this);
};
