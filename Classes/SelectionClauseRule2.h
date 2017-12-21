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
		SelectionClauseRule2( IfClause* ifclause,ElseClauses* elseclauses):SelectionClause(),ifclause_(ifclause),elseclauses_(elseclauses){}
		virtual ~SelectionClauseRule2()
		{
			delete ifclause_;
			delete elseclauses_;
		}
		SelectionClauseRule2(const SelectionClauseRule2& selectionclauserule2):SelectionClause(selectionclauserule2),ifclause_(selectionclauserule2.ifclause_),elseclauses_(selectionclauserule2.elseclauses_){}//olá
		void set_ifclause(IfClause* ifclause)
		{
			ifclause_ = ifclause;
		}
		const IfClause* const ifclause()
		{
			return ifclause_;
		}
		void set_elseclauses(ElseClauses* elseclauses)
		{
			elseclauses_ = elseclauses;
		}
		const ElseClauses* const elseclauses()
		{
			return elseclauses_;
		}
		void accept(Visitor *v);
};
#endif