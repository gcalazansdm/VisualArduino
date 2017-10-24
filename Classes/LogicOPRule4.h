#ifndef LOGICOPRULE4_H
#define LOGICOPRULE4_H

#include "LogicOP.h"
#include "LogicOP.h"

class LogicOPRule4 : public LogicOP
{
	private:
		Const char a_lpar_= '(';
		LogicOP* logicop_;
		Const char a_rpar_= ')';
	public:
		LogicOPRule4(){}
		LogicOPRule4( LogicOP* logicop):LogicOP(),logicop_(logicop){}
		virtual ~LogicOPRule4()
		{
			delete logicop;
		}
		LogicOPRule4(const LogicOPRule4& logicoprule4):LogicOP(logicoprule4),logicop_(logicop->logicop_){}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		void set_logicop(LogicOP* logicop)
		{
			logicop_ = logicop;
		}
		const LogicOP logicop const ()
		{
			return logicop_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
		}
}
#endif