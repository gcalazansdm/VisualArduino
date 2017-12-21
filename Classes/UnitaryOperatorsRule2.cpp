#include "UnitaryOperatorsRule2.h"
#include "Visitor.h"

void UnitaryOperatorsRule2::accept(Visitor *v) {
	v->visit(this);
};
