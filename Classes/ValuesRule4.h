#ifndef VALUESRULE4_H
#define VALUESRULE4_H

#include "Values.h"

class ValuesRule4 : public Values
{
	private:
		char l_char_;
	public:
		ValuesRule4(){}
		ValuesRule4( l_char l_char,):Values(),l_char_(l_char){}
		virtual ~ValuesRule4()
		{
		}
		ValuesRule4(const ValuesRule4& values):Values(values){}
		void set_l_char(char* l_char)
		{
			l_char_ = l_char;
		}
		char l_char const ()
		{
			return l_char_;
		}
}
#endif