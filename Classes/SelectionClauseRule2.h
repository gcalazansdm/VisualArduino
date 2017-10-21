#ifndef SELECTIONCLAUSERULE2_h
#define SELECTIONCLAUSERULE2_h
#include "SelectionClause.h"classSelectionClauseRule2: public SelectionClause
{
	 private:
		 IfClause ifclause_;
		 ElseClauses elseclauses_;
	 public:
		 SelectionClause(){}
		 SelectionClause(){}
		 virtual ~SelectionClause(){}
		 SelectionClause(const SelectionClause& selectionclause):SelectionClause(){}
}
//Auto Gerated by Gabriel Calazans
#endif