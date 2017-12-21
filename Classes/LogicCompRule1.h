#ifndef LOGICCOMPRULE1_H
#define LOGICCOMPRULE1_H

#include "LogicComp.h"
#include "Eq.h"
#include "BinaryCompOperator.h"
#include "Eq.h"

class LogicCompRule1 : public LogicComp
{
	private:
		Eq* eq_;
		BinaryCompOperator* binarycompoperator_;
		Eq* eq0_;
	public:
		LogicCompRule1( Eq* eq,BinaryCompOperator* binarycompoperator,Eq* eq0):LogicComp(),eq_(eq),binarycompoperator_(binarycompoperator),eq0_(eq0){}
		virtual ~LogicCompRule1()
		{
			delete eq_;
			delete binarycompoperator_;
			delete eq0_;
		}
		LogicCompRule1(const LogicCompRule1& logiccomprule1):LogicComp(logiccomprule1),eq_(logiccomprule1.eq_),binarycompoperator_(logiccomprule1.binarycompoperator_),eq0_(logiccomprule1.eq0_){}//olá
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		const Eq* const eq()
		{
			return eq_;
		}
		void set_binarycompoperator(BinaryCompOperator* binarycompoperator)
		{
			binarycompoperator_ = binarycompoperator;
		}
		const BinaryCompOperator* const binarycompoperator()
		{
			return binarycompoperator_;
		}
		void set_eq0(Eq* eq0)
		{
			eq0_ = eq0;
		}
		const Eq* const eq0()
		{
			return eq0_;
		}
		void accept(Visitor *v);
};
#endif