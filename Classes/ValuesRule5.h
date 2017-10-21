#ifndef VALUESRULE5_H
#define VALUESRULE5_H

#include "Values.h"

class ValuesRule5 : public Values
{
	private:
		L_STRING l_string_;
	public:
		ValuesRule5(){}
		ValuesRule5( l_string l_string,):Values(),l_string_(l_string){}
		virtual ~ValuesRule5()
		{
		}
		ValuesRule5(const ValuesRule5& values):Values(values){}
		void set_l_string(L_STRING* l_string)
		{
			l_string_ = l_string;
		}
		L_STRING l_string const ()
		{
			return l_string_;
		}
}
#endif