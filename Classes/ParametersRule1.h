#ifndef PARAMETERSRULE1_H
#define PARAMETERSRULE1_H

#include "Parameters.h"

class ParametersRule1 : public Parameters{
	private:
		const char A_COMMA = ',';
		Parameters* parameters_;
	public:
		ParametersRule1():parameters_(NULL)
		{}
		ParametersRule1(Var& variavel,Parameters& parameters):Parameters(variavel),parameters_(parameters)
		{}
		virtual	~ParametersRule1()
		{
			delete parameters_;
		}
		ParametersRule1(const ParametersRule1& t): parameters_(t->parameters_),Parameters(t->variavel_)
		{}
		void set_parameters_(Parameters* parameters){
			parameters_ = parameters;
		}
		const Parameters* parameters_ const(){
			 return parameters_;
		}
}

#endif