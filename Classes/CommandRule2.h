#ifndef COMMANDRULE2_H
#define COMMANDRULE2_H

#include "Command.h"
#include "Line.h"

class CommandRule2 : public Command
{
	private:
		Line* line_;
	public:
		CommandRule2( Line* line):Command(),line_(line){}
		virtual ~CommandRule2()
		{
			delete line_;
		}
		CommandRule2(const CommandRule2& commandrule2):Command(commandrule2),line_(commandrule2.line_){}//olá
		void set_line(Line* line)
		{
			line_ = line;
		}
		Line* line()
		{
			return line_;
		}
		void accept(Visitor *v);
};
#endif