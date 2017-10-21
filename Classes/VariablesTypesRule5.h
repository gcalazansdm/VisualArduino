#ifndef VARIABLESTYPESRULE5_H
#define VARIABLESTYPESRULE5_H

#include "VariablesTypes.h"
#include "T_ID.h"

class VariablesTypesRule5 : public VariablesTypes
{
	private:
		T_ID* t_id_;
	public:
		VariablesTypesRule5(){}
		VariablesTypesRule5( T_ID* t_id):VariablesTypes(),t_id_(t_id){}
		virtual ~VariablesTypesRule5()
		{
			delete t_id;
		}
		VariablesTypesRule5(const VariablesTypesRule5& variablestypes):VariablesTypes(variablestypes),t_id_(variablestypes->t_id_){}
		void set_t_id(T_ID* t_id)
		{
			t_id_ = t_id;
		}
		const T_ID t_id const ()
		{
			return t_id_;
		}
}
#endif