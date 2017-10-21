#ifndef LOGICOPRULE3_H
#define LOGICOPRULE3_H

#include "LogicOP.h"

class LogicOPRule3 : public LogicOP
{
	private:
		L_BOOL l_bool_;
	public:
		LogicOPRule3(){}
		LogicOPRule3( l_bool l_bool):LogicOP(),l_bool_(l_bool){}
		virtual ~LogicOPRule3()
		{
		}
		LogicOPRule3(const LogicOPRule3& logicop):LogicOP(logicop){}
		void set_l_bool(L_BOOL* l_bool)
		{
			l_bool_ = l_bool;
		}
		L_BOOL l_bool const ()
		{
			return l_bool_;
		}
}
#endif