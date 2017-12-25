#include "MainBodyRule1.h"
#include "Visitor.h"

void MainBodyRule1::accept(Visitor *v) {
	v->visit(this);
};
