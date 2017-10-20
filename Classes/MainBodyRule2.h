#ifndef MAINBODYRULE1_H
#define MAINBODYRULE1_H

#include "MainBody.h"
#include "Var.h"

class MainBodyRule2 : public MainBody
{
	private:
		Var* v_;
		MainBody* mainBody_;
		const char semicolon_ = ';';
	public:
		MainBodyRule2():v_(NULL) mainBody_(NULL){}
		MainBodyRule2(Var* v,MainBody* mainBody): v_(v), mainBody_(mainBody){}
		virtual	~MainBodyRule2()
		{
			delete v_;
			delete mainBody_;
		}
		MainBodyRule2(const MainBodyRule2& t): v_(t.v_), mainBody_(t.mainBody_)
		{}
		void set_V_(Var& v)
		{
            v_ = v;
        }
        void set_mainBody_(MainBody& mainBody)
        {
            mainBody_ = mainBody;
        }
		const Var* v_() const 
		{
			return v_;
		}		
		const MainBody* mainBody_() const 
		{
			return mainBody_;
		}
		const char semicolon_() const 
		{
			return semicolon_;
		}		
}


#endif