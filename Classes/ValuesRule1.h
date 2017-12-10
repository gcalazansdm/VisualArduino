#ifndef VALUESRULE1_H
#define VALUESRULE1_H

#include "Values.h"

class ValuesRule1 : public Values
{
	private:
	public:
		ValuesRule1(){}
		ValuesRule1( ):Values(){}
		virtual ~ValuesRule1()
		{
		}
		ValuesRule1(const ValuesRule1& valuesrule1):Values(valuesrule1){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif