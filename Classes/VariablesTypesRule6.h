#ifndef VARIABLESTYPESRULE6_H
#define VARIABLESTYPESRULE6_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule6 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule6(){}
		VariablesTypesRule6():VariablesTypes(){}
		virtual ~VariablesTypesRule6()
		{
		}
		VariablesTypesRule6(const VariablesTypesRule6& variablestypesrule6):VariablesTypes(variablestypesrule6){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif