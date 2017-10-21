#ifndef VARIABLESTYPESRULE6_H
#define VARIABLESTYPESRULE6_H

#include "VariablesTypes.h"

class VariablesTypesRule6 : public VariablesTypes
{
	private:
		Const std::string t_string_= string;
	public:
		VariablesTypesRule6(){}
		VariablesTypesRule6():VariablesTypes(){}
		virtual ~VariablesTypesRule6()
		{
		}
		VariablesTypesRule6(const VariablesTypesRule6& variablestypes):VariablesTypes(variablestypes){}
		std::string t_string const ()
		{
			return t_string_;
		}
}
#endif