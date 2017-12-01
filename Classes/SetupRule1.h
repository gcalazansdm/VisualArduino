#ifndef SETUPRULE1_H
#define SETUPRULE1_H

#include "Setup.h"
#include <string>

class SetupRule1 : public Setup
{
	private:
	public:
		SetupRule1(){}
		SetupRule1():Setup(){}
		virtual ~SetupRule1()
		{
		}
		SetupRule1(const SetupRule1& setuprule1):Setup(setuprule1){}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif