#ifndef DIGITALWRITECLAUSERULE2_H
#define DIGITALWRITECLAUSERULE2_H

#include "DigitalWriteClause.h"
#include "T_DIGITALWRITE.h"
#include "Values.h"

class DigitalWriteClauseRule2 : public DigitalWriteClause
{
	private:
		T_DIGITALWRITE* t_digitalwrite_;
		Const char a_lpar_= '(';
		Values* values_;
		Const std::string t_int_= "int";
		Const char a_comma_= '.';
		Const std::string a_low_= "BAIXO";
		Const char a_rpar_= ')';
		Const char a_semicolon_= ';';
	public:
		DigitalWriteClauseRule2(){}
		DigitalWriteClauseRule2( T_DIGITALWRITE* t_digitalwrite,Values* values):DigitalWriteClause(),t_digitalwrite_(t_digitalwrite),values_(values){}
		virtual ~DigitalWriteClauseRule2()
		{
			delete t_digitalwrite;
			delete values;
		}
		DigitalWriteClauseRule2(const DigitalWriteClauseRule2& digitalwriteclauserule2):DigitalWriteClause(digitalwriteclauserule2),t_digitalwrite_(digitalwriteclause->t_digitalwrite_),values_(digitalwriteclause->values_){}
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
		char a_comma const ()
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