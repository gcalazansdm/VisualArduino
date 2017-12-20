#ifndef CONDICTIONRULE1_H
#define CONDICTIONRULE1_H

#include "Condiction.h"
#include "SelectionClause.h"

class CondictionRule1 : public Condiction
{
	private:
		SelectionClause* selectionclause_;
	public:
		CondictionRule1( SelectionClause* selectionclause):Condiction(),selectionclause_(selectionclause){};
		virtual ~CondictionRule1()
		{
			delete selectionclause;
		};
		CondictionRule1(const CondictionRule1& condictionrule1):Condiction(condictionrule1),selectionclause_(condictionrule1.selectionclause()){};//ol�
		void set_selectionclause(SelectionClause* selectionclause)
		{
			selectionclause_ = selectionclause;
		};
		const SelectionClause* const selectionclause()
		{
			return selectionclause_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif