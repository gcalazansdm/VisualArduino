#ifndef FUNCTIONRULE1_H
#define FUNCTIONRULE1_H

#include "Function.h"
#include "VariablesTypes.h"
#include <string>
#include "Parameter.h"
#include "Body.h"

class FunctionRule1 : public Function
{
	private:
		VariablesTypes* variablestypes_;
		std::string l_id_;
		Parameter* parameters_;
		Body* body_;
	public:
		FunctionRule1( VariablesTypes* variablestypes,std::string l_id,Parameter* parameters,Body* body):Function(),variablestypes_(variablestypes),l_id_(l_id),parameters_(parameters),body_(body){}
		virtual ~FunctionRule1()
		{
			delete variablestypes_;
			delete parameters_;
			delete body_;
		}
		FunctionRule1(const FunctionRule1& functionrule1):Function(functionrule1),variablestypes_(functionrule1.variablestypes_),l_id_(functionrule1.l_id_),parameters_(functionrule1.parameters_),body_(functionrule1.body_){}//olá
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		VariablesTypes* variablestypes()
		{
			return variablestypes_;
		}
		void set_l_id(std::string l_id)
		{
			l_id_ = l_id;
		}
		std::string l_id()
		{
			return l_id_;
		}
		void set_parameters(Parameter* parameters)
		{
			parameters_ = parameters;
		}
		Parameter* parameters()
		{
			return parameters_;
		}
		void set_body(Body* body)
		{
			body_ = body;
		}
		Body* body()
		{
			return body_;
		}
		void accept(Visitor *v);
};
#endif
