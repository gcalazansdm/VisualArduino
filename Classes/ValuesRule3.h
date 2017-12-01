#ifndef VALUESRULE3_H
#define VALUESRULE3_H

#include "Values.h"

class ValuesRule3 : public Values
{
	private:
	public:
		ValuesRule3(){}
		ValuesRule3( ):Values(){}
		virtual ~ValuesRule3()
		{
		}
		ValuesRule3(const ValuesRule3& valuesrule3):Values(valuesrule3){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif