#ifndef MAINBODYRULE3_H
#define MAINBODYRULE3_H

#include "MainBody.h"
#include "Function.h"

class MainBodyRule3 : public MainBody
{
	private:
		Function* function_;
	public:
		MainBodyRule3(){}
		MainBodyRule3( Function* function):MainBody(),function_(function){}
		virtual ~MainBodyRule3()
		{
			delete function;
		}
		MainBodyRule3(const MainBodyRule3& mainbodyrule3):MainBody(mainbodyrule3),function_(mainbody->function_){}
		void set_function(Function* function)
		{
			function_ = function;
		}
		const Function function const ()
		{
			return function_;
		}
}
#endif