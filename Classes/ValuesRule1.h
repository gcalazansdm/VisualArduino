#ifndef VALUESRULE1_H
#define VALUESRULE1_H

#include "Values.h"

class ValuesRule1 : public Values
{
	private:
		L_INT l_int_;
	public:
		ValuesRule1(){}
		ValuesRule1( l_int l_int,):Values(),l_int_(l_int){}
		virtual ~ValuesRule1()
		{
		}
		ValuesRule1(const ValuesRule1& values):Values(values){}
		void set_l_int(L_INT* l_int)
		{
			l_int_ = l_int;
		}
		L_INT l_int const ()
		{
			return l_int_;
		}
}
#endif