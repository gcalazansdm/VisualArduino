#ifndef VARIABLESTYPESRULE5_H
#define VARIABLESTYPESRULE5_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule5 : public VariablesTypes
{
	private:
		Const std::string t_string_= string;
	public:
		VariablesTypesRule5(){}
		VariablesTypesRule5():VariablesTypes(){}
		virtual ~VariablesTypesRule5()
		{
		}
		VariablesTypesRule5(const VariablesTypesRule5& variablestypesrule5):VariablesTypes(variablestypesrule5){}
		std::string t_string const ()
		{
			return t_string_;
		}
}
#endif