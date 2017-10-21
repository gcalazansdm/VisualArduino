#ifndef VALUESRULE7_H
#define VALUESRULE7_H

#include "Values.h"

class ValuesRule7 : public Values
{
	private:
		L_ID l_id_;
	public:
		ValuesRule7(){}
		ValuesRule7( l_id l_id,):Values(),l_id_(l_id){}
		virtual ~ValuesRule7()
		{
		}
		ValuesRule7(const ValuesRule7& values):Values(values){}
		void set_l_id(L_ID* l_id)
		{
			l_id_ = l_id;
		}
		L_ID l_id const ()
		{
			return l_id_;
		}
}
#endif