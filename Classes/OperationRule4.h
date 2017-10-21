#ifndef OPERATIONRULE4_H
#define OPERATIONRULE4_H

#include "Operation.h"
#include "Values.h"
#include "L_DEC.h"

class OperationRule4 : public Operation
{
	private:
		Values* values_;
		L_DEC* l_dec_;
	public:
		OperationRule4(){}
		OperationRule4( Values* values,L_DEC* l_dec):Operation(),values_(values),l_dec_(l_dec){}
		virtual ~OperationRule4()
		{
			delete values;
			delete l_dec;
		}
		OperationRule4(const OperationRule4& operation):Operation(operation),values_(operation->values_),l_dec_(operation->l_dec_){}
		void set_values(Values* values)
		{
			values_ = values;
		}
		const Values values const ()
		{
			return values_;
		}
		void set_l_dec(L_DEC* l_dec)
		{
			l_dec_ = l_dec;
		}
		const L_DEC l_dec const ()
		{
			return l_dec_;
		}
}
#endif