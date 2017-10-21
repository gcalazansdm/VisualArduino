#ifndef LOGICOPRULE2_h
#define LOGICOPRULE2_h
#include "LogicOP.h"classLogicOPRule2: public LogicOP
{
	 private:
		 UnitaryLogicalOperator unitarylogicaloperator_;
		 LogicOP logicop_;
	 public:
		 LogicOP(){}
		 LogicOP(){}
		 virtual ~LogicOP(){}
		 LogicOP(const LogicOP& logicop):LogicOP(){}
}
//Auto Gerated by Gabriel Calazans
#endif