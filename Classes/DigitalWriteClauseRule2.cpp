#include "DigitalWriteClauseRule2.h"
#include "Visitor.h"

void DigitalWriteClauseRule2::accept(Visitor *v) {
	v->visit(this);
};
