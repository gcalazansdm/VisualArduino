#ifndef VARFORRULE1_h
#define VARFORRULE1_h
#include "VarFor.h"classVarForRule1: public VarFor
{
	 private:
		 A_LPAR a_lpar_;
		 VariablesTypes variablestypes_;
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