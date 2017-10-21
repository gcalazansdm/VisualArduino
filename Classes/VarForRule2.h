#ifndef VARFORRULE2_h
#define VARFORRULE2_h
#include "VarFor.h"classVarForRule2: public VarFor
{
	 private:
		 A_LPAR a_lpar_;
		 L_ID l_id_;
		 OP_EQ op_eq_;
		 Operation operation_;
		 A_SEMICOLON a_semicolon_;
	 public:
		 VarFor(){}
		 VarFor(){}
		 virtual ~VarFor(){}
		 VarFor(const VarFor& varfor):VarFor(){}
}
//Auto Gerated by Gabriel Calazans
#endif