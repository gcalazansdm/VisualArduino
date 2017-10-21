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
		Eq* eq_;
	public:
		LogicCompRule1(){}
		LogicCompRule1( Eq* eq,BinaryCompOperator* binarycompoperator,Eq* eq):LogicComp(),eq_(eq),binarycompoperator_(binarycompoperator),eq_(eq){}
		virtual ~LogicCompRule1()
		{
			delete eq;
			delete binarycompoperator;
			delete eq;
		}
		LogicCompRule1(const LogicCompRule1& logiccomp):LogicComp(logiccomp),eq_(logiccomp->eq_),binarycompoperator_(logiccomp->binarycompoperator_),eq_(logiccomp->eq_){}
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		const Eq eq const ()
		{
			return eq_;
		}
		void set_binarycompoperator(BinaryCompOperator* binarycompoperator)
		{
			binarycompoperator_ = binarycompoperator;
		}
		const BinaryCompOperator binarycompoperator const ()
		{
			return binarycompoperator_;
		}
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		const Eq eq const ()
		{
			return eq_;
		}
}
#endif