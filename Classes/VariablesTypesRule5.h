#ifndef VARIABLESTYPESRULE5_H
#define VARIABLESTYPESRULE5_H

#include "VariablesTypes.h"

class VariablesTypesRule5 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule5( ):VariablesTypes(){}
		virtual ~VariablesTypesRule5()
		{
		}
		VariablesTypesRule5(const VariablesTypesRule5& variablestypesrule5):VariablesTypes(variablestypesrule5){}//ol�
		void accept(Visitor *v);
};
#endif