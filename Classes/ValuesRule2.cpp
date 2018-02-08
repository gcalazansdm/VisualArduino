#include "ValuesRule2.h"
#include "Visitor.h"

void ValuesRule2::accept(Visitor *v) {
	v->visit(this);
};
