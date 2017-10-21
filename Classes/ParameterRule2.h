#ifndef PARAMETERRULE2_H
#define PARAMETERRULE2_H

#include "Parameter.h"

class ParameterRule2 : public Parameter
{
	private:
		Const char a_lpar_= '(';
		Const char a_rpar_= ')';
	public:
		ParameterRule2(){}
		ParameterRule2():Parameter(){}
		virtual ~ParameterRule2()
		{
		}
		ParameterRule2(const ParameterRule2& parameter):Parameter(parameter){}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
		}
}
#endif