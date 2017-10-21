#ifndef OPERATIONRULE2_H
#define OPERATIONRULE2_H

#include "Operation.h"
#include "LogicOperation.h"

class OperationRule2 : public Operation
{
	private:
		LogicOperation* logicoperation_;
	public:
		OperationRule2(){}
		OperationRule2( LogicOperation* logicoperation):Operation(),logicoperation_(logicoperation){}
		virtual ~OperationRule2()
		{
			delete logicoperation;
		}
		OperationRule2(const OperationRule2& operation):Operation(operation),logicoperation_(operation->logicoperation_){}
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		}
		const LogicOperation logicoperation const ()
		{
			return logicoperation_;
		}
}
#endif