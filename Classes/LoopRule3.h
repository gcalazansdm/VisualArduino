#ifndef LOOPRULE3_H
#define LOOPRULE3_H

#include "Loop.h"
#include "MainBody.h"

class LoopRule3 : public Loop
{
	private:
		Const std::string a_setup_= "inicio";
		Const char a_lpar_= '(';
		Const char a_rpar_= ')';
		MainBody* mainbody_;
	public:
		LoopRule3(){}
		LoopRule3( MainBody* mainbody):Loop(),mainbody_(mainbody){}
		virtual ~LoopRule3()
		{
			delete mainbody;
		}
		LoopRule3(const LoopRule3& loop):Loop(loop),mainbody_(loop->mainbody_){}
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