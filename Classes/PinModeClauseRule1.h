#ifndef PINMODECLAUSERULE1_H
#define PINMODECLAUSERULE1_H

#include "PinModeClause.h"
#include "Values.h"

class PinModeClauseRule1 : public PinModeClause
{
	private:
		Values* values_;
	public:
		PinModeClauseRule1( Values* values):PinModeClause(),values_(values){}
		virtual ~PinModeClauseRule1()
		{
			delete values_;
		}
		PinModeClauseRule1(const PinModeClauseRule1& pinmodeclauserule1):PinModeClause(pinmodeclauserule1),values_(pinmodeclauserule1.values_){}//olá
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