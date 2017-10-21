#ifndef DIGITALWRITECLAUSERULE2_H
#define DIGITALWRITECLAUSERULE2_H

#include "DigitalWriteClause.h"
#include "T_DIGITALWRITE.h"
#include "Values.h"
#include "A_SEMICOLONIfElseClause.h"

class DigitalWriteClauseRule2 : public DigitalWriteClause
{
	private:
		T_DIGITALWRITE* t_digitalwrite_;
		Const char a_lpar_= '(';
		Values* values_;
		Const std::string t_int_= "int";
		Const char a_comma_= ',';
		Const std::string a_low_= "BAIXO";
		Const char a_rpar_= ')';
		A_SEMICOLONIfElseClause* a_semicolonifelseclause_;
	public:
		DigitalWriteClauseRule2(){}
		DigitalWriteClauseRule2( T_DIGITALWRITE* t_digitalwrite,Values* values,A_SEMICOLONIfElseClause* a_semicolonifelseclause):DigitalWriteClause(),t_digitalwrite_(t_digitalwrite),values_(values),a_semicolonifelseclause_(a_semicolonifelseclause){}
		virtual ~DigitalWriteClauseRule2()
		{
			delete t_digitalwrite;
			delete values;
			delete a_semicolonifelseclause;
		}
		DigitalWriteClauseRule2(const DigitalWriteClauseRule2& digitalwriteclause):DigitalWriteClause(digitalwriteclause),t_digitalwrite_(digitalwriteclause->t_digitalwrite_),values_(digitalwriteclause->values_),a_semicolonifelseclause_(digitalwriteclause->a_semicolonifelseclause_){}
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
		void set_a_semicolonifelseclause(A_SEMICOLONIfElseClause* a_semicolonifelseclause)
		{
			a_semicolonifelseclause_ = a_semicolonifelseclause;
		}
		const A_SEMICOLONIfElseClause a_semicolonifelseclause const ()
		{
			return a_semicolonifelseclause_;
		}
}
#endif