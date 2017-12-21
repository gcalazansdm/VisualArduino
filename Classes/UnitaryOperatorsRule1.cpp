#include "UnitaryOperatorsRule1.h"
#include "Visitor.h"

void UnitaryOperatorsRule1::accept(Visitor *v) {
	v->visit(this);
};
