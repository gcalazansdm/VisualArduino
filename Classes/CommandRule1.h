#ifndef COMMANDRULE1_H
#define COMMANDRULE1_H

#include "Command.h"
#include "LocalBody.h"

class CommandRule1 : public Command
{
	private:
		Const char a_lkey_= '{';
		LocalBody* localbody_;
		Const char a_rkey_= '}';
	public:
		CommandRule1(){}
		CommandRule1( LocalBody* localbody):Command(),localbody_(localbody){}
		virtual ~CommandRule1()
		{
			delete localbody;
		}
		CommandRule1(const CommandRule1& command):Command(command),localbody_(command->localbody_){}
		char a_lkey const ()
		{
			return a_lkey_;
		}
		void set_localbody(LocalBody* localbody)
		{
			localbody_ = localbody;
		}
		const LocalBody localbody const ()
		{
			return localbody_;
		}
		char a_rkey const ()
		{
			return a_rkey_;
		}
}
#endif