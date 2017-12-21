#ifndef SETUPRULE1_H
#define SETUPRULE1_H

#include "Setup.h"

class SetupRule1 : public Setup
{
	private:
	public:
		SetupRule1( ):Setup(){}
		virtual ~SetupRule1()
		{
		}
		SetupRule1(const SetupRule1& setuprule1):Setup(setuprule1){}//olá
		void accept(Visitor *v);
};
#endif