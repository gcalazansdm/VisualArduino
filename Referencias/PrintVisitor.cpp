#include "PrintVisitor.h"

void visit(ExpRule1 *e)
{
	e->exp()->accept(this);
	printf("+");
	e->factor()->accept(this);
}

void visit(ExpRule2 *e)
{
	e->exp()->accept(this);
	printf("-");
	e->factor()->accept(this);
}
