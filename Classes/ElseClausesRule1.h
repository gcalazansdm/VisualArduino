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
		ElseClausesRule1( IfElseClauses* ifelseclauses,ElseClause* elseclause):ElseClauses(),ifelseclauses_(ifelseclauses),elseclause_(elseclause){}
		virtual ~ElseClausesRule1()
		{
			delete ifelseclauses_;
			delete elseclause_;
		}
		ElseClausesRule1(const ElseClausesRule1& elseclausesrule1):ElseClauses(elseclausesrule1),ifelseclauses_(elseclausesrule1.ifelseclauses_),elseclause_(elseclausesrule1.elseclause_){}//olá
		void set_ifelseclauses(IfElseClauses* ifelseclauses)
		{
			ifelseclauses_ = ifelseclauses;
		}
		const IfElseClauses* const ifelseclauses()
		{
			return ifelseclauses_;
		}
		void set_elseclause(ElseClause* elseclause)
		{
			elseclause_ = elseclause;
		}
		const ElseClause* const elseclause()
		{
			return elseclause_;
		}
		void accept(Visitor *v);
};
#endif