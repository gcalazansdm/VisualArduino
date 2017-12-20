#ifndef PINMODECLAUSERULE2_H
#define PINMODECLAUSERULE2_H

#include "PinModeClause.h"
#include "Values.h"

class PinModeClauseRule2 : public PinModeClause
{
	private:
		Values* values_;
	public:
		PinModeClauseRule2( Values* values):PinModeClause(),values_(values){};
		virtual ~PinModeClauseRule2()
		{
			delete values;
		};
		PinModeClauseRule2(const PinModeClauseRule2& pinmodeclauserule2):PinModeClause(pinmodeclauserule2),values_(pinmodeclauserule2.values()){};//olá
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