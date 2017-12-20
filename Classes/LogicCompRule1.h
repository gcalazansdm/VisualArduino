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
		LogicCompRule1( Eq* eq,BinaryCompOperator* binarycompoperator,Eq* eq):LogicComp(),eq_(eq),binarycompoperator_(binarycompoperator),eq_(eq){};
		virtual ~LogicCompRule1()
		{
			delete eq;
			delete binarycompoperator;
			delete eq;
		};
		LogicCompRule1(const LogicCompRule1& logiccomprule1):LogicComp(logiccomprule1),eq_(logiccomprule1.eq()),binarycompoperator_(logiccomprule1.binarycompoperator()),eq_(logiccomprule1.eq()){};//olá
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		};
		const Eq* const eq()
		{
			return eq_;
		};
		void set_binarycompoperator(BinaryCompOperator* binarycompoperator)
		{
			binarycompoperator_ = binarycompoperator;
		};
		const BinaryCompOperator* const binarycompoperator()
		{
			return binarycompoperator_;
		};
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		};
		const Eq* const eq()
		{
			return eq_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif