#ifndef VARIABLESTYPESRULE1_H
#define VARIABLESTYPESRULE1_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule1 : public VariablesTypes
{
	private:
		Const std::string t_double_= "Double";
	public:
		VariablesTypesRule1(){}
		VariablesTypesRule1():VariablesTypes(){}
		virtual ~VariablesTypesRule1()
		{
		}
		VariablesTypesRule1(const VariablesTypesRule1& variablestypesrule1):VariablesTypes(variablestypesrule1){}
		std::string t_double const ()
		{
			return t_double_;
		}
}
#endif