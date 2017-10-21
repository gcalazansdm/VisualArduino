#ifndef OPERATIONRULE1_H
#define OPERATIONRULE1_H

#include "Operation.h"
#include "Eq.h"

class OperationRule1 : public Operation
{
	private:
		Eq* eq_;
	public:
		OperationRule1(){}
		OperationRule1( Eq* eq):Operation(),eq_(eq){}
		virtual ~OperationRule1()
		{
			delete eq;
		}
		OperationRule1(const OperationRule1& operation):Operation(operation),eq_(operation->eq_){}
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