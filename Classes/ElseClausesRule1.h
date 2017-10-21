#ifndef ELSECLAUSESRULE1_h
#define ELSECLAUSESRULE1_h
#include "ElseClauses.h"classElseClausesRule1: public ElseClauses
{
	 private:
		 IfElseClauses ifelseclauses_;
		 ElseClause elseclause_;
	 public:
		 ElseClauses(){}
		 ElseClauses(){}
		 virtual ~ElseClauses(){}
		 ElseClauses(const ElseClauses& elseclauses):ElseClauses(){}
}
//Auto Gerated by Gabriel Calazans
#endif