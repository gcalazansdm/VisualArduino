#include "LogicCompRule2.h"
#include "Visitor.h"

void LogicCompRule2::accept(Visitor *v) {
	v->visit(this);
};
