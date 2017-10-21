#ifndef VARIABLESTYPESRULE3_H
#define VARIABLESTYPESRULE3_H

#include "VariablesTypes.h"

class VariablesTypesRule3 : public VariablesTypes
{
	private:
		Const Float t_float_= Float;
	public:
		VariablesTypesRule3(){}
		VariablesTypesRule3( ):VariablesTypes(){}
		virtual ~VariablesTypesRule3()
		{
		}
		VariablesTypesRule3(const VariablesTypesRule3& variablestypes):VariablesTypes(variablestypes){}
		Float t_float const ()
		{
			return t_float_;
		}
}
#endif