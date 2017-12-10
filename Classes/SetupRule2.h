#ifndef SETUPRULE2_H
#define SETUPRULE2_H

#include "Setup.h"
#include <string>
#include "MainBody.h"

class SetupRule2 : public Setup
{
	private:
		MainBody* mainbody_;
	public:
		SetupRule2(){}
		SetupRule2( MainBody* mainbody):Setup(),mainbody_(mainbody){}
		virtual ~SetupRule2()
		{
			delete mainbody;
		}
		SetupRule2(const SetupRule2& setuprule2):Setup(setuprule2),mainbody_(setup->mainbody_){}
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		}
		const MainBody mainbody const ()
		{
			return mainbody_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif