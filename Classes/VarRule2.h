#ifndef VARRULE2_H
#define VARRULE2_H

#include "Var.h"
#include "VariablesTypes.h"
#include "Operation.h"

class VarRule2 : public Var
{
	private:
		VariablesTypes* variablestypes_;
		Operation* operation_;
	public:
		VarRule2( VariablesTypes* variablestypes,Operation* operation):Var(),variablestypes_(variablestypes),operation_(operation){}
		virtual ~VarRule2()
		{
			delete variablestypes_;
			delete operation_;
		}
		VarRule2(const VarRule2& varrule2):Var(varrule2),variablestypes_(varrule2.variablestypes_),operation_(varrule2.operation_){}//olá
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		const VariablesTypes* const variablestypes()
		{
			return variablestypes_;
		}
		void set_operation(Operation* operation)
		{
			operation_ = operation;
		}
		const Operation* const operation()
		{
			return operation_;
		}
		void accept(Visitor *v);
};
#endif