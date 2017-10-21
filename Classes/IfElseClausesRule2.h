#ifndef IFELSECLAUSESRULE2_H
#define IFELSECLAUSESRULE2_H

#include "IfElseClauses.h"
#include "IfElseClausePinModeClause.h"

class IfElseClausesRule2 : public IfElseClauses
{
	private:
		IfElseClausePinModeClause* ifelseclausepinmodeclause_;
	public:
		IfElseClausesRule2(){}
		IfElseClausesRule2( IfElseClausePinModeClause* ifelseclausepinmodeclause):IfElseClauses(),ifelseclausepinmodeclause_(ifelseclausepinmodeclause){}
		virtual ~IfElseClausesRule2()
		{
			delete ifelseclausepinmodeclause;
		}
		IfElseClausesRule2(const IfElseClausesRule2& ifelseclauses):IfElseClauses(ifelseclauses),ifelseclausepinmodeclause_(ifelseclauses->ifelseclausepinmodeclause_){}
		void set_ifelseclausepinmodeclause(IfElseClausePinModeClause* ifelseclausepinmodeclause)
		{
			ifelseclausepinmodeclause_ = ifelseclausepinmodeclause;
		}
		const IfElseClausePinModeClause ifelseclausepinmodeclause const ()
		{
			return ifelseclausepinmodeclause_;
		}
}
#endif