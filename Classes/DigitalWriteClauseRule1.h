#ifndef DIGITALWRITECLAUSERULE1_H
#define DIGITALWRITECLAUSERULE1_H

#include "DigitalWriteClause.h"
#include "T_DIGITALWRITE.h"
#include "Values.h"
#include <string>

class DigitalWriteClauseRule1 : public DigitalWriteClause
{
	private:
		T_DIGITALWRITE* t_digitalwrite_;
		Values* values_;
	public:
		DigitalWriteClauseRule1(){}
		DigitalWriteClauseRule1( T_DIGITALWRITE* t_digitalwrite,Values* values):DigitalWriteClause(),t_digitalwrite_(t_digitalwrite),values_(values){}
		virtual ~DigitalWriteClauseRule1()
		{
			delete t_digitalwrite;
			delete values;
		}
		DigitalWriteClauseRule1(const DigitalWriteClauseRule1& digitalwriteclauserule1):DigitalWriteClause(digitalwriteclauserule1),t_digitalwrite_(digitalwriteclause->t_digitalwrite_),values_(digitalwriteclause->values_){}
		void set_t_digitalwrite(T_DIGITALWRITE* t_digitalwrite)
		{
			t_digitalwrite_ = t_digitalwrite;
		}
		const T_DIGITALWRITE t_digitalwrite const ()
		{
			return t_digitalwrite_;
		}
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