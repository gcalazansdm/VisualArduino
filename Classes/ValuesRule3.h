#ifndef VALUESRULE3_H
#define VALUESRULE3_H

#include "Values.h"

class ValuesRule3 : public Values
{
	private:
		L_DOUBLE l_double_;
	public:
		ValuesRule3(){}
		ValuesRule3( l_double l_double,):Values(),l_double_(l_double){}
		virtual ~ValuesRule3()
		{
		}
		ValuesRule3(const ValuesRule3& values):Values(values){}
		void set_l_double(L_DOUBLE* l_double)
		{
			l_double_ = l_double;
		}
		L_DOUBLE l_double const ()
		{
			return l_double_;
		}
}
#endif