#ifndef SELECTIONCLAUSERULE3_H
#define SELECTIONCLAUSERULE3_H

#include "SelectionClause.h"
#include "ElseClause.h"

class SelectionClauseRule3 : public SelectionClause
{
	private:
		ElseClause* elseclause_;
	public:
		SelectionClauseRule3(){}
		SelectionClauseRule3( ElseClause* elseclause):SelectionClause(),elseclause_(elseclause){}
		virtual ~SelectionClauseRule3()
		{
			delete elseclause;
		}
		SelectionClauseRule3(const SelectionClauseRule3& selectionclause):SelectionClause(selectionclause),elseclause_(selectionclause->elseclause_){}
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