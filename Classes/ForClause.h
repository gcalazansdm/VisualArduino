#ifndef FORCLAUSE_H
#define FORCLAUSE_H

#include "Node.h"
#include "VarFor.h"
#include "LogicOperation.h"
#include "UnitaryOperators.h"
#include "Command.h"

class ForClause : public Node
{
	private:
		VarFor* varfor_;
		LogicOperation* logicoperation_;
		UnitaryOperators* unitaryoperators_;
		Command* command_;
	public:
		ForClause( VarFor* varfor,LogicOperation* logicoperation,UnitaryOperators* unitaryoperators,Command* command):Node(),varfor_(varfor),logicoperation_(logicoperation),unitaryoperators_(unitaryoperators),command_(command){}
		virtual ~ForClause()
		{
			delete varfor_;
			delete logicoperation_;
			delete unitaryoperators_;
			delete command_;
		}
		ForClause(const ForClause& forclause):Node(forclause),varfor_(forclause.varfor_),logicoperation_(forclause.logicoperation_),unitaryoperators_(forclause.unitaryoperators_),command_(forclause.command_){}//olá
		void set_varfor(VarFor* varfor)
		{
			varfor_ = varfor;
		}
		VarFor* varfor()
		{
			return varfor_;
		}
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		}
		LogicOperation* logicoperation()
		{
			return logicoperation_;
		}
		void set_unitaryoperators(UnitaryOperators* unitaryoperators)
		{
			unitaryoperators_ = unitaryoperators;
		}
		UnitaryOperators* unitaryoperators()
		{
			return unitaryoperators_;
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