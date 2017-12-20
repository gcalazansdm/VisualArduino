#ifndef MAINBODYRULE4_H
#define MAINBODYRULE4_H

#include "MainBody.h"
#include "Var.h"

class MainBodyRule4 : public MainBody
{
	private:
		Var* var_;
	public:
		MainBodyRule4( Var* var):MainBody(),var_(var){};
		virtual ~MainBodyRule4()
		{
			delete var;
		};
		MainBodyRule4(const MainBodyRule4& mainbodyrule4):MainBody(mainbodyrule4),var_(mainbodyrule4.var()){};//olá
		void set_var(Var* var)
		{
			var_ = var;
		};
		const Var* const var()
		{
			return var_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif