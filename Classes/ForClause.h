#ifndef FORCLAUSE_H
#define FORCLAUSE_H

#include "Node.h"
#include <string>
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
		ForClause(){}
		ForClause( VarFor* varfor,LogicOperation* logicoperation,UnitaryOperators* unitaryoperators,Command* command):Node(),varfor_(varfor),logicoperation_(logicoperation),unitaryoperators_(unitaryoperators),command_(command){}
		virtual ~ForClause()
		{
			delete varfor;
			delete logicoperation;
			delete unitaryoperators;
			delete command;
		}
		ForClause(const ForClause& forclause):Node(forclause),varfor_(forclause->varfor_),logicoperation_(forclause->logicoperation_),unitaryoperators_(forclause->unitaryoperators_),command_(forclause->command_){}
		void set_varfor(VarFor* varfor)
		{
			varfor_ = varfor;
		}
		const VarFor varfor const ()
		{
			return varfor_;
		}
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		}
		const LogicOperation logicoperation const ()
		{
			return logicoperation_;
		}
		void set_unitaryoperators(UnitaryOperators* unitaryoperators)
		{
			unitaryoperators_ = unitaryoperators;
		}
		const UnitaryOperators unitaryoperators const ()
		{
			return unitaryoperators_;
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