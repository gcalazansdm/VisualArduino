#ifndef COMMANDRULE1_H
#define COMMANDRULE1_H

#include "Command.h"
#include "LocalBody.h"

class CommandRule1 : public Command
{
	private:
		LocalBody* localbody_;
	public:
		CommandRule1(){}
		CommandRule1( LocalBody* localbody):Command(),localbody_(localbody){}
		virtual ~CommandRule1()
		{
			delete localbody;
		}
		CommandRule1(const CommandRule1& commandrule1):Command(commandrule1),localbody_(command->localbody_){}
		void set_localbody(LocalBody* localbody)
		{
			localbody_ = localbody;
		}
		const LocalBody localbody const ()
		{
			return localbody_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif