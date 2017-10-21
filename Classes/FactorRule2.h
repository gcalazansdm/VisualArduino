#ifndef FACTORRULE2_h
#define FACTORRULE2_h
#include "Factor.h"classFactorRule2: public Factor
{
	 private:
		 Factor factor_;
		 OP_MUL op_mul_;
		 Elem elem_;
	 public:
		 Factor(){}
		 Factor(){}
		 virtual ~Factor(){}
		 Factor(const Factor& factor):Factor(){}
}
//Auto Gerated by Gabriel Calazans
#endif