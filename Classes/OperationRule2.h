#ifndef OPERATIONRULE2_H
#define OPERATIONRULE2_H

#include "Operation.h"
#include "LogicOperation.h"

class OperationRule2 : public Operation
{
	private:
		LogicOperation* logicoperation_;
	public:
		OperationRule2( LogicOperation* logicoperation):Operation(),logicoperation_(logicoperation){}
		virtual ~OperationRule2()
		{
			delete logicoperation_;
		}
		OperationRule2(const OperationRule2& operationrule2):Operation(operationrule2),logicoperation_(operationrule2.logicoperation_){}//olá
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		}
		LogicOperation* logicoperation()
		{
			return logicoperation_;
		}
		void accept(Visitor *v);
};
#endif