#include "program.h"
#include "Visitor.h"

void program::accept(Visitor *v) {
	v->visit(this);
};
