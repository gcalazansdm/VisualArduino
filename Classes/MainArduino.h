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
		MainArduino( Setup* setup,Loop* loop):Node(),setup_(setup),loop_(loop){};
		virtual ~MainArduino()
		{
			delete setup;
			delete loop;
		};
		MainArduino(const MainArduino& mainarduino):Node(mainarduino),setup_(mainarduino.setup()),loop_(mainarduino.loop()){};//olá
		void set_setup(Setup* setup)
		{
			setup_ = setup;
		};
		const Setup* const setup()
		{
			return setup_;
		};
		void set_loop(Loop* loop)
		{
			loop_ = loop;
		};
		const Loop* const loop()
		{
			return loop_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif