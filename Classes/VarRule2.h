#ifndef VARRULE2_h
#define VARRULE2_h
#include "Var.h"classVarRule2: public Var
{
	 private:
		 VariablesTypes variablestypes_;
		 L_ID l_id_;
		 OP_EQ op_eq_;
		 Operation operation_;
	 public:
		 Var(){}
		 Var(){}
		 virtual ~Var(){}
		 Var(const Var& var):Var(){}
}
//Auto Gerated by Gabriel Calazans
#endif