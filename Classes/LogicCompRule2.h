#ifndef LOGICCOMPRULE2_H
#define LOGICCOMPRULE2_H

#include "LogicComp.h"
#include "LogicComp.h"

class LogicCompRule2 : public LogicComp
{
	private:
		LogicComp* logiccomp_;
	public:
		LogicCompRule2(){}
		LogicCompRule2( LogicComp* logiccomp):LogicComp(),logiccomp_(logiccomp){}
		virtual ~LogicCompRule2()
		{
			delete logiccomp;
		}
		LogicCompRule2(const LogicCompRule2& logiccomprule2):LogicComp(logiccomprule2),logiccomp_(logiccomp->logiccomp_){}
		void set_logiccomp(LogicComp* logiccomp)
		{
			logiccomp_ = logiccomp;
		}
		const LogicComp logiccomp const ()
		{
			return logiccomp_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif