#ifndef MAINARDUINO_H
#define MAINARDUINO_H

#include "Node.h"
#include "Setup.h"
#include "Loop.h"

class MainArduino : public Node
{
	private:
		Setup* setup_;
		Const char a_semicolon_= ';';
		Loop* loop_;
		Const char a_semicolon_= ';';
	public:
		MainArduino(){}
		MainArduino( Setup* setup,Loop* loop):Node(),setup_(setup),loop_(loop){}
		virtual ~MainArduino()
		{
			delete setup;
			delete loop;
		}
		MainArduino(const MainArduino& mainarduino):Node(mainarduino),setup_(mainarduino->setup_),loop_(mainarduino->loop_){}
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