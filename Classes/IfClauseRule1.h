#ifndef IFCLAUSERULE1_h
#define IFCLAUSERULE1_h
#include "IfClause.h"classIfClauseRule1: public IfClause
{
	 private:
		 T_IF t_if_;
		 A_LPAR a_lpar_;
		 LogicOperation logicoperation_;
		 A_RPAR a_rpar_;
		 Command command_;
	 public:
		 IfClause(){}
		 IfClause(){}
		 virtual ~IfClause(){}
		 IfClause(const IfClause& ifclause):IfClause(){}
}
//Auto Gerated by Gabriel Calazans
#endif