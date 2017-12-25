#ifndef WHILECLAUSE_H
#define WHILECLAUSE_H

#include "Node.h"
#include "LogicOperation.h"
#include "Command.h"

class WhileClause : public Node
{
	private:
		LogicOperation* logicoperation_;
		Command* command_;
	public:
		WhileClause( LogicOperation* logicoperation,Command* command):Node(),logicoperation_(logicoperation),command_(command){}
		virtual ~WhileClause()
		{
			delete logicoperation_;
			delete command_;
		}
		WhileClause(const WhileClause& whileclause):Node(whileclause),logicoperation_(whileclause.logicoperation_),command_(whileclause.command_){}//olá
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