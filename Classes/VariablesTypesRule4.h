#ifndef VARIABLESTYPESRULE4_H
#define VARIABLESTYPESRULE4_H

#include "VariablesTypes.h"

class VariablesTypesRule4 : public VariablesTypes
{
	private:
		Const char t_char_= char;
	public:
		VariablesTypesRule4(){}
		VariablesTypesRule4( ):VariablesTypes(){}
		virtual ~VariablesTypesRule4()
		{
		}
		VariablesTypesRule4(const VariablesTypesRule4& variablestypes):VariablesTypes(variablestypes){}
		char t_char const ()
		{
			return t_char_;
		}
}
#endif