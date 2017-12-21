#include "LogicOPRule2.h"
#include "Visitor.h"

void LogicOPRule2::accept(Visitor *v) {
	v->visit(this);
};
