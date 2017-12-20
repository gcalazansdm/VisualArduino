#ifndef DIGITALWRITECLAUSERULE2_H
#define DIGITALWRITECLAUSERULE2_H

#include "DigitalWriteClause.h"

#include "Values.h"

class DigitalWriteClauseRule2 : public DigitalWriteClause
{
	private:
		Values* values_;
	public:
		DigitalWriteClauseRule2(){};
		DigitalWriteClauseRule2(Values* values):DigitalWriteClause(),values_(values){};
		virtual ~DigitalWriteClauseRule2()
		{
			delete values;
		};
		DigitalWriteClauseRule2(const DigitalWriteClauseRule2& digitalwriteclauserule2):DigitalWriteClause(digitalwriteclauserule2),values_(digitalwriteclause->values_){};
		void set_values(Values* values)
		{
			values_ = values;
		};
		const Values values const ()
		{
			return values_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif
