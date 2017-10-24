#ifndef SELECTIONCLAUSERULE1_H
#define SELECTIONCLAUSERULE1_H

#include "SelectionClause.h"
#include "IfClause.h"

class SelectionClauseRule1 : public SelectionClause
{
	private:
		IfClause* ifclause_;
	public:
		SelectionClauseRule1(){}
		SelectionClauseRule1( IfClause* ifclause):SelectionClause(),ifclause_(ifclause){}
		virtual ~SelectionClauseRule1()
		{
			delete ifclause;
		}
		SelectionClauseRule1(const SelectionClauseRule1& selectionclauserule1):SelectionClause(selectionclauserule1),ifclause_(selectionclause->ifclause_){}
		void set_ifclause(IfClause* ifclause)
		{
			ifclause_ = ifclause;
		}
		const IfClause ifclause const ()
		{
			return ifclause_;
		}
}
#endif