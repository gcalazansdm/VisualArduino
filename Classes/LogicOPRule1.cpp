#include "LogicOPRule1.h"
#include "Visitor.h"

void LogicOPRule1::accept(Visitor *v) {
	v->visit(this);
};
