#ifndef MAINBODYRULE5_H
#define MAINBODYRULE5_H

#include "MainBody.h"
#include "VariablesTypes.h"
#include "Parameters.h"

class MainBodyRule5 : public MainBody
{
	private:
		Const std::string t_func_= "funcao";
		VariablesTypes* variablestypes_;
		std::string l_id_;
		Parameters* parameters_;
		Const char a_semicolon_= ';';
	public:
		MainBodyRule5(){}
		MainBodyRule5( VariablesTypes* variablestypes,l_id l_id,Parameters* parameters):MainBody(),variablestypes_(variablestypes),l_id_(l_id),parameters_(parameters){}
		virtual ~MainBodyRule5()
		{
			delete variablestypes;
			delete parameters;
		}
		MainBodyRule5(const MainBodyRule5& mainbody):MainBody(mainbody),variablestypes_(mainbody->variablestypes_),parameters_(mainbody->parameters_){}
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