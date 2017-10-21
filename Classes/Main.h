#ifndef MAIN_H
#define MAIN_H

#include "Node.h"

class Main : public Node
{
	private:
		Setup* setup_;
		Const char a_semicolon_= ';';
		Loop* loop_;
		Const char a_semicolon_= ';';
	public:
		Main(){}
		Main( Setup* setup,Loop* loop):Main(),setup_(setup),loop_(loop){}
		virtual ~Main()
		{
			delete setup;
			delete loop;
		}
		Main(const Main& main):Main(main),setup_(main->setup_),loop_(main->loop_){}
		void set_setup(Setup* setup)
		{
			setup_ = setup;
		}
		const Setup setup const ()
		{
			return setup_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
		void set_loop(Loop* loop)
		{
			loop_ = loop;
		}
		const Loop loop const ()
		{
			return loop_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
}
#endif