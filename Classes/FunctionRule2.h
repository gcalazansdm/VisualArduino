#ifndef FUCTIONRULE2_H
#define FUCTIONRULE2_H

#include "Function.h"

class FunctionRule2 : public Function
{
	private:
		const char semiColumn = ";";
	public:
		FunctionRule2(){}
		FunctionRule2(std::string id, Parameters& parametros,VariablesTypes& variablesType):Function(id,parametros,variablesType){}
		virtual	~FunctionRule2(){
		}
		FunctionRule2(const FunctionRule2& t): Function(t.id_,t.parametros_,t.variablesType_)
		{}	
		const char semiColumn_() const 
		{
			return semiColumn_;
		}
}


#endif