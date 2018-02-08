#ifndef IFELSECLAUSE_H
#define IFELSECLAUSE_H

#include "Node.h"
#include "LogicOperation.h"
#include "Command.h"

class IfElseClause : public Node
{
	private:
		LogicOperation* logicoperation_;
		Command* command_;
	public:
		IfElseClause( LogicOperation* logicoperation,Command* command):Node(),logicoperation_(logicoperation),command_(command){}
		virtual ~IfElseClause()
		{
			delete logicoperation_;
			delete command_;
		}
		IfElseClause(const IfElseClause& ifelseclause):Node(ifelseclause),logicoperation_(ifelseclause.logicoperation_),command_(ifelseclause.command_){}//olá
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		}
		LogicOperation* logicoperation()
		{
			return logicoperation_;
		}
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