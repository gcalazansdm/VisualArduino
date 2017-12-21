#ifndef VALUESRULE3_H
#define VALUESRULE3_H

#include "Values.h"

class ValuesRule3 : public Values
{
	private:
		double l_double_;
	public:
		ValuesRule3( double l_double):Values(),l_double_(l_double){}
		virtual ~ValuesRule3()
		{
		}
		ValuesRule3(const ValuesRule3& valuesrule3):Values(valuesrule3),l_double_(valuesrule3.l_double_){}//olá
		void set_l_double(double l_double)
		{
			l_double_ = l_double;
		}
		const double l_double()
		{
			return l_double_;
		}
		void accept(Visitor *v);
};
#endif