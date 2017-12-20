#ifndef WHILECLAUSE_H
#define WHILECLAUSE_H

#include "Node.h"
#include <string>
#include "LogicOperation.h"
#include "Command.h"

class WhileClause : public Node
{
	private:
		LogicOperation* logicoperation_;
		Command* command_;
	public:
		WhileClause(){};
		WhileClause( LogicOperation* logicoperation,Command* command):Node(),logicoperation_(logicoperation),command_(command){};
		virtual ~WhileClause()
		{
			delete logicoperation;
			delete command;
		};
		WhileClause(const WhileClause& whileclause):Node(whileclause),logicoperation_(whileclause->logicoperation_),command_(whileclause->command_){};
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