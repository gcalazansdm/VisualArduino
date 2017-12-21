#include "LogicOPRule3.h"
#include "Visitor.h"

void LogicOPRule3::accept(Visitor *v) {
	v->visit(this);
};
