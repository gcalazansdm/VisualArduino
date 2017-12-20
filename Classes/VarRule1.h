#ifndef VARRULE1_H
#define VARRULE1_H

#include "Var.h"
#include "VariablesTypes.h"
#include <string>

class VarRule1 : public Var
{
	private:
		VariablesTypes* variablestypes_;
	public:
		VarRule1(){};
		VarRule1( VariablesTypes* variablestypes):Var(),variablestypes_(variablestypes){};
		virtual ~VarRule1()
		{
			delete variablestypes;
		};
		VarRule1(const VarRule1& varrule1):Var(varrule1),variablestypes_(var->variablestypes_){};
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		};
		const VariablesTypes variablestypes const ()
		{
			return variablestypes_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif