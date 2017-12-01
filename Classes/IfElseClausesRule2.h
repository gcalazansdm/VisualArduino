#ifndef IFELSECLAUSESRULE2_H
#define IFELSECLAUSESRULE2_H

#include "IfElseClauses.h"
#include "IfElseClause.h"

class IfElseClausesRule2 : public IfElseClauses
{
	private:
		IfElseClause* ifelseclause_;
	public:
		IfElseClausesRule2(){}
		IfElseClausesRule2( IfElseClause* ifelseclause):IfElseClauses(),ifelseclause_(ifelseclause){}
		virtual ~IfElseClausesRule2()
		{
			delete ifelseclause;
		}
		IfElseClausesRule2(const IfElseClausesRule2& ifelseclausesrule2):IfElseClauses(ifelseclausesrule2),ifelseclause_(ifelseclauses->ifelseclause_){}
		void set_ifelseclause(IfElseClause* ifelseclause)
		{
			ifelseclause_ = ifelseclause;
		}
		const IfElseClause ifelseclause const ()
		{
			return ifelseclause_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif