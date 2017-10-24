#ifndef LOOPRULE2_H
#define LOOPRULE2_H

#include "Loop.h"
#include "MainBody.h"
#include "Loop.h"

class LoopRule2 : public Loop
{
	private:
		Const std::string a_loop_= "repeticao";
		Const char a_lpar_= '(';
		Const char a_rpar_= ')';
		Const char a_rkey_= '}';
		MainBody* mainbody_;
		Loop* loop_;
		Const char a_lkey_= '{';
	public:
		LoopRule2(){}
		LoopRule2( MainBody* mainbody,Loop* loop):Loop(),mainbody_(mainbody),loop_(loop){}
		virtual ~LoopRule2()
		{
			delete mainbody;
			delete loop;
		}
		LoopRule2(const LoopRule2& looprule2):Loop(looprule2),mainbody_(loop->mainbody_),loop_(loop->loop_){}
		std::string a_loop const ()
		{
			return a_loop_;
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
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		}
		const MainBody mainbody const ()
		{
			return mainbody_;
		}
		void set_loop(Loop* loop)
		{
			loop_ = loop;
		}
		const Loop loop const ()
		{
			return loop_;
		}
		char a_lkey const ()
		{
			return a_lkey_;
		}
}
#endif