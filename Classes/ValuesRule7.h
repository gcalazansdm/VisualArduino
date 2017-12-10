#ifndef VALUESRULE7_H
#define VALUESRULE7_H

#include "Values.h"
#include <string>

class ValuesRule7 : public Values
{
	private:
	public:
		ValuesRule7(){}
		ValuesRule7():Values(){}
		virtual ~ValuesRule7()
		{
		}
		ValuesRule7(const ValuesRule7& valuesrule7):Values(valuesrule7){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif