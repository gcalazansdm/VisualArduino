#ifndef VALUESRULE2_H
#define VALUESRULE2_H

#include "Values.h"

class ValuesRule2 : public Values
{
	private:
		L_FLOAT l_float_;
	public:
		ValuesRule2(){}
		ValuesRule2( l_float l_float,):Values(),l_float_(l_float){}
		virtual ~ValuesRule2()
		{
		}
		ValuesRule2(const ValuesRule2& values):Values(values){}
		void set_l_float(L_FLOAT* l_float)
		{
			l_float_ = l_float;
		}
		L_FLOAT l_float const ()
		{
			return l_float_;
		}
}
#endif