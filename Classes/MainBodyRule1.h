#ifndef MAINBODYRULE1_H
#define MAINBODYRULE1_H

#include "MainBody.h"
#include "Function.h"

class MainBodyRule1 : public MainBody
{
	private:
		Function* f_;
		MainBody* mainBody_;
	public:
		MainBodyRule1():f_(NULL) mainBody_(NULL){}
		MainBodyRule1(Function* f,MainBody* mainBody): f_(f), mainBody_(mainBody){}
		virtual	~MainBodyRule1(){
			delete f_;
			delete mainBody_;
		}
		MainBodyRule1(const MainBodyRule1& t): f_(t.f_), mainBody_(t->mainBody_), MainBody(t)
		{}
		void set_F_(Function& f)
		{
            f_ = f;
        }
        void set_MainBody(MainBody& mainBody)
        {
            mainBody_ = mainBody;
        }
		const Function* f_() const 
		{
			return f_;
		}		
		const MainBody* mainBody_() const 
		{
			return mainBody_;
		}		
}


#endif