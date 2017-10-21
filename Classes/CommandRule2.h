#ifndef COMMANDRULE2_h
#define COMMANDRULE2_h
#include "Command.h"classCommandRule2: public Command
{
	 private:
		 Line line_;
		 A_SEMICOLON a_semicolon_;
	 public:
		 Command(){}
		 Command(){}
		 virtual ~Command(){}
		 Command(const Command& command):Command(){}
}
//Auto Gerated by Gabriel Calazans
#endif