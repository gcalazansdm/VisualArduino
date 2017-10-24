#ifndef VARRULE1_H
#define VARRULE1_H

#include "Var.h"
#include "VariablesTypes.h"
#include <string>

class VarRule1 : public Var
{
	private:
		VariablesTypes* variablestypes_;
		std::string l_id_;
	public:
		VarRule1(){}
		VarRule1( VariablesTypes* variablestypes,l_id l_id):Var(),variablestypes_(variablestypes),l_id_(l_id){}
		virtual ~VarRule1()
		{
			delete variablestypes;
		}
		VarRule1(const VarRule1& varrule1):Var(varrule1),variablestypes_(var->variablestypes_){}
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		const VariablesTypes variablestypes const ()
		{
			return variablestypes_;
		}
		void set_l_id(std::string* l_id)
		{
			l_id_ = l_id;
		}
		std::string l_id const ()
		{
			return l_id_;
		}
}
#endif