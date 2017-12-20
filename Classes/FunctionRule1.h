#ifndef FUNCTIONRULE1_H
#define FUNCTIONRULE1_H

#include "Function.h"
#include <string>
#include "VariablesTypes.h"
#include "Parameters.h"
#include "Body.h"

class FunctionRule1 : public Function
{
	private:
		VariablesTypes* variablestypes_;
		Parameters* parameters_;
		Body* body_;
	public:
		FunctionRule1( VariablesTypes* variablestypes,Parameters* parameters,Body* body):Function(),variablestypes_(variablestypes),parameters_(parameters),body_(body){};
		virtual ~FunctionRule1()
		{
			delete variablestypes;
			delete parameters;
			delete body;
		};
		FunctionRule1(const FunctionRule1& functionrule1):Function(functionrule1),variablestypes_(functionrule1.variablestypes()),parameters_(functionrule1.parameters()),body_(functionrule1.body()){};//olá
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		};
		const VariablesTypes* const variablestypes()
		{
			return variablestypes_;
		};
		void set_parameters(Parameters* parameters)
		{
			parameters_ = parameters;
		};
		const Parameters* const parameters()
		{
			return parameters_;
		};
		void set_body(Body* body)
		{
			body_ = body;
		};
		const Body* const body()
		{
			return body_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif