#ifndef LOGICOPRULE3_H
#define LOGICOPRULE3_H

#include "LogicOP.h"

class LogicOPRule3 : public LogicOP
{
	private:
		bool l_bool_;
	public:
		LogicOPRule3( bool l_bool):LogicOP(),l_bool_(l_bool){}
		virtual ~LogicOPRule3()
		{
		}
		LogicOPRule3(const LogicOPRule3& logicoprule3):LogicOP(logicoprule3),l_bool_(logicoprule3.l_bool_){}//olá
		void set_l_bool(bool l_bool)
		{
			l_bool_ = l_bool;
		}
		bool l_bool()
		{
			return l_bool_;
		}
		void accept(Visitor *v);
};
#endif