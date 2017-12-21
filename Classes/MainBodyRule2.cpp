#include "MainBodyRule2.h"
#include "Visitor.h"

void MainBodyRule2::accept(Visitor *v) {
	v->visit(this);
};
