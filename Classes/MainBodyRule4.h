#ifndef MAINBODYRULE4_H
#define MAINBODYRULE4_H

#include "MainBody.h"
#include "Var.h"

class MainBodyRule4 : public MainBody
{
	private:
		Var* var_;
		Const char a_semicolon_= ';';
	public:
		MainBodyRule4(){}
		MainBodyRule4( Var* var):MainBody(),var_(var){}
		virtual ~MainBodyRule4()
		{
			delete var;
		}
		MainBodyRule4(const MainBodyRule4& mainbodyrule4):MainBody(mainbodyrule4),var_(mainbody->var_){}
		void set_var(Var* var)
		{
			var_ = var;
		}
		const Var var const ()
		{
			return var_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
}
#endif