#ifndef IFELSECLAUSERULE1_h
#define IFELSECLAUSERULE1_h
#include "IfElseClause.h"classIfElseClauseRule1: public IfElseClause
{
	 private:
		 T_IFELSE t_ifelse_;
		 A_LPAR a_lpar_;
		 LogicOperation logicoperation_;
		 A_RPAR a_rpar_;
		 Command command_;
	 public:
		 IfElseClause(){}
		 IfElseClause(){}
		 virtual ~IfElseClause(){}
		 IfElseClause(const IfElseClause& ifelseclause):IfElseClause(){}
}
//Auto Gerated by Gabriel Calazans
#endif