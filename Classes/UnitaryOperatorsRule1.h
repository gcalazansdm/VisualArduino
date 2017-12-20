#ifndef UNITARYOPERATORSRULE1_H
#define UNITARYOPERATORSRULE1_H

#include "UnitaryOperators.h"
#include "Values.h"
#include <string>

class UnitaryOperatorsRule1 : public UnitaryOperators
{
	private:
		Values* values_;
	public:
		UnitaryOperatorsRule1( Values* values):UnitaryOperators(),values_(values){};
		virtual ~UnitaryOperatorsRule1()
		{
			delete values;
		};
		UnitaryOperatorsRule1(const UnitaryOperatorsRule1& unitaryoperatorsrule1):UnitaryOperators(unitaryoperatorsrule1),values_(unitaryoperatorsrule1.values()){};//olá
		void set_values(Values* values)
		{
			values_ = values;
		};
		const Values* const values()
		{
			return values_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif