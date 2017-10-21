#ifndef FORCLAUSERULE1_h
#define FORCLAUSERULE1_h
#include "ForClause.h"classForClauseRule1: public ForClause
{
	 private:
		 T_FOR t_for_;
		 VarFor varfor_;
		 LogicOperation logicoperation_;
		 A_SEMICOLON a_semicolon_;
		 UnitaryOperators unitaryoperators_;
		 A_RPAR a_rpar_;
		 Command command_;
	 public:
		 ForClause(){}
		 ForClause(){}
		 virtual ~ForClause(){}
		 ForClause(const ForClause& forclause):ForClause(){}
}
//Auto Gerated by Gabriel Calazans
#endif