#ifndef UNITARYOPERATORSRULE1_H
#define UNITARYOPERATORSRULE1_H

#include "UnitaryOperators.h"
#include "Values.h"

class UnitaryOperatorsRule1 : public UnitaryOperators
{
	private:
		Values* values_;
	public:
		UnitaryOperatorsRule1( Values* values):UnitaryOperators(),values_(values){}
		virtual ~UnitaryOperatorsRule1()
		{
			delete values_;
		}
		UnitaryOperatorsRule1(const UnitaryOperatorsRule1& unitaryoperatorsrule1):UnitaryOperators(unitaryoperatorsrule1),values_(unitaryoperatorsrule1.values_){}//olá
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