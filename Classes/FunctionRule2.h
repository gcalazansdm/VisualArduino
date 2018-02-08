#ifndef FUNCTIONRULE2_H
#define FUNCTIONRULE2_H

#include "Function.h"
#include "VariablesTypes.h"
#include <string>
#include "Parameter.h"

class FunctionRule2 : public Function
{
	private:
		VariablesTypes* variablestypes_;
		std::string l_id_;
		Parameter* parameters_;
	public:
		FunctionRule2( VariablesTypes* variablestypes,std::string l_id,Parameter* parameters):Function(),variablestypes_(variablestypes),l_id_(l_id),parameters_(parameters){}
		virtual ~FunctionRule2()
		{
			delete variablestypes_;
			delete parameters_;
		}
		FunctionRule2(const FunctionRule2& functionrule2):Function(functionrule2),variablestypes_(functionrule2.variablestypes_),l_id_(functionrule2.l_id_),parameters_(functionrule2.parameters_){}//olá
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
		void accept(Visitor *v);
};
#endif
