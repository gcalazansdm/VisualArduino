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
		VarRule1( VariablesTypes* variablestypes,std::string l_id):Var(),variablestypes_(variablestypes),l_id_(l_id){}
		virtual ~VarRule1()
		{
			delete variablestypes_;
		}
		VarRule1(const VarRule1& varrule1):Var(varrule1),variablestypes_(varrule1.variablestypes_),l_id_(varrule1.l_id_){}//olá
		void set_variablestypes(VariablesTypes* variablestypes)
		{
			variablestypes_ = variablestypes;
		}
		VariablesTypes* variablestypes()
		{
			return variablestypes_;
		}
		void set_l_id(std::string l_id)
		{
			l_id_ = l_id;
		}
		std::string l_id()
		{
			return l_id_;
		}
		void accept(Visitor *v);
};
#endif