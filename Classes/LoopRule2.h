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
		LoopRule2( MainBody* mainbody,Loop* loop):Loop(),mainbody_(mainbody),loop_(loop){}
		virtual ~LoopRule2()
		{
			delete mainbody_;
			delete loop_;
		}
		LoopRule2(const LoopRule2& looprule2):Loop(looprule2),mainbody_(looprule2.mainbody_),loop_(looprule2.loop_){}//olá
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		}
		MainBody* mainbody()
		{
			return mainbody_;
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