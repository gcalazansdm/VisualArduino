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
		VarRule2(){};
		VarRule2( VariablesTypes* variablestypes,Operation* operation):Var(),variablestypes_(variablestypes),operation_(operation){};
		virtual ~VarRule2()
		{
			delete variablestypes;
			delete operation;
		};
		VarRule2(const VarRule2& varrule2):Var(varrule2),variablestypes_(var->variablestypes_),operation_(var->operation_){};
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		};
		const VariablesTypes variablestypes const ()
		{
			return variablestypes_;
		};
		void set_operation(Operation* operation)
		{
			operation_ = operation;
		};
		const Operation operation const ()
		{
			return operation_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif