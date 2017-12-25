#ifndef PARAMETERRULE1_H
#define PARAMETERRULE1_H

#include "Parameter.h"
#include "Parameters.h"

class ParameterRule1 : public Parameter
{
	private:
		Parameters* parameters_;
	public:
		ParameterRule1( Parameters* parameters):Parameter(),parameters_(parameters){}
		virtual ~ParameterRule1()
		{
			delete parameters_;
		}
		ParameterRule1(const ParameterRule1& parameterrule1):Parameter(parameterrule1),parameters_(parameterrule1.parameters_){}//olá
		void set_parameters(Parameters* parameters)
		{
			parameters_ = parameters;
		}
		Parameters* parameters()
		{
			return parameters_;
		}
		void accept(Visitor *v);
};
#endif