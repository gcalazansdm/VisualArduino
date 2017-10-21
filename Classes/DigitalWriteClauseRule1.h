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
		Const char a_lpar_= '(';
		Values* values_;
		Const std::string t_int_= "int";
		Const char a_comma_= ',';
		Const std::string a_high_= "ALTO";
		Const char a_rpar_= ')';
		Const char a_semicolon_= ';';
	public:
		DigitalWriteClauseRule1(){}
		DigitalWriteClauseRule1( T_DIGITALWRITE* t_digitalwrite,Values* values):DigitalWriteClause(),t_digitalwrite_(t_digitalwrite),values_(values){}
		virtual ~DigitalWriteClauseRule1()
		{
			delete t_digitalwrite;
			delete values;
		}
		DigitalWriteClauseRule1(const DigitalWriteClauseRule1& digitalwriteclause):DigitalWriteClause(digitalwriteclause),t_digitalwrite_(digitalwriteclause->t_digitalwrite_),values_(digitalwriteclause->values_){}
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
		std::string a_high const ()
		{
			return a_high_;
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