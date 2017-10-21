#ifndef LOGICCOMPRULE5_H
#define LOGICCOMPRULE5_H

#include "LogicComp.h"
#include <string>

class LogicCompRule5 : public LogicComp
{
	private:
		Const std::string op_bool_eqless_= "<=";
	public:
		LogicCompRule5(){}
		LogicCompRule5():LogicComp(){}
		virtual ~LogicCompRule5()
		{
		}
		LogicCompRule5(const LogicCompRule5& logiccomp):LogicComp(logiccomp){}
		std::string op_bool_eqless const ()
		{
			return op_bool_eqless_;
		}
}
#endif