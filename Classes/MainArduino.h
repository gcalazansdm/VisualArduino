#ifndef MAINARDUINO_H
#define MAINARDUINO_H

#include "Node.h"
#include "Setup.h"
#include "Loop.h"

class MainArduino : public Node
{
	private:
		Setup* setup_;
		Loop* loop_;
	public:
		MainArduino( Setup* setup,Loop* loop):Node(),setup_(setup),loop_(loop){}
		virtual ~MainArduino()
		{
			delete setup_;
			delete loop_;
		}
		MainArduino(const MainArduino& mainarduino):Node(mainarduino),setup_(mainarduino.setup_),loop_(mainarduino.loop_){}//olá
		void set_setup(Setup* setup)
		{
			setup_ = setup;
		}
		Setup* setup()
		{
			return setup_;
		}
		void set_loop(Loop* loop)
		{
			loop_ = loop;
		}
		Loop* loop()
		{
			return loop_;
		}
		void accept(Visitor *v);
};
#endif