#ifndef WHILECLAUSE_H
#define WHILECLAUSE_H

#include "Node.h"
#include <string>
#include "LogicOperation.h"
#include "Command.h"

class WhileClause : public Node
{
	private:
		Const std::string t_whi_= "enquanto";
		Const char a_lpar_= '(';
		LogicOperation* logicoperation_;
		Const char a_rpar_= ')';
		Command* command_;
	public:
		WhileClause(){}
		WhileClause( LogicOperation* logicoperation,Command* command):logicoperation_(logicoperation),command_(command){}
		virtual ~WhileClauseRule1()
		{
			delete logicoperation;
			delete command;
		}
		WhileClause(const WhileClause& whileclause):logicoperation_(whileclause->logicoperation_),command_(whileclause->command_){}
		std::string t_whi const ()
		{
			return t_whi_;
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