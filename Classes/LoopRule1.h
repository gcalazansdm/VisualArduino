#ifndef LOOPRULE1_H
#define LOOPRULE1_H

#include "Loop.h"
#include <string>
#include "Loop.h"

class LoopRule1 : public Loop
{
	private:
		Loop* loop_;
	public:
		LoopRule1(){}
		LoopRule1( Loop* loop):Loop(),loop_(loop){}
		virtual ~LoopRule1()
		{
			delete loop;
		}
		LoopRule1(const LoopRule1& looprule1):Loop(looprule1),loop_(loop->loop_){}
		void set_loop(Loop* loop)
		{
			loop_ = loop;
		}
		const Loop loop const ()
		{
			return loop_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif