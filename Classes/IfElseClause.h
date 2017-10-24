#ifndef IFELSECLAUSE_H
#define IFELSECLAUSE_H

#include "Node.h"
#include <string>
#include "LogicOperation.h"
#include "Command.h"

class IfElseClause : public Node
{
	private:
		Const std::string t_ifelse_= "entretanto";
		Const char a_lpar_= '(';
		LogicOperation* logicoperation_;
		Const char a_rpar_= ')';
		Command* command_;
	public:
		IfElseClause(){}
		IfElseClause( LogicOperation* logicoperation,Command* command):Node(),logicoperation_(logicoperation),command_(command){}
		virtual ~IfElseClause()
		{
			delete logicoperation;
			delete command;
		}
		IfElseClause(const IfElseClause& ifelseclause):Node(ifelseclause),logicoperation_(ifelseclause->logicoperation_),command_(ifelseclause->command_){}
		std::string t_ifelse const ()
		{
			return t_ifelse_;
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