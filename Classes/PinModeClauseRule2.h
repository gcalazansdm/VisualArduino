#ifndef PINMODECLAUSERULE2_H
#define PINMODECLAUSERULE2_H

#include "PinModeClause.h"
#include "T_PINMODE.h"
#include "Values.h"

class PinModeClauseRule2 : public PinModeClause
{
	private:
		T_PINMODE* t_pinmode_;
		Values* values_;
	public:
		PinModeClauseRule2(){}
		PinModeClauseRule2( T_PINMODE* t_pinmode,Values* values):PinModeClause(),t_pinmode_(t_pinmode),values_(values){}
		virtual ~PinModeClauseRule2()
		{
			delete t_pinmode;
			delete values;
		}
		PinModeClauseRule2(const PinModeClauseRule2& pinmodeclauserule2):PinModeClause(pinmodeclauserule2),t_pinmode_(pinmodeclause->t_pinmode_),values_(pinmodeclause->values_){}
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