#ifndef SELECTIONCLAUSERULE2_H
#define SELECTIONCLAUSERULE2_H

#include "SelectionClause.h"
#include "IfClause.h"
#include "ElseClauses.h"

class SelectionClauseRule2 : public SelectionClause
{
	private:
		IfClause* ifclause_;
		ElseClauses* elseclauses_;
	public:
		SelectionClauseRule2(){};
		SelectionClauseRule2( IfClause* ifclause,ElseClauses* elseclauses):SelectionClause(),ifclause_(ifclause),elseclauses_(elseclauses){};
		virtual ~SelectionClauseRule2()
		{
			delete ifclause;
			delete elseclauses;
		};
		SelectionClauseRule2(const SelectionClauseRule2& selectionclauserule2):SelectionClause(selectionclauserule2),ifclause_(selectionclause->ifclause_),elseclauses_(selectionclause->elseclauses_){};
		void set_ifclause(IfClause* ifclause)
		{
			ifclause_ = ifclause;
		};
		const IfClause ifclause const ()
		{
			return ifclause_;
		};
		void set_elseclauses(ElseClauses* elseclauses)
		{
			elseclauses_ = elseclauses;
		};
		const ElseClauses elseclauses const ()
		{
			return elseclauses_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif