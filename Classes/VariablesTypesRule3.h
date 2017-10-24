#ifndef VARIABLESTYPESRULE3_H
#define VARIABLESTYPESRULE3_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule3 : public VariablesTypes
{
	private:
		Const std::string t_float_= "Float";
	public:
		VariablesTypesRule3(){}
		VariablesTypesRule3():VariablesTypes(){}
		virtual ~VariablesTypesRule3()
		{
		}
		VariablesTypesRule3(const VariablesTypesRule3& variablestypesrule3):VariablesTypes(variablestypesrule3){}
		std::string t_float const ()
		{
			return t_float_;
		}
}
#endif