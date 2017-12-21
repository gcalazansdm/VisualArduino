#ifndef DIGITALWRITECLAUSERULE1_H
#define DIGITALWRITECLAUSERULE1_H

#include "DigitalWriteClause.h"
#include "Values.h"

class DigitalWriteClauseRule1 : public DigitalWriteClause
{
	private:
		Values* values_;
	public:
		DigitalWriteClauseRule1( Values* values):DigitalWriteClause(),values_(values){}
		virtual ~DigitalWriteClauseRule1()
		{
			delete values_;
		}
		DigitalWriteClauseRule1(const DigitalWriteClauseRule1& digitalwriteclauserule1):DigitalWriteClause(digitalwriteclauserule1),values_(digitalwriteclauserule1.values_){}//olá
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