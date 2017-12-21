#ifndef LOGICOPRULE4_H
#define LOGICOPRULE4_H

#include "LogicOP.h"
#include "LogicOP.h"

class LogicOPRule4 : public LogicOP
{
	private:
		LogicOP* logicop_;
	public:
		LogicOPRule4( LogicOP* logicop):LogicOP(),logicop_(logicop){}
		virtual ~LogicOPRule4()
		{
			delete logicop_;
		}
		LogicOPRule4(const LogicOPRule4& logicoprule4):LogicOP(logicoprule4),logicop_(logicoprule4.logicop_){}//olá
		void set_logicop(LogicOP* logicop)
		{
			logicop_ = logicop;
		}
		const LogicOP* const logicop()
		{
			return logicop_;
		}
		void accept(Visitor *v);
};
#endif