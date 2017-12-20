#ifndef ELSECLAUSE_H
#define ELSECLAUSE_H

#include "Node.h"
#include <string>
#include "Command.h"

class ElseClause : public Node
{
	private:
		Command* command_;
	public:
		ElseClause( Command* command):Node(),command_(command){};
		virtual ~ElseClause()
		{
			delete command;
		};
		ElseClause(const ElseClause& elseclause):Node(elseclause),command_(elseclause.command()){};//olá
		void set_command(Command* command)
		{
			command_ = command;
		};
		const Command* const command()
		{
			return command_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif