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
		ParametersRule1( Var* var,Parameters* parameters):Parameters(),var_(var),parameters_(parameters){}
		virtual ~ParametersRule1()
		{
			delete var_;
			delete parameters_;
		}
		ParametersRule1(const ParametersRule1& parametersrule1):Parameters(parametersrule1),var_(parametersrule1.var_),parameters_(parametersrule1.parameters_){}//olá
		void set_var(Var* var)
		{
			var_ = var;
		}
		Var* var()
		{
			return var_;
		}
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