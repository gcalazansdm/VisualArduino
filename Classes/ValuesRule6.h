#ifndef VALUESRULE6_H
#define VALUESRULE6_H

#include "Values.h"

class ValuesRule6 : public Values
{
	private:
		bool l_bool_;
	public:
		ValuesRule6( bool l_bool):Values(),l_bool_(l_bool){}
		virtual ~ValuesRule6()
		{
		}
		ValuesRule6(const ValuesRule6& valuesrule6):Values(valuesrule6),l_bool_(valuesrule6.l_bool_){}//olá
		void set_l_bool(bool l_bool)
		{
			l_bool_ = l_bool;
		}
		bool l_bool()
		{
			return l_bool_;
		}
		void accept(Visitor *v);
};
#endif