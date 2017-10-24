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
		LogicOP* logicop_;
	public:
		LogicOPRule1(){}
		LogicOPRule1( LogicOP* logicop,BinaryLogicalOperator* binarylogicaloperator,LogicOP* logicop):LogicOP(),logicop_(logicop),binarylogicaloperator_(binarylogicaloperator),logicop_(logicop){}
		virtual ~LogicOPRule1()
		{
			delete logicop;
			delete binarylogicaloperator;
			delete logicop;
		}
		LogicOPRule1(const LogicOPRule1& logicoprule1):LogicOP(logicoprule1),logicop_(logicop->logicop_),binarylogicaloperator_(logicop->binarylogicaloperator_),logicop_(logicop->logicop_){}
		void set_logicop(LogicOP* logicop)
		{
			logicop_ = logicop;
		}
		const LogicOP logicop const ()
		{
			return logicop_;
		}
		void set_binarylogicaloperator(BinaryLogicalOperator* binarylogicaloperator)
		{
			binarylogicaloperator_ = binarylogicaloperator;
		}
		const BinaryLogicalOperator binarylogicaloperator const ()
		{
			return binarylogicaloperator_;
		}
		void set_logicop(LogicOP* logicop)
		{
			logicop_ = logicop;
		}
		const LogicOP logicop const ()
		{
			return logicop_;
		}
}
#endif