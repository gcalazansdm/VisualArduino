#ifndef VARIABLESTYPESRULE3_H
#define VARIABLESTYPESRULE3_H

#include "VariablesTypes.h"

class VariablesTypesRule3 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule3( ):VariablesTypes(){}
		virtual ~VariablesTypesRule3()
		{
		}
		VariablesTypesRule3(const VariablesTypesRule3& variablestypesrule3):VariablesTypes(variablestypesrule3){}//olá
		void accept(Visitor *v);
};
#endif