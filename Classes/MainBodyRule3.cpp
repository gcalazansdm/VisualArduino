#include "MainBodyRule3.h"
#include "Visitor.h"

void MainBodyRule3::accept(Visitor *v) {
	v->visit(this);
};
