#ifndef OPERATIONRULE3_H
#define OPERATIONRULE3_H

#include "Operation.h"
#include "UnitaryOperators.h"

class OperationRule3 : public Operation
{
	private:
		UnitaryOperators* unitaryoperators_;
	public:
		OperationRule3(){}
		OperationRule3( UnitaryOperators* unitaryoperators):Operation(),unitaryoperators_(unitaryoperators){}
		virtual ~OperationRule3()
		{
			delete unitaryoperators;
		}
		OperationRule3(const OperationRule3& operationrule3):Operation(operationrule3),unitaryoperators_(operation->unitaryoperators_){}
		void set_unitaryoperators(UnitaryOperators* unitaryoperators)
		{
			unitaryoperators_ = unitaryoperators;
		}
		const UnitaryOperators unitaryoperators const ()
		{
			return unitaryoperators_;
		}
}
#endif