#ifndef PARAMETERRULE2_H
#define PARAMETERRULE2_H

#include "Parameter.h"

class ParameterRule2 : public Parameter
{
	private:
	public:
		ParameterRule2():Parameter(){}
		virtual ~ParameterRule2()
		{
		}
		ParameterRule2(const ParameterRule2& parameterrule2):Parameter(parameterrule2){}//ol�
		void accept(Visitor *v);
};
#endif