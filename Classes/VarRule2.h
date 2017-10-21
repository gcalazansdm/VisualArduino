#ifndef VARRULE2_H
#define VARRULE2_H

#include "Var.h"
#include "VariablesTypes.h"
#include "Operation.h"

class VarRule2 : public Var
{
	private:
		VariablesTypes* variablestypes_;
		L_ID l_id_;
		Const char op_eq_= '=';
		Operation* operation_;
	public:
		VarRule2(){}
		VarRule2( VariablesTypes* variablestypes,l_id l_id,Operation* operation):Var(),variablestypes_(variablestypes),l_id_(l_id),operation_(operation){}
		virtual ~VarRule2()
		{
			delete variablestypes;
			delete operation;
		}
		VarRule2(const VarRule2& var):Var(var),variablestypes_(var->variablestypes_),operation_(var->operation_){}
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		const VariablesTypes variablestypes const ()
		{
			return variablestypes_;
		}
		void set_l_id(L_ID* l_id)
		{
			l_id_ = l_id;
		}
		L_ID l_id const ()
		{
			return l_id_;
		}
		char op_eq const ()
		{
			return op_eq_;
		}
		void set_operation(Operation* operation)
		{
			operation_ = operation;
		}
		const Operation operation const ()
		{
			return operation_;
		}
}
#endif