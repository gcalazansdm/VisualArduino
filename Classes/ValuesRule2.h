#ifndef VALUESRULE2_H
#define VALUESRULE2_H

#include "Values.h"

class ValuesRule2 : public Values
{
	private:
		float l_float_;
	public:
		ValuesRule2( float l_float):Values(),l_float_(l_float){}
		virtual ~ValuesRule2()
		{
		}
		ValuesRule2(const ValuesRule2& valuesrule2):Values(valuesrule2),l_float_(valuesrule2.l_float_){}//olá
		void set_l_float(float l_float)
		{
			l_float_ = l_float;
		}
		const float l_float()
		{
			return l_float_;
		}
		void accept(Visitor *v);
};
#endif