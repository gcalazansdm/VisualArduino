#ifndef ELEMRULE1_h
#define ELEMRULE1_h
#include "Elem.h"classElemRule1: public Elem
{
	 private:
		 OP_SUM op_sum_;
		 Elem elem_;
	 public:
		 Elem(){}
		 Elem(){}
		 virtual ~Elem(){}
		 Elem(const Elem& elem):Elem(){}
}
//Auto Gerated by Gabriel Calazans
#endif