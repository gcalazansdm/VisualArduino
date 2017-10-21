#ifndef LOGICCOMPRULE3_H
#define LOGICCOMPRULE3_H

#include "LogicComp.h"

class LogicCompRule3 : public LogicComp
{
	private:
		Const char op_bool_less_= '<';
	public:
		LogicCompRule3(){}
		LogicCompRule3():LogicComp(){}
		virtual ~LogicCompRule3()
		{
		}
		LogicCompRule3(const LogicCompRule3& logiccomp):LogicComp(logiccomp){}
		char op_bool_less const ()
		{
			return op_bool_less_;
		}
}
#endif