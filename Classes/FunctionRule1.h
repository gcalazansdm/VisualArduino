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
		FunctionRule1(){};
		FunctionRule1( VariablesTypes* variablestypes,Parameters* parameters,Body* body):Function(),variablestypes_(variablestypes),parameters_(parameters),body_(body){};
		virtual ~FunctionRule1()
		{
			delete variablestypes;
			delete parameters;
			delete body;
		};
		FunctionRule1(const FunctionRule1& functionrule1):Function(functionrule1),variablestypes_(function->variablestypes_),parameters_(function->parameters_),body_(function->body_){};
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
		void set_body(Body* body)
		{
			body_ = body;
		};
		const Body body const ()
		{
			return body_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif