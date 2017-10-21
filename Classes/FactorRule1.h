#ifndef FACTORRULE1_h
#define FACTORRULE1_h
#include "Factor.h"classFactorRule1: public Factor
{
	 private:
		 Factor factor_;
		 OP_DIV op_div_;
		 Elem elem_;
	 public:
		 Factor(){}
		 Factor(){}
		 virtual ~Factor(){}
		 Factor(const Factor& factor):Factor(){}
}
//Auto Gerated by Gabriel Calazans
#endif