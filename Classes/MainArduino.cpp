#include "MainArduino.h"
#include "Visitor.h"

void MainArduino::accept(Visitor *v) {
	v->visit(this);
};
