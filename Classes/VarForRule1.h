#ifndef VARFORRULE1_H
#define VARFORRULE1_H

#include "VarFor.h"
#include "VariablesTypes.h"
#include <string>
#include "Operation.h"

class VarForRule1 : public VarFor
{
	private:
		VariablesTypes* variablestypes_;
		Operation* operation_;
	public:
		VarForRule1(){}
		VarForRule1( VariablesTypes* variablestypes,Operation* operation):VarFor(),variablestypes_(variablestypes),operation_(operation){}
		virtual ~VarForRule1()
		{
			delete variablestypes;
			delete operation;
		}
		VarForRule1(const VarForRule1& varforrule1):VarFor(varforrule1),variablestypes_(varfor->variablestypes_),operation_(varfor->operation_){}
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		const VariablesTypes variablestypes const ()
		{
			return variablestypes_;
		}
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