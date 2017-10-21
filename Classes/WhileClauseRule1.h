#ifndef WHILECLAUSERULE1_h
#define WHILECLAUSERULE1_h
#include "WhileClause.h"classWhileClauseRule1: public WhileClause
{
	 private:
		 T_WHI t_whi_;
		 A_LPAR a_lpar_;
		 LogicOperation logicoperation_;
		 A_RPAR a_rpar_;
		 Command command_;
	 public:
		 WhileClause(){}
		 WhileClause(){}
		 virtual ~WhileClause(){}
		 WhileClause(const WhileClause& whileclause):WhileClause(){}
}
//Auto Gerated by Gabriel Calazans
#endif