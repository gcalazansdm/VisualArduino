#ifndef VALUESRULE5_H
#define VALUESRULE5_H

#include "Values.h"
#include <string>

class ValuesRule5 : public Values
{
	private:
		std::string l_string_;
	public:
		ValuesRule5(){}
		ValuesRule5( l_string l_string):Values(),l_string_(l_string){}
		virtual ~ValuesRule5()
		{
		}
		ValuesRule5(const ValuesRule5& valuesrule5):Values(valuesrule5){}
		void set_l_string(std::string* l_string)
		{
			l_string_ = l_string;
		}
		std::string l_string const ()
		{
			return l_string_;
		}
}
#endif