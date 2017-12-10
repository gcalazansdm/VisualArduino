#ifndef IFCLAUSE_H
#define IFCLAUSE_H

#include "Node.h"
#include <string>
#include "LogicOperation.h"
#include "Command.h"

class IfClause : public Node
{
	private:
		LogicOperation* logicoperation_;
		Command* command_;
	public:
		IfClause(){}
		IfClause( LogicOperation* logicoperation,Command* command):Node(),logicoperation_(logicoperation),command_(command){}
		virtual ~IfClause()
		{
			delete logicoperation;
			delete command;
		}
		IfClause(const IfClause& ifclause):Node(ifclause),logicoperation_(ifclause->logicoperation_),command_(ifclause->command_){}
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		}
		const LogicOperation logicoperation const ()
		{
			return logicoperation_;
		}
		void set_command(Command* command)
		{
			command_ = command;
		}
		const Command command const ()
		{
			return command_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif