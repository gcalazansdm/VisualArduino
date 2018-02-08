#include "LogicCompRule1.h"
#include "Visitor.h"

void LogicCompRule1::accept(Visitor *v) {
	v->visit(this);
};
