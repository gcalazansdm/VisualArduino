#include "ValuesRule6.h"
#include "Visitor.h"

void ValuesRule6::accept(Visitor *v) {
	v->visit(this);
};
