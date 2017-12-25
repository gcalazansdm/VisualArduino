#ifndef VARRULE2_H
#define VARRULE2_H

#include "Var.h"
#include "VariablesTypes.h"
#include <string>
#include "Operation.h"

class VarRule2 : public Var
{
	private:
		VariablesTypes* variablestypes_;
		std::string l_id_;
		Operation* operation_;
	public:
		VarRule2( VariablesTypes* variablestypes,std::string l_id,Operation* operation):Var(),variablestypes_(variablestypes),l_id_(l_id),operation_(operation){}
		virtual ~VarRule2()
		{
			delete variablestypes_;
			delete operation_;
		}
		VarRule2(const VarRule2& varrule2):Var(varrule2),variablestypes_(varrule2.variablestypes_),l_id_(varrule2.l_id_),operation_(varrule2.operation_){}//olá
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
		void set_operation(Operation* operation)
		{
			operation_ = operation;
		}
		Operation* operation()
		{
			return operation_;
		}
		void accept(Visitor *v);
};
#endif