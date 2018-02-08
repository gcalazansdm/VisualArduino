#include "LogicOPRule4.h"
#include "Visitor.h"

void LogicOPRule4::accept(Visitor *v) {
	v->visit(this);
};
