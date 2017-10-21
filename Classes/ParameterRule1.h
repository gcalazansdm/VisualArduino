#ifndef PARAMETERRULE1_h
#define PARAMETERRULE1_h
#include "Parameter.h"classParameterRule1: public Parameter
{
	 private:
		 A_LPAR a_lpar_;
		 Parameters parameters_;
		 A_RPAR a_rpar_;
	 public:
		 Parameter(){}
		 Parameter(){}
		 virtual ~Parameter(){}
		 Parameter(const Parameter& parameter):Parameter(){}
}
//Auto Gerated by Gabriel Calazans
#endif