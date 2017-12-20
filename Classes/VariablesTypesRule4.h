#ifndef VARIABLESTYPESRULE4_H
#define VARIABLESTYPESRULE4_H

#include "VariablesTypes.h"
#include <string>

class VariablesTypesRule4 : public VariablesTypes
{
	private:
	public:
		VariablesTypesRule4():VariablesTypes(){};
		virtual ~VariablesTypesRule4()
		{
		};
		VariablesTypesRule4(const VariablesTypesRule4& variablestypesrule4):VariablesTypes(variablestypesrule4){};//olá
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif