#ifndef PARAMETERSRULE2_H
#define PARAMETERSRULE2_H

#include "Parameters.h"
#include "Var.h"

class ParametersRule2 : public Parameters
{
	private:
		Var* var_;
	public:
		ParametersRule2( Var* var):Parameters(),var_(var){}
		virtual ~ParametersRule2()
		{
			delete var_;
		}
		ParametersRule2(const ParametersRule2& parametersrule2):Parameters(parametersrule2),var_(parametersrule2.var_){}//olá
		void set_var(Var* var)
		{
			var_ = var;
		}
		Var* var()
		{
			return var_;
		}
		void accept(Visitor *v);
};
#endif