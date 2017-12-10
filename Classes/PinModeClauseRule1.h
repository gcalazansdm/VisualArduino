#ifndef PINMODECLAUSERULE1_H
#define PINMODECLAUSERULE1_H

#include "PinModeClause.h"
#include "T_PINMODE.h"
#include "Values.h"
#include <string>

class PinModeClauseRule1 : public PinModeClause
{
	private:
		T_PINMODE* t_pinmode_;
		Values* values_;
	public:
		PinModeClauseRule1(){}
		PinModeClauseRule1( T_PINMODE* t_pinmode,Values* values):PinModeClause(),t_pinmode_(t_pinmode),values_(values){}
		virtual ~PinModeClauseRule1()
		{
			delete t_pinmode;
			delete values;
		}
		PinModeClauseRule1(const PinModeClauseRule1& pinmodeclauserule1):PinModeClause(pinmodeclauserule1),t_pinmode_(pinmodeclause->t_pinmode_),values_(pinmodeclause->values_){}
		void set_t_pinmode(T_PINMODE* t_pinmode)
		{
			t_pinmode_ = t_pinmode;
		}
		const T_PINMODE t_pinmode const ()
		{
			return t_pinmode_;
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