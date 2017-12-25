#ifndef VARFORRULE2_H
#define VARFORRULE2_H

#include "VarFor.h"
#include <string>
#include "Operation.h"

class VarForRule2 : public VarFor
{
	private:
		std::string l_id_;
		Operation* operation_;
	public:
		VarForRule2( std::string l_id,Operation* operation):VarFor(),l_id_(l_id),operation_(operation){}
		virtual ~VarForRule2()
		{
			delete operation_;
		}
		VarForRule2(const VarForRule2& varforrule2):VarFor(varforrule2),l_id_(varforrule2.l_id_),operation_(varforrule2.operation_){}//olá
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