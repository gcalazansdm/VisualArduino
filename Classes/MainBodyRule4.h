#ifndef MAINBODYRULE4_H
#define MAINBODYRULE4_H

#include "MainBody.h"
#include "Var.h"

class MainBodyRule4 : public MainBody
{
	private:
		Var* v_;
		const char semicolon_ = ';';
	public:
		MainBodyRule4():v_(NULL){}
		MainBodyRule4(Var* v): v_(v){}
		virtual	~MainBodyRule4(){}
		MainBodyRule4(const MainBodyRule4& t): v_(t.v)
		{}
		void set_V_(Var& v)
		{
            v_ = v;
        }
		const Var* v_() const 
		{
			return v_;
		}
		const char semicolon_() const 
		{
			return semicolon_;
		}		
}

#endif