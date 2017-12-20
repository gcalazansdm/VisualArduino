#ifndef PARAMETERSRULE2_H
#define PARAMETERSRULE2_H

#include "Parameters.h"
#include "Var.h"

class ParametersRule2 : public Parameters
{
	private:
		Var* var_;
	public:
		ParametersRule2(){};
		ParametersRule2( Var* var):Parameters(),var_(var){};
		virtual ~ParametersRule2()
		{
			delete var;
		};
		ParametersRule2(const ParametersRule2& parametersrule2):Parameters(parametersrule2),var_(parameters->var_){};
		void set_var(Var* var)
		{
			var_ = var;
		};
		const Var var const ()
		{
			return var_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif