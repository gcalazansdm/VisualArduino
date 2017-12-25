#include "ValuesRule7.h"
#include "Visitor.h"

void ValuesRule7::accept(Visitor *v) {
	v->visit(this);
};
