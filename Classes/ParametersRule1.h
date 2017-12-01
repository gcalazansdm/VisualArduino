#ifndef PARAMETERSRULE1_H
#define PARAMETERSRULE1_H

#include "Parameters.h"
#include "Var.h"
#include "Parameters.h"

class ParametersRule1 : public Parameters
{
	private:
		Var* var_;
		Parameters* parameters_;
	public:
		ParametersRule1(){}
		ParametersRule1( Var* var,Parameters* parameters):Parameters(),var_(var),parameters_(parameters){}
		virtual ~ParametersRule1()
		{
			delete var;
			delete parameters;
		}
		ParametersRule1(const ParametersRule1& parametersrule1):Parameters(parametersrule1),var_(parameters->var_),parameters_(parameters->parameters_){}
		void set_var(Var* var)
		{
			var_ = var;
		}
		const Var var const ()
		{
			return var_;
		}
		void set_parameters(Parameters* parameters)
		{
			parameters_ = parameters;
		}
		const Parameters parameters const ()
		{
			return parameters_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif