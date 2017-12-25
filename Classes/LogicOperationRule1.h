#ifndef LOGICOPERATIONRULE1_H
#define LOGICOPERATIONRULE1_H

#include "LogicOperation.h"
#include "LogicOP.h"

class LogicOperationRule1 : public LogicOperation
{
	private:
		LogicOP* logicop_;
	public:
		LogicOperationRule1( LogicOP* logicop):LogicOperation(),logicop_(logicop){}
		virtual ~LogicOperationRule1()
		{
			delete logicop_;
		}
		LogicOperationRule1(const LogicOperationRule1& logicoperationrule1):LogicOperation(logicoperationrule1),logicop_(logicoperationrule1.logicop_){}//olá
		void set_logicop(LogicOP* logicop)
		{
			logicop_ = logicop;
		}
		LogicOP* logicop()
		{
			return logicop_;
		}
		void accept(Visitor *v);
};
#endif