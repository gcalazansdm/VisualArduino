#ifndef ELSECLAUSE_H
#define ELSECLAUSE_H

#include "Node.h"
#include "Command.h"

class ElseClause : public Node
{
	private:
		Command* command_;
	public:
		ElseClause( Command* command):Node(),command_(command){}
		virtual ~ElseClause()
		{
			delete command_;
		}
		ElseClause(const ElseClause& elseclause):Node(elseclause),command_(elseclause.command_){}//olá
		void set_command(Command* command)
		{
			command_ = command;
		}
		Command* command()
		{
			return command_;
		}
		void accept(Visitor *v);
};
#endif