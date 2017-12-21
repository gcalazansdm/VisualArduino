#ifndef FUNCTIONRULE2_H
#define FUNCTIONRULE2_H

#include "Function.h"
#include "VariablesTypes.h"
#include "Parameters.h"

class FunctionRule2 : public Function
{
	private:
		VariablesTypes* variablestypes_;
		Parameters* parameters_;
	public:
		FunctionRule2( VariablesTypes* variablestypes,Parameters* parameters):Function(),variablestypes_(variablestypes),parameters_(parameters){}
		virtual ~FunctionRule2()
		{
			delete variablestypes_;
			delete parameters_;
		}
		FunctionRule2(const FunctionRule2& functionrule2):Function(functionrule2),variablestypes_(functionrule2.variablestypes_),parameters_(functionrule2.parameters_){}//olá
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		const VariablesTypes* const variablestypes()
		{
			return variablestypes_;
		}
		void set_parameters(Parameters* parameters)
		{
			parameters_ = parameters;
		}
		const Parameters* const parameters()
		{
			return parameters_;
		}
		void accept(Visitor *v);
};
#endif