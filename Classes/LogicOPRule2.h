#ifndef LOGICOPRULE2_H
#define LOGICOPRULE2_H

#include "LogicOP.h"
#include "UnitaryLogicalOperator.h"
#include "LogicOP.h"

class LogicOPRule2 : public LogicOP
{
	private:
		UnitaryLogicalOperator* unitarylogicaloperator_;
		LogicOP* logicop_;
	public:
		LogicOPRule2(){}
		LogicOPRule2( UnitaryLogicalOperator* unitarylogicaloperator,LogicOP* logicop):LogicOP(),unitarylogicaloperator_(unitarylogicaloperator),logicop_(logicop){}
		virtual ~LogicOPRule2()
		{
			delete unitarylogicaloperator;
			delete logicop;
		}
		LogicOPRule2(const LogicOPRule2& logicoprule2):LogicOP(logicoprule2),unitarylogicaloperator_(logicop->unitarylogicaloperator_),logicop_(logicop->logicop_){}
		void set_unitarylogicaloperator(UnitaryLogicalOperator* unitarylogicaloperator)
		{
			unitarylogicaloperator_ = unitarylogicaloperator;
		}
		const UnitaryLogicalOperator unitarylogicaloperator const ()
		{
			return unitarylogicaloperator_;
		}
		void set_logicop(LogicOP* logicop)
		{
			logicop_ = logicop;
		}
		const LogicOP logicop const ()
		{
			return logicop_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif