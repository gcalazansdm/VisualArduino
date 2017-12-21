#include "DigitalWriteClauseRule1.h"
#include "Visitor.h"

void DigitalWriteClauseRule1::accept(Visitor *v) {
	v->visit(this);
};
