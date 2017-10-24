#ifndef ELSECLAUSE_H
#define ELSECLAUSE_H

#include "Node.h"
#include <string>
#include "Command.h"

class ElseClause : public Node
{
	private:
		Const std::string t_else_= "entao";
		Command* command_;
	public:
		ElseClause(){}
		ElseClause( Command* command):Node(),command_(command){}
		virtual ~ElseClause()
		{
			delete command;
		}
		ElseClause(const ElseClause& elseclause):Node(elseclause),command_(elseclause->command_){}
		std::string t_else const ()
		{
			return t_else_;
		}
		void set_command(Command* command)
		{
			command_ = command;
		}
		const Command command const ()
		{
			return command_;
		}
}
#endif