#ifndef VARIABLESTYPESRULE4_H
#define VARIABLESTYPESRULE4_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule4 : public VariablesTypes
{
	private:
		Const std::string t_char_= "char";
	public:
		VariablesTypesRule4(){}
		VariablesTypesRule4():VariablesTypes(){}
		virtual ~VariablesTypesRule4()
		{
		}
		VariablesTypesRule4(const VariablesTypesRule4& variablestypesrule4):VariablesTypes(variablestypesrule4){}
		std::string t_char const ()
		{
			return t_char_;
		}
}
#endif