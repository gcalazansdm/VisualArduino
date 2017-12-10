#ifndef IFELSECLAUSESRULE1_H
#define IFELSECLAUSESRULE1_H

#include "IfElseClauses.h"
#include "IfElseClause.h"
#include "IfElseClauses.h"

class IfElseClausesRule1 : public IfElseClauses
{
	private:
		IfElseClause* ifelseclause_;
		IfElseClauses* ifelseclauses_;
	public:
		IfElseClausesRule1(){}
		IfElseClausesRule1( IfElseClause* ifelseclause,IfElseClauses* ifelseclauses):IfElseClauses(),ifelseclause_(ifelseclause),ifelseclauses_(ifelseclauses){}
		virtual ~IfElseClausesRule1()
		{
			delete ifelseclause;
			delete ifelseclauses;
		}
		IfElseClausesRule1(const IfElseClausesRule1& ifelseclausesrule1):IfElseClauses(ifelseclausesrule1),ifelseclause_(ifelseclauses->ifelseclause_),ifelseclauses_(ifelseclauses->ifelseclauses_){}
		void set_ifelseclause(IfElseClause* ifelseclause)
		{
			ifelseclause_ = ifelseclause;
		}
		const IfElseClause ifelseclause const ()
		{
			return ifelseclause_;
		}
		void set_ifelseclauses(IfElseClauses* ifelseclauses)
		{
			ifelseclauses_ = ifelseclauses;
		}
		const IfElseClauses ifelseclauses const ()
		{
			return ifelseclauses_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif