#ifndef ELSECLAUSESRULE1_H
#define ELSECLAUSESRULE1_H

#include "ElseClauses.h"
#include "IfElseClauses.h"
#include "ElseClause.h"

class ElseClausesRule1 : public ElseClauses
{
	private:
		IfElseClauses* ifelseclauses_;
		ElseClause* elseclause_;
	public:
		ElseClausesRule1(){}
		ElseClausesRule1( IfElseClauses* ifelseclauses,ElseClause* elseclause):ElseClauses(),ifelseclauses_(ifelseclauses),elseclause_(elseclause){}
		virtual ~ElseClausesRule1()
		{
			delete ifelseclauses;
			delete elseclause;
		}
		ElseClausesRule1(const ElseClausesRule1& elseclausesrule1):ElseClauses(elseclausesrule1),ifelseclauses_(elseclauses->ifelseclauses_),elseclause_(elseclauses->elseclause_){}
		void set_ifelseclauses(IfElseClauses* ifelseclauses)
		{
			ifelseclauses_ = ifelseclauses;
		}
		const IfElseClauses ifelseclauses const ()
		{
			return ifelseclauses_;
		}
		void set_elseclause(ElseClause* elseclause)
		{
			elseclause_ = elseclause;
		}
		const ElseClause elseclause const ()
		{
			return elseclause_;
		}
}
#endif