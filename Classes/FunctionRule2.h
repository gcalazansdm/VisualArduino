#ifndef FUNCTIONRULE2_H
#define FUNCTIONRULE2_H

#include "Function.h"
#include "VariablesTypes.h"
#include "Parameters.h"

class FunctionRule2 : public Function
{
	private:
		Const std::string t_func_= "funcao";
		VariablesTypes* variablestypes_;
		std::string l_id_;
		Parameters* parameters_;
		Const char a_semicolon_= ';';
	public:
		FunctionRule2(){}
		FunctionRule2( VariablesTypes* variablestypes,l_id l_id,Parameters* parameters):Function(),variablestypes_(variablestypes),l_id_(l_id),parameters_(parameters){}
		virtual ~FunctionRule2()
		{
			delete variablestypes;
			delete parameters;
		}
		FunctionRule2(const FunctionRule2& functionrule2):Function(functionrule2),variablestypes_(function->variablestypes_),parameters_(function->parameters_){}
		std::string t_func const ()
		{
			return t_func_;
		}
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		const VariablesTypes variablestypes const ()
		{
			return variablestypes_;
		}
		void set_l_id(std::string* l_id)
		{
			l_id_ = l_id;
		}
		std::string l_id const ()
		{
			return l_id_;
		}
		void set_parameters(Parameters* parameters)
		{
			parameters_ = parameters;
		}
		const Parameters parameters const ()
		{
			return parameters_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
}
#endif