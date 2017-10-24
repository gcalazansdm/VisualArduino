#ifndef MAINBODYRULE1_H
#define MAINBODYRULE1_H

#include "MainBody.h"
#include "Function.h"
#include "MainBody.h"

class MainBodyRule1 : public MainBody
{
	private:
		Function* function_;
		MainBody* mainbody_;
	public:
		MainBodyRule1(){}
		MainBodyRule1( Function* function,MainBody* mainbody):MainBody(),function_(function),mainbody_(mainbody){}
		virtual ~MainBodyRule1()
		{
			delete function;
			delete mainbody;
		}
		MainBodyRule1(const MainBodyRule1& mainbodyrule1):MainBody(mainbodyrule1),function_(mainbody->function_),mainbody_(mainbody->mainbody_){}
		void set_function(Function* function)
		{
			function_ = function;
		}
		const Function function const ()
		{
			return function_;
		}
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		}
		const MainBody mainbody const ()
		{
			return mainbody_;
		}
}
#endif