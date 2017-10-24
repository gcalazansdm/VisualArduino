#ifndef SETUPRULE2_H
#define SETUPRULE2_H

#include "Setup.h"
#include <string>
#include "MainBody.h"

class SetupRule2 : public Setup
{
	private:
		Const std::string a_setup_= "inicio";
		Const char a_lpar_= '(';
		Const char a_rpar_= ')';
		MainBody* mainbody_;
	public:
		SetupRule2(){}
		SetupRule2( MainBody* mainbody):Setup(),mainbody_(mainbody){}
		virtual ~SetupRule2()
		{
			delete mainbody;
		}
		SetupRule2(const SetupRule2& setuprule2):Setup(setuprule2),mainbody_(setup->mainbody_){}
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
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		}
		const MainBody mainbody const ()
		{
			return mainbody_;
		}
}
#endif