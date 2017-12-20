#ifndef COMMANDRULE2_H
#define COMMANDRULE2_H

#include "Command.h"
#include "Line.h"

class CommandRule2 : public Command
{
	private:
		Line* line_;
	public:
		CommandRule2(){};
		CommandRule2( Line* line):Command(),line_(line){};
		virtual ~CommandRule2()
		{
			delete line;
		};
		CommandRule2(const CommandRule2& commandrule2):Command(commandrule2),line_(command->line_){};
		void set_line(Line* line)
		{
			line_ = line;
		};
		const Line line const ()
		{
			return line_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif