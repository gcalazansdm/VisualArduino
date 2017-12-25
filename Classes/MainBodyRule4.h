#ifndef MAINBODYRULE4_H
#define MAINBODYRULE4_H

#include "MainBody.h"
#include "Var.h"

class MainBodyRule4 : public MainBody
{
	private:
		Var* var_;
	public:
		MainBodyRule4( Var* var):MainBody(),var_(var){}
		virtual ~MainBodyRule4()
		{
			delete var_;
		}
		MainBodyRule4(const MainBodyRule4& mainbodyrule4):MainBody(mainbodyrule4),var_(mainbodyrule4.var_){}//olá
		void set_var(Var* var)
		{
			var_ = var;
		}
		Var* var()
		{
			return var_;
		}
		void accept(Visitor *v);
};
#endif