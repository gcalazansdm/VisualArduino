#ifndef VARRULE1_H
#define VARRULE1_H

#include "Var.h"
#include "VariablesTypes.h"

class VarRule1 : public Var
{
	private:
		VariablesTypes* variablestypes_;
	public:
		VarRule1( VariablesTypes* variablestypes):Var(),variablestypes_(variablestypes){}
		virtual ~VarRule1()
		{
			delete variablestypes_;
		}
		VarRule1(const VarRule1& varrule1):Var(varrule1),variablestypes_(varrule1.variablestypes_){}//olá
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		const VariablesTypes* const variablestypes()
		{
			return variablestypes_;
		}
		void accept(Visitor *v);
};
#endif