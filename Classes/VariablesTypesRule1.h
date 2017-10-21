#ifndef VARIABLESTYPESRULE1_H
#define VARIABLESTYPESRULE1_H

#include "VariablesTypes.h"

class VariablesTypesRule1 : public VariablesTypes
{
	private:
		Const Double t_double_= Double;
	public:
		VariablesTypesRule1(){}
		VariablesTypesRule1( ):VariablesTypes(){}
		virtual ~VariablesTypesRule1()
		{
		}
		VariablesTypesRule1(const VariablesTypesRule1& variablestypes):VariablesTypes(variablestypes){}
		Double t_double const ()
		{
			return t_double_;
		}
}
#endif