#ifndef FUCTIONRULE1_H
#define FUCTIONRULE1_H

#include "LocalBody.h"
#include "Function.h"

class FunctionRule1 : public Function
{
	private:
		const char L_KEY = "{";
		LocalBody* localBody_;
		const char R_KEY = "}";
	public:
		FunctionRule1(){}
		FunctionRule1(std::string id, Parameters& parametros,VariablesTypes& variablesType, LocalBody& localBody):Function(id,parametros,variablesType), localBody_(localBody){}
		virtual	~FunctionRule1(){
			delete localBody_;]
		}
		FunctionRule1(const FunctionRule1& t): f_(t.f_)
		{}
		void set_localBody_(LocalBody& localBody_)
		{
            localBody_ = localBody;
        } 
		const LocalBody* localBody_() const 
		{
			return localBody_;
		}				
}


#endif