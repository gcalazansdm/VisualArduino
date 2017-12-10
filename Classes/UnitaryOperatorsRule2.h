#ifndef UNITARYOPERATORSRULE2_H
#define UNITARYOPERATORSRULE2_H

#include "UnitaryOperators.h"
#include "Values.h"

class UnitaryOperatorsRule2 : public UnitaryOperators
{
	private:
		Values* values_;
	public:
		UnitaryOperatorsRule2(){}
		UnitaryOperatorsRule2( Values* values):UnitaryOperators(),values_(values){}
		virtual ~UnitaryOperatorsRule2()
		{
			delete values;
		}
		UnitaryOperatorsRule2(const UnitaryOperatorsRule2& unitaryoperatorsrule2):UnitaryOperators(unitaryoperatorsrule2),values_(unitaryoperators->values_){}
		void set_values(Values* values)
		{
			values_ = values;
		}
		const Values values const ()
		{
			return values_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif