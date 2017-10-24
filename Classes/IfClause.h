#ifndef IFCLAUSE_H
#define IFCLAUSE_H

#include "Node.h"
#include <string>
#include "LogicOperation.h"
#include "Command.h"

class IfClause : public Node
{
	private:
		Const std::string t_if_= "se";
		Const char a_lpar_= '(';
		LogicOperation* logicoperation_;
		Const char a_rpar_= ')';
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
		std::string t_if const ()
		{
			return t_if_;
		}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		}
		const LogicOperation logicoperation const ()
		{
			return logicoperation_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
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