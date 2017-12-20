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
		MainBodyRule2(){};
		MainBodyRule2( Var* var,MainBody* mainbody):MainBody(),var_(var),mainbody_(mainbody){};
		virtual ~MainBodyRule2()
		{
			delete var;
			delete mainbody;
		};
		MainBodyRule2(const MainBodyRule2& mainbodyrule2):MainBody(mainbodyrule2),var_(mainbody->var_),mainbody_(mainbody->mainbody_){};
		void set_var(Var* var)
		{
			var_ = var;
		};
		const Var var const ()
		{
			return var_;
		};
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		};
		const MainBody mainbody const ()
		{
			return mainbody_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif