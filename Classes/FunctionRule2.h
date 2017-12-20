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
		FunctionRule2(){};
		FunctionRule2( VariablesTypes* variablestypes,Parameters* parameters):Function(),variablestypes_(variablestypes),parameters_(parameters){};
		virtual ~FunctionRule2()
		{
			delete variablestypes;
			delete parameters;
		};
		FunctionRule2(const FunctionRule2& functionrule2):Function(functionrule2),variablestypes_(function->variablestypes_),parameters_(function->parameters_){};
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		};
		const VariablesTypes variablestypes const ()
		{
			return variablestypes_;
		};
		void set_parameters(Parameters* parameters)
		{
			parameters_ = parameters;
		};
		const Parameters parameters const ()
		{
			return parameters_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif