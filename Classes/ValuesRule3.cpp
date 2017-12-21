#include "ValuesRule3.h"
#include "Visitor.h"

void ValuesRule3::accept(Visitor *v) {
	v->visit(this);
};
