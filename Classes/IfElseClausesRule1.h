#ifndef IFELSECLAUSESRULE1_h
#define IFELSECLAUSESRULE1_h
#include "IfElseClauses.h"classIfElseClausesRule1: public IfElseClauses
{
	 private:
		 IfElseClause ifelseclause_;
		 IfElseClauses ifelseclauses_;
	 public:
		 IfElseClauses(){}
		 IfElseClauses(){}
		 virtual ~IfElseClauses(){}
		 IfElseClauses(const IfElseClauses& ifelseclauses):IfElseClauses(){}
}
//Auto Gerated by Gabriel Calazans
#endif