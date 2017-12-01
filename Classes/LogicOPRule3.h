#ifndef LOGICOPRULE3_H
#define LOGICOPRULE3_H

#include "LogicOP.h"

class LogicOPRule3 : public LogicOP
{
	private:
	public:
		LogicOPRule3(){}
		LogicOPRule3():LogicOP(){}
		virtual ~LogicOPRule3()
		{
		}
		LogicOPRule3(const LogicOPRule3& logicoprule3):LogicOP(logicoprule3){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif