#ifndef VALUESRULE6_H
#define VALUESRULE6_H

#include "Values.h"

class ValuesRule6 : public Values
{
	private:
		L_BOOL l_bool_;
	public:
		ValuesRule6(){}
		ValuesRule6( l_bool l_bool,):Values(),l_bool_(l_bool){}
		virtual ~ValuesRule6()
		{
		}
		ValuesRule6(const ValuesRule6& values):Values(values){}
		void set_l_bool(L_BOOL* l_bool)
		{
			l_bool_ = l_bool;
		}
		L_BOOL l_bool const ()
		{
			return l_bool_;
		}
}
#endif