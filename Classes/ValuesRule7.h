#ifndef VALUESRULE7_H
#define VALUESRULE7_H

#include "Values.h"

class ValuesRule7 : public Values
{
	private:
	public:
		ValuesRule7():Values(){}
		virtual ~ValuesRule7()
		{
		}
		ValuesRule7(const ValuesRule7& valuesrule7):Values(valuesrule7){}//olá
		void accept(Visitor *v);
};
#endif