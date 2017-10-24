#ifndef VARFORRULE1_H
#define VARFORRULE1_H

#include "VarFor.h"
#include "VariablesTypes.h"
#include <string>
#include "Operation.h"

class VarForRule1 : public VarFor
{
	private:
		Const char a_lpar_= '(';
		VariablesTypes* variablestypes_;
		std::string l_id_;
		Const char op_eq_= '=';
		Operation* operation_;
		Const char a_semicolon_= ';';
	public:
		VarForRule1(){}
		VarForRule1( VariablesTypes* variablestypes,l_id l_id,Operation* operation):VarFor(),variablestypes_(variablestypes),l_id_(l_id),operation_(operation){}
		virtual ~VarForRule1()
		{
			delete variablestypes;
			delete operation;
		}
		VarForRule1(const VarForRule1& varforrule1):VarFor(varforrule1),variablestypes_(varfor->variablestypes_),operation_(varfor->operation_){}
		char a_lpar const ()
		{
			return a_lpar_;
		}
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
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
}
#endif