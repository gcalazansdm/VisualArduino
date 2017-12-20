#ifndef IFELSECLAUSE_H
#define IFELSECLAUSE_H

#include "Node.h"
#include <string>
#include "LogicOperation.h"
#include "Command.h"

class IfElseClause : public Node
{
	private:
		LogicOperation* logicoperation_;
		Command* command_;
	public:
		IfElseClause(){};
		IfElseClause( LogicOperation* logicoperation,Command* command):Node(),logicoperation_(logicoperation),command_(command){};
		virtual ~IfElseClause()
		{
			delete logicoperation;
			delete command;
		};
		IfElseClause(const IfElseClause& ifelseclause):Node(ifelseclause),logicoperation_(ifelseclause->logicoperation_),command_(ifelseclause->command_){};
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		};
		const LogicOperation logicoperation const ()
		{
			return logicoperation_;
		};
		void set_command(Command* command)
		{
			command_ = command;
		};
		const Command command const ()
		{
			return command_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif