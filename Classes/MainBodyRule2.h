#ifndef MAINBODYRULE2_H
#define MAINBODYRULE2_H

#include "MainBody.h"
#include "Var.h"
#include "MainBody.h"

class MainBodyRule2 : public MainBody
{
	private:
		Var* var_;
		MainBody* mainbody_;
	public:
		MainBodyRule2( Var* var,MainBody* mainbody):MainBody(),var_(var),mainbody_(mainbody){}
		virtual ~MainBodyRule2()
		{
			delete var_;
			delete mainbody_;
		}
		MainBodyRule2(const MainBodyRule2& mainbodyrule2):MainBody(mainbodyrule2),var_(mainbodyrule2.var_),mainbody_(mainbodyrule2.mainbody_){}//olá
		void set_var(Var* var)
		{
			var_ = var;
		}
		const Var* const var()
		{
			return var_;
		}
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