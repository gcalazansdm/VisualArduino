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
		std::string l_id_;
		Operation* operation_;
	public:
		VarForRule1( VariablesTypes* variablestypes,std::string l_id,Operation* operation):VarFor(),variablestypes_(variablestypes),l_id_(l_id),operation_(operation){}
		virtual ~VarForRule1()
		{
			delete variablestypes_;
			delete operation_;
		}
		VarForRule1(const VarForRule1& varforrule1):VarFor(varforrule1),variablestypes_(varforrule1.variablestypes_),l_id_(varforrule1.l_id_),operation_(varforrule1.operation_){}//olá
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