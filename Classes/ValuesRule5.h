#ifndef VALUESRULE5_H
#define VALUESRULE5_H

#include "Values.h"
#include <string>

class ValuesRule5 : public Values
{
	private:
	public:
		ValuesRule5():Values(){};
		virtual ~ValuesRule5()
		{
		};
		ValuesRule5(const ValuesRule5& valuesrule5):Values(valuesrule5){};//ol�
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif