#ifndef ELEMRULE3_h
#define ELEMRULE3_h
#include "Elem.h"classElemRule3: public Elem
{
	 private:
		 A_LPAR a_lpar_;
		 Eq eq_;
		 A_RPAR a_rpar_;
	 public:
		 Elem(){}
		 Elem(){}
		 virtual ~Elem(){}
		 Elem(const Elem& elem):Elem(){}
}
//Auto Gerated by Gabriel Calazans
#endif