#ifndef LOGICOPRULE4_h
#define LOGICOPRULE4_h
#include "LogicOP.h"classLogicOPRule4: public LogicOP
{
	 private:
		 A_LPAR a_lpar_;
		 LogicOP logicop_;
		 A_RPAR a_rpar_;
	 public:
		 LogicOP(){}
		 LogicOP(){}
		 virtual ~LogicOP(){}
		 LogicOP(const LogicOP& logicop):LogicOP(){}
}
//Auto Gerated by Gabriel Calazans
#endif