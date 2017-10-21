#ifndef VALUESRULE8_H
#define VALUESRULE8_H

#include "Values.h"
#include "VariablesTypes.h"
#include <string>
#include "Operation.h"

class ValuesRule8 : public Values
{
	private:
		VariablesTypes* variablestypes_;
		std::string l_id_;
		Const char op_eq_= '=';
		Operation* operation_;
	public:
		ValuesRule8(){}
		ValuesRule8( VariablesTypes* variablestypes,l_id l_id,Operation* operation):Values(),variablestypes_(variablestypes),l_id_(l_id),operation_(operation){}
		virtual ~ValuesRule8()
		{
			delete variablestypes;
			delete operation;
		}
		ValuesRule8(const ValuesRule8& values):Values(values),variablestypes_(values->variablestypes_),operation_(values->operation_){}
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
}
#endif