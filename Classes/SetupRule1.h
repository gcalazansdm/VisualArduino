#ifndef SETUPRULE1_H
#define SETUPRULE1_H

#include "Setup.h"
#include <string>

class SetupRule1 : public Setup
{
	private:
		Const std::string a_setup_= "inicio";
		Const char a_lpar_= '(';
		Const char a_rpar_= ')';
		Const char a_rkey_= '}';
		Const char a_lkey_= '{';
	public:
		SetupRule1(){}
		SetupRule1():Setup(){}
		virtual ~SetupRule1()
		{
		}
		SetupRule1(const SetupRule1& setuprule1):Setup(setuprule1){}
		std::string a_setup const ()
		{
			return a_setup_;
		}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
		}
		char a_rkey const ()
		{
			return a_rkey_;
		}
		char a_lkey const ()
		{
			return a_lkey_;
		}
}
#endif