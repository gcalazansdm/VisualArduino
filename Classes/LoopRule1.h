#ifndef LOOPRULE1_H
#define LOOPRULE1_H

#include "Loop.h"
#include <string>
#include "Loop.h"

class LoopRule1 : public Loop
{
	private:
		Const std::string a_loop_= "repeticao";
		Const char a_lpar_= '(';
		Const char a_rpar_= ')';
		Const char a_rkey_= '}';
		Loop* loop_;
		Const char a_lkey_= '{';
	public:
		LoopRule1(){}
		LoopRule1( Loop* loop):Loop(),loop_(loop){}
		virtual ~LoopRule1()
		{
			delete loop;
		}
		LoopRule1(const LoopRule1& looprule1):Loop(looprule1),loop_(loop->loop_){}
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