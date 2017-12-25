#include "MainBodyRule4.h"
#include "Visitor.h"

void MainBodyRule4::accept(Visitor *v) {
	v->visit(this);
};
