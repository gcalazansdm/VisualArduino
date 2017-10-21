#ifndef EQRULE2_h
#define EQRULE2_h
#include "Eq.h"classEqRule2: public Eq
{
	 private:
		 Eq eq_;
		 OP_SUB op_sub_;
		 Factor factor_;
	 public:
		 Eq(){}
		 Eq(){}
		 virtual ~Eq(){}
		 Eq(const Eq& eq):Eq(){}
}
//Auto Gerated by Gabriel Calazans
#endif