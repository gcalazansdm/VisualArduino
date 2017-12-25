#include "ValuesRule5.h"
#include "Visitor.h"

void ValuesRule5::accept(Visitor *v) {
	v->visit(this);
};
