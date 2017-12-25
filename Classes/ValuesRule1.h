#ifndef VALUESRULE1_H
#define VALUESRULE1_H

#include "Values.h"

class ValuesRule1 : public Values
{
	private:
		int l_int_;
	public:
		ValuesRule1( int l_int):Values(),l_int_(l_int){}
		virtual ~ValuesRule1()
		{
		}
		ValuesRule1(const ValuesRule1& valuesrule1):Values(valuesrule1),l_int_(valuesrule1.l_int_){}//olá
		void set_l_int(int l_int)
		{
			l_int_ = l_int;
		}
		int l_int()
		{
			return l_int_;
		}
		void accept(Visitor *v);
};
#endif