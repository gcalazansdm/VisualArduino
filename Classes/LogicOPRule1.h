#ifndef LOGICOPRULE1_H
#define LOGICOPRULE1_H

#include "LogicOP.h"
#include "LogicOP.h"
#include "BinaryLogicalOperator.h"
#include "LogicOP.h"

class LogicOPRule1 : public LogicOP
{
	private:
		LogicOP* logicop_;
		BinaryLogicalOperator* binarylogicaloperator_;
		LogicOP* logicop0_;
	public:
		LogicOPRule1( LogicOP* logicop,BinaryLogicalOperator* binarylogicaloperator,LogicOP* logicop0):LogicOP(),logicop_(logicop),binarylogicaloperator_(binarylogicaloperator),logicop0_(logicop0){}
		virtual ~LogicOPRule1()
		{
			delete logicop_;
			delete binarylogicaloperator_;
			delete logicop0_;
		}
		LogicOPRule1(const LogicOPRule1& logicoprule1):LogicOP(logicoprule1),logicop_(logicoprule1.logicop_),binarylogicaloperator_(logicoprule1.binarylogicaloperator_),logicop0_(logicoprule1.logicop0_){}//olá
		void set_logicop(LogicOP* logicop)
		{
			logicop_ = logicop;
		}
		const LogicOP* const logicop()
		{
			return logicop_;
		}
		void set_binarylogicaloperator(BinaryLogicalOperator* binarylogicaloperator)
		{
			binarylogicaloperator_ = binarylogicaloperator;
		}
		const BinaryLogicalOperator* const binarylogicaloperator()
		{
			return binarylogicaloperator_;
		}
		void set_logicop0(LogicOP* logicop0)
		{
			logicop0_ = logicop0;
		}
		const LogicOP* const logicop0()
		{
			return logicop0_;
		}
		void accept(Visitor *v);
};
#endif