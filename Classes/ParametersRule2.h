#ifndef PARAMETERSRULE2_H
#define PARAMETERSRULE2_H

#include "Parameters.h"

class ParametersRule2 : public Parameters{
	private:
	public:
		ParametersRule2():parameters_(NULL)
		{}
		ParametersRule2(Var& variavel):Parameters(variavel)
		{}
		virtual	~ParametersRule2()
		{
			delete parameters_;
		}
		ParametersRule2(const ParametersRule2& t): Parameters(t->variavel_)
		{}	
}

#endif