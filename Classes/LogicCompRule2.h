#ifndef LOGICCOMPRULE2_H
#define LOGICCOMPRULE2_H

#include "LogicComp.h"
#include "LogicComp.h"

class LogicCompRule2 : public LogicComp
{
	private:
		Const char a_lpar_= '(';
		LogicComp* logiccomp_;
		Const char a_rpar_= ')';
	public:
		LogicCompRule2(){}
		LogicCompRule2( LogicComp* logiccomp):LogicComp(),logiccomp_(logiccomp){}
		virtual ~LogicCompRule2()
		{
			delete logiccomp;
		}
		LogicCompRule2(const LogicCompRule2& logiccomprule2):LogicComp(logiccomprule2),logiccomp_(logiccomp->logiccomp_){}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		void set_logiccomp(LogicComp* logiccomp)
		{
			logiccomp_ = logiccomp;
		}
		const LogicComp logiccomp const ()
		{
			return logiccomp_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
		}
}
#endif