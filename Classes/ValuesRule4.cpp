#include "ValuesRule4.h"
#include "Visitor.h"

void ValuesRule4::accept(Visitor *v) {
	v->visit(this);
};
