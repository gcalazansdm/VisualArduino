#include "ValuesRule1.h"
#include "Visitor.h"

void ValuesRule1::accept(Visitor *v) {
	v->visit(this);
};
