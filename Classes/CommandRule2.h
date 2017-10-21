#ifndef COMMANDRULE2_H
#define COMMANDRULE2_H

#include "Command.h"
#include "Line.h"

class CommandRule2 : public Command
{
	private:
		Line* line_;
		Const char a_semicolon_= ';';
	public:
		CommandRule2(){}
		CommandRule2( Line* line):Command(),line_(line){}
		virtual ~CommandRule2()
		{
			delete line;
		}
		CommandRule2(const CommandRule2& command):Command(command),line_(command->line_){}
		void set_line(Line* line)
		{
			line_ = line;
		}
		const Line line const ()
		{
			return line_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
}
#endif