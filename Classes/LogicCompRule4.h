#ifndef LOGICCOMPRULE4_H
#define LOGICCOMPRULE4_H

#include "LogicComp.h"
#include <string>

class LogicCompRule4 : public LogicComp
{
	private:
		Const std::string op_bool_eqgre_= ">=";
	public:
		LogicCompRule4(){}
		LogicCompRule4():LogicComp(){}
		virtual ~LogicCompRule4()
		{
		}
		LogicCompRule4(const LogicCompRule4& logiccomp):LogicComp(logiccomp){}
		std::string op_bool_eqgre const ()
		{
			return op_bool_eqgre_;
		}
}
#endif