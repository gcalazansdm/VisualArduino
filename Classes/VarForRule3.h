#ifndef VARFORRULE3_H
#define VARFORRULE3_H

#include "VarFor.h"

class VarForRule3 : public VarFor
{
	private:
	public:
		VarForRule3(){}
		VarForRule3():VarFor(){}
		virtual ~VarForRule3()
		{
		}
		VarForRule3(const VarForRule3& varforrule3):VarFor(varforrule3){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif