#ifndef SELECTIONCLAUSERULE1_h
#define SELECTIONCLAUSERULE1_h
#include "SelectionClause.h"classSelectionClauseRule1: public SelectionClause
{
	 private:
		 IfClause ifclause_;
	 public:
		 SelectionClause(){}
		 SelectionClause(){}
		 virtual ~SelectionClause(){}
		 SelectionClause(const SelectionClause& selectionclause):SelectionClause(){}
}
//Auto Gerated by Gabriel Calazans
#endif