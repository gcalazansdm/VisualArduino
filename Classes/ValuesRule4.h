#ifndef VALUESRULE4_H
#define VALUESRULE4_H

#include "Values.h"

class ValuesRule4 : public Values
{
	private:
	public:
		ValuesRule4(){}
		ValuesRule4( ):Values(){}
		virtual ~ValuesRule4()
		{
		}
		ValuesRule4(const ValuesRule4& valuesrule4):Values(valuesrule4){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif