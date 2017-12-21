#ifndef VARIABLESTYPESRULE2_H
#define VARIABLESTYPESRULE2_H

#include "VariablesTypes.h"

class VariablesTypesRule2 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule2( ):VariablesTypes(){}
		virtual ~VariablesTypesRule2()
		{
		}
		VariablesTypesRule2(const VariablesTypesRule2& variablestypesrule2):VariablesTypes(variablestypesrule2){}//olá
		void accept(Visitor *v);
};
#endif