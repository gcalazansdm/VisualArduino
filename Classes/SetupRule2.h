#ifndef SETUPRULE2_H
#define SETUPRULE2_H

#include "Setup.h"
#include "MainBody.h"

class SetupRule2 : public Setup
{
	private:
		MainBody* mainbody_;
	public:
		SetupRule2( MainBody* mainbody):Setup(),mainbody_(mainbody){}
		virtual ~SetupRule2()
		{
			delete mainbody_;
		}
		SetupRule2(const SetupRule2& setuprule2):Setup(setuprule2),mainbody_(setuprule2.mainbody_){}//ol�
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		}
		const MainBody* const mainbody()
		{
			return mainbody_;
		}
		void accept(Visitor *v);
};
#endif