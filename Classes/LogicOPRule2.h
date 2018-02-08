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
		LogicOPRule2( UnitaryLogicalOperator* unitarylogicaloperator,LogicOP* logicop):LogicOP(),unitarylogicaloperator_(unitarylogicaloperator),logicop_(logicop){}
		virtual ~LogicOPRule2()
		{
			delete unitarylogicaloperator_;
			delete logicop_;
		}
		LogicOPRule2(const LogicOPRule2& logicoprule2):LogicOP(logicoprule2),unitarylogicaloperator_(logicoprule2.unitarylogicaloperator_),logicop_(logicoprule2.logicop_){}//ol�
		void set_unitarylogicaloperator(UnitaryLogicalOperator* unitarylogicaloperator)
		{
			unitarylogicaloperator_ = unitarylogicaloperator;
		}
		UnitaryLogicalOperator* unitarylogicaloperator()
		{
			return unitarylogicaloperator_;
		}
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