#ifndef LOOPRULE2_H
#define LOOPRULE2_H

#include "Loop.h"
#include "MainBody.h"
#include "Loop.h"

class LoopRule2 : public Loop
{
	private:
		MainBody* mainbody_;
		Loop* loop_;
	public:
		LoopRule2(){}
		LoopRule2( MainBody* mainbody,Loop* loop):Loop(),mainbody_(mainbody),loop_(loop){}
		virtual ~LoopRule2()
		{
			delete mainbody;
			delete loop;
		}
		LoopRule2(const LoopRule2& looprule2):Loop(looprule2),mainbody_(loop->mainbody_),loop_(loop->loop_){}
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
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif