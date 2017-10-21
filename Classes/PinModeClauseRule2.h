#ifndef PINMODECLAUSERULE2_H
#define PINMODECLAUSERULE2_H

#include "PinModeClause.h"
#include "T_PINMODE.h"
#include "Values.h"

class PinModeClauseRule2 : public PinModeClause
{
	private:
		T_PINMODE* t_pinmode_;
		Const char a_lpar_= '(';
		Values* values_;
		Const std::string t_int_= "int";
		Const char a_comma_= ',';
		Const std::string a_out_= "SAIDA";
		Const char a_rpar_= ')';
		Const char a_semicolon_= ';';
	public:
		PinModeClauseRule2(){}
		PinModeClauseRule2( T_PINMODE* t_pinmode,Values* values):PinModeClause(),t_pinmode_(t_pinmode),values_(values){}
		virtual ~PinModeClauseRule2()
		{
			delete t_pinmode;
			delete values;
		}
		PinModeClauseRule2(const PinModeClauseRule2& pinmodeclause):PinModeClause(pinmodeclause),t_pinmode_(pinmodeclause->t_pinmode_),values_(pinmodeclause->values_){}
		void set_t_pinmode(T_PINMODE* t_pinmode)
		{
			t_pinmode_ = t_pinmode;
		}
		const T_PINMODE t_pinmode const ()
		{
			return t_pinmode_;
		}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		void set_values(Values* values)
		{
			values_ = values;
		}
		const Values values const ()
		{
			return values_;
		}
		std::string t_int const ()
		{
			return t_int_;
		}
		' a_comma const ()
		{
			return a_comma_;
		}
		std::string a_out const ()
		{
			return a_out_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
}
#endif