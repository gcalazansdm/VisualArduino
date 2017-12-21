#ifndef VALUESRULE4_H
#define VALUESRULE4_H

#include "Values.h"

class ValuesRule4 : public Values
{
	private:
		char l_char_;
	public:
		ValuesRule4( char l_char):Values(),l_char_(l_char){}
		virtual ~ValuesRule4()
		{
		}
		ValuesRule4(const ValuesRule4& valuesrule4):Values(valuesrule4),l_char_(valuesrule4.l_char_){}//olá
		void set_l_char(char l_char)
		{
			l_char_ = l_char;
		}
		const char l_char()
		{
			return l_char_;
		}
		void accept(Visitor *v);
};
#endif