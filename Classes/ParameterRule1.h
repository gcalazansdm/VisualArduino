#ifndef PARAMETERRULE1_H
#define PARAMETERRULE1_H

#include "Parameter.h"
#include "Parameters.h"

class ParameterRule1 : public Parameter
{
	private:
		Const char a_lpar_= '(';
		Parameters* parameters_;
		Const char a_rpar_= ')';
	public:
		ParameterRule1(){}
		ParameterRule1( Parameters* parameters):Parameter(),parameters_(parameters){}
		virtual ~ParameterRule1()
		{
			delete parameters;
		}
		ParameterRule1(const ParameterRule1& parameter):Parameter(parameter),parameters_(parameter->parameters_){}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		void set_parameters(Parameters* parameters)
		{
			parameters_ = parameters;
		}
		const Parameters parameters const ()
		{
			return parameters_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
		}
}
#endif