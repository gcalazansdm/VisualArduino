#ifndef COMMANDRULE1_h
#define COMMANDRULE1_h
#include "Command.h"classCommandRule1: public Command
{
	 private:
		 A_LKEY a_lkey_;
		 LocalBody localbody_;
		 A_RKEY a_rkey_;
	 public:
		 Command(){}
		 Command(){}
		 virtual ~Command(){}
		 Command(const Command& command):Command(){}
}
//Auto Gerated by Gabriel Calazans
#endif