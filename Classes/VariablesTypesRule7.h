#ifndef VARIABLESTYPESRULE7_H
#define VARIABLESTYPESRULE7_H

#include "VariablesTypes.h"

class VariablesTypesRule7 : public VariablesTypes
{
	private:
		Const Boolean t_bool_= Boolean;
	public:
		VariablesTypesRule7(){}
		VariablesTypesRule7( ):VariablesTypes(){}
		virtual ~VariablesTypesRule7()
		{
		}
		VariablesTypesRule7(const VariablesTypesRule7& variablestypes):VariablesTypes(variablestypes){}
		Boolean t_bool const ()
		{
			return t_bool_;
		}
}
#endif