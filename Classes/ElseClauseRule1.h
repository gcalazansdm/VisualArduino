#ifndef ELSECLAUSERULE1_h
#define ELSECLAUSERULE1_h
#include "ElseClause.h"classElseClauseRule1: public ElseClause
{
	 private:
		 T_ELSE t_else_;
		 Command command_;
	 public:
		 ElseClause(){}
		 ElseClause(){}
		 virtual ~ElseClause(){}
		 ElseClause(const ElseClause& elseclause):ElseClause(){}
}
//Auto Gerated by Gabriel Calazans
#endif