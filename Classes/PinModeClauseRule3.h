#ifndef PINMODECLAUSERULE3_H
#define PINMODECLAUSERULE3_H

#include "PinModeClause.h"
#include "T_DIGITALWRITE.h"
#include "Values.h"

class PinModeClauseRule3 : public PinModeClause
{
	private:
		T_DIGITALWRITE* t_digitalwrite_;
		Const char a_lpar_= '(';
		Values* values_;
		Const std::string t_int_= "int";
		Const char a_comma_= ',';
		Const std::string a_low_= "BAIXO";
		Const char a_rpar_= ')';
		Const char a_semicolon_= ';';
	public:
		PinModeClauseRule3(){}
		PinModeClauseRule3( T_DIGITALWRITE* t_digitalwrite,Values* values):PinModeClause(),t_digitalwrite_(t_digitalwrite),values_(values){}
		virtual ~PinModeClauseRule3()
		{
			delete t_digitalwrite;
			delete values;
		}
		PinModeClauseRule3(const PinModeClauseRule3& pinmodeclause):PinModeClause(pinmodeclause),t_digitalwrite_(pinmodeclause->t_digitalwrite_),values_(pinmodeclause->values_){}
		void set_t_digitalwrite(T_DIGITALWRITE* t_digitalwrite)
		{
			t_digitalwrite_ = t_digitalwrite;
		}
		const T_DIGITALWRITE t_digitalwrite const ()
		{
			return t_digitalwrite_;
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
		std::string a_low const ()
		{
			return a_low_;
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