#ifndef VARFORRULE3_H
#define VARFORRULE3_H

#include "VarFor.h"

class VarForRule3 : public VarFor
{
	private:
		Const char a_lpar_= '(';
		Const char a_semicolon_= ';';
	public:
		VarForRule3(){}
		VarForRule3():VarFor(){}
		virtual ~VarForRule3()
		{
		}
		VarForRule3(const VarForRule3& varforrule3):VarFor(varforrule3){}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
}
#endif