#ifndef VARIABLESTYPESRULE2_H
#define VARIABLESTYPESRULE2_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule2 : public VariablesTypes
{
	private:
		Const std::string t_int_= "int";
	public:
		VariablesTypesRule2(){}
		VariablesTypesRule2():VariablesTypes(){}
		virtual ~VariablesTypesRule2()
		{
		}
		VariablesTypesRule2(const VariablesTypesRule2& variablestypesrule2):VariablesTypes(variablestypesrule2){}
		std::string t_int const ()
		{
			return t_int_;
		}
}
#endif