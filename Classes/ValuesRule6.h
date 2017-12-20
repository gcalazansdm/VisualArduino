#ifndef VALUESRULE6_H
#define VALUESRULE6_H

#include "Values.h"

class ValuesRule6 : public Values
{
	private:
	public:
		ValuesRule6(){};
		ValuesRule6( ):Values(){};
		virtual ~ValuesRule6()
		{
		};
		ValuesRule6(const ValuesRule6& valuesrule6):Values(valuesrule6){};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif