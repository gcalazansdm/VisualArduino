#ifndef PARAMETERRULE3_H
#define PARAMETERRULE3_H

#include "Parameter.h"
#include "Var.h"

class ParameterRule3 : public Parameter
{
	private:
		Var* var_;
	public:
		ParameterRule3(){}
		ParameterRule3( Var* var):Parameter(),var_(var){}
		virtual ~ParameterRule3()
		{
			delete var;
		}
		ParameterRule3(const ParameterRule3& parameter):Parameter(parameter),var_(parameter->var_){}
		void set_var(Var* var)
		{
			var_ = var;
		}
		const Var var const ()
		{
			return var_;
		}
}
#endif