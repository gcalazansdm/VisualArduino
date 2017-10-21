#ifndef LOGICOPRULE5_H
#define LOGICOPRULE5_H

#include "LogicOP.h"

class LogicOPRule5 : public LogicOP
{
	private:
		Const std::string op_bool_or_= "ou";
	public:
		LogicOPRule5(){}
		LogicOPRule5():LogicOP(){}
		virtual ~LogicOPRule5()
		{
		}
		LogicOPRule5(const LogicOPRule5& logicop):LogicOP(logicop){}
		std::string op_bool_or const ()
		{
			return op_bool_or_;
		}
}
#endif