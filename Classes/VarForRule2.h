#ifndef VARFORRULE2_H
#define VARFORRULE2_H

#include "VarFor.h"
#include "Operation.h"

class VarForRule2 : public VarFor
{
	private:
		Operation* operation_;
	public:
		VarForRule2(){}
		VarForRule2( Operation* operation):VarFor(),operation_(operation){}
		virtual ~VarForRule2()
		{
			delete operation;
		}
		VarForRule2(const VarForRule2& varforrule2):VarFor(varforrule2),operation_(varfor->operation_){}
		void set_operation(Operation* operation)
		{
			operation_ = operation;
		}
		const Operation operation const ()
		{
			return operation_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif