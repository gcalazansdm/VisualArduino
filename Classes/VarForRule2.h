#ifndef VARFORRULE2_H
#define VARFORRULE2_H

#include "VarFor.h"
#include "Operation.h"

class VarForRule2 : public VarFor
{
	private:
		Const char a_lpar_= '(';
		std::string l_id_;
		Const char op_eq_= '=';
		Operation* operation_;
		Const char a_semicolon_= ';';
	public:
		VarForRule2(){}
		VarForRule2( l_id l_id,Operation* operation):VarFor(),l_id_(l_id),operation_(operation){}
		virtual ~VarForRule2()
		{
			delete operation;
		}
		VarForRule2(const VarForRule2& varfor):VarFor(varfor),operation_(varfor->operation_){}
		char a_lpar const ()
		{
			return a_lpar_;
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