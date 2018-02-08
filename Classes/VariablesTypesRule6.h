#ifndef VARIABLESTYPESRULE6_H
#define VARIABLESTYPESRULE6_H

#include "VariablesTypes.h"

class VariablesTypesRule6 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule6( ):VariablesTypes(){}
		virtual ~VariablesTypesRule6()
		{
		}
		VariablesTypesRule6(const VariablesTypesRule6& variablestypesrule6):VariablesTypes(variablestypesrule6){}//olá
		void accept(Visitor *v);
};
#endif