#ifndef OPERATIONRULE1_H
#define OPERATIONRULE1_H

#include "Operation.h"
#include "Eq.h"

class OperationRule1 : public Operation
{
	private:
		Eq* eq_;
	public:
		OperationRule1( Eq* eq):Operation(),eq_(eq){}
		virtual ~OperationRule1()
		{
			delete eq_;
		}
		OperationRule1(const OperationRule1& operationrule1):Operation(operationrule1),eq_(operationrule1.eq_){}//olá
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		const Eq* const eq()
		{
			return eq_;
		}
		void accept(Visitor *v);
};
#endif