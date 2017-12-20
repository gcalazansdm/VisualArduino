#ifndef VARIABLESTYPESRULE1_H
#define VARIABLESTYPESRULE1_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule1 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule1(){};
		virtual ~VariablesTypesRule1()
		{
		};
		VariablesTypesRule1(const VariablesTypesRule1& variablestypesrule1):VariablesTypes(variablestypesrule1){};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif
