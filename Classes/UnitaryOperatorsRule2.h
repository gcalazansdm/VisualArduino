#ifndef UNITARYOPERATORSRULE2_H
#define UNITARYOPERATORSRULE2_H

#include "UnitaryOperators.h"
#include "Values.h"

class UnitaryOperatorsRule2 : public UnitaryOperators
{
	private:
		Values* values_;
	public:
		UnitaryOperatorsRule2( Values* values):UnitaryOperators(),values_(values){}
		virtual ~UnitaryOperatorsRule2()
		{
			delete values_;
		}
		UnitaryOperatorsRule2(const UnitaryOperatorsRule2& unitaryoperatorsrule2):UnitaryOperators(unitaryoperatorsrule2),values_(unitaryoperatorsrule2.values_){}//olá
		void set_values(Values* values)
		{
			values_ = values;
		}
		const Values* const values()
		{
			return values_;
		}
		void accept(Visitor *v);
};
#endif