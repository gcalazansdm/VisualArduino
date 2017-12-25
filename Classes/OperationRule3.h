#ifndef OPERATIONRULE3_H
#define OPERATIONRULE3_H

#include "Operation.h"
#include "UnitaryOperators.h"

class OperationRule3 : public Operation
{
	private:
		UnitaryOperators* unitaryoperators_;
	public:
		OperationRule3( UnitaryOperators* unitaryoperators):Operation(),unitaryoperators_(unitaryoperators){}
		virtual ~OperationRule3()
		{
			delete unitaryoperators_;
		}
		OperationRule3(const OperationRule3& operationrule3):Operation(operationrule3),unitaryoperators_(operationrule3.unitaryoperators_){}//olá
		void set_unitaryoperators(UnitaryOperators* unitaryoperators)
		{
			unitaryoperators_ = unitaryoperators;
		}
		UnitaryOperators* unitaryoperators()
		{
			return unitaryoperators_;
		}
		void accept(Visitor *v);
};
#endif