#ifndef VARIABLESTYPESRULE1_H
#define VARIABLESTYPESRULE1_H

#include "VariablesTypes.h"

class VariablesTypesRule1 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule1( ):VariablesTypes(){}
		virtual ~VariablesTypesRule1()
		{
		}
		VariablesTypesRule1(const VariablesTypesRule1& variablestypesrule1):VariablesTypes(variablestypesrule1){}//ol�
		void accept(Visitor *v);
};
#endif