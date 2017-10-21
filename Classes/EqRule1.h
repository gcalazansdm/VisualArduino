#ifndef EQRULE1_h
#define EQRULE1_h
#include "Eq.h"classEqRule1: public Eq
{
	 private:
		 Eq eq_;
		 OP_SUM op_sum_;
		 Factor factor_;
	 public:
		 Eq(){}
		 Eq(){}
		 virtual ~Eq(){}
		 Eq(const Eq& eq):Eq(){}
}
//Auto Gerated by Gabriel Calazans
#endif