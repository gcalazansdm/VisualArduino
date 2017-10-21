#ifndef VARIABLESTYPESRULE2_H
#define VARIABLESTYPESRULE2_H

#include "VariablesTypes.h"

class VariablesTypesRule2 : public VariablesTypes
{
	private:
		Const int t_int_= int;
	public:
		VariablesTypesRule2(){}
		VariablesTypesRule2( ):VariablesTypes(){}
		virtual ~VariablesTypesRule2()
		{
		}
		VariablesTypesRule2(const VariablesTypesRule2& variablestypes):VariablesTypes(variablestypes){}
		int t_int const ()
		{
			return t_int_;
		}
}
#endif