#ifndef LOGICOPERATIONRULE2_H
#define LOGICOPERATIONRULE2_H

#include "LogicOperation.h"
#include "LogicComp.h"

class LogicOperationRule2 : public LogicOperation
{
	private:
		LogicComp* logiccomp_;
	public:
		LogicOperationRule2(){}
		LogicOperationRule2( LogicComp* logiccomp):LogicOperation(),logiccomp_(logiccomp){}
		virtual ~LogicOperationRule2()
		{
			delete logiccomp;
		}
		LogicOperationRule2(const LogicOperationRule2& logicoperationrule2):LogicOperation(logicoperationrule2),logiccomp_(logicoperation->logiccomp_){}
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