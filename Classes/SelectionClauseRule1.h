#ifndef SELECTIONCLAUSERULE1_H
#define SELECTIONCLAUSERULE1_H

#include "SelectionClause.h"
#include "IfClause.h"

class SelectionClauseRule1 : public SelectionClause
{
	private:
		IfClause* ifclause_;
	public:
		SelectionClauseRule1( IfClause* ifclause):SelectionClause(),ifclause_(ifclause){};
		virtual ~SelectionClauseRule1()
		{
			delete ifclause;
		};
		SelectionClauseRule1(const SelectionClauseRule1& selectionclauserule1):SelectionClause(selectionclauserule1),ifclause_(selectionclauserule1.ifclause()){};//olá
		void set_ifclause(IfClause* ifclause)
		{
			ifclause_ = ifclause;
		};
		const IfClause* const ifclause()
		{
			return ifclause_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif