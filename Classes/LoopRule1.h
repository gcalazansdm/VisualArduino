#ifndef LOOPRULE1_H
#define LOOPRULE1_H

#include "Loop.h"
#include "Loop.h"

class LoopRule1 : public Loop
{
	private:
		Loop* loop_;
	public:
		LoopRule1( Loop* loop):Loop(),loop_(loop){}
		virtual ~LoopRule1()
		{
			delete loop_;
		}
		LoopRule1(const LoopRule1& looprule1):Loop(looprule1),loop_(looprule1.loop_){}//olá
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