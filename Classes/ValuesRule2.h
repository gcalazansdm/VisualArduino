#ifndef VALUESRULE2_H
#define VALUESRULE2_H

#include "Values.h"

class ValuesRule2 : public Values
{
	private:
	public:
		ValuesRule2(){};
		ValuesRule2( ):Values(){};
		virtual ~ValuesRule2()
		{
		};
		ValuesRule2(const ValuesRule2& valuesrule2):Values(valuesrule2){};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif