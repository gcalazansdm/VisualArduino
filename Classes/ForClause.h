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
		ForClause( VarFor* varfor,LogicOperation* logicoperation,UnitaryOperators* unitaryoperators,Command* command):Node(),varfor_(varfor),logicoperation_(logicoperation),unitaryoperators_(unitaryoperators),command_(command){};
		virtual ~ForClause()
		{
			delete varfor;
			delete logicoperation;
			delete unitaryoperators;
			delete command;
		};
		ForClause(const ForClause& forclause):Node(forclause),varfor_(forclause.varfor()),logicoperation_(forclause.logicoperation()),unitaryoperators_(forclause.unitaryoperators()),command_(forclause.command()){};//olá
		void set_varfor(VarFor* varfor)
		{
			varfor_ = varfor;
		};
		const VarFor* const varfor()
		{
			return varfor_;
		};
		void set_logicoperation(LogicOperation* logicoperation)
		{
			logicoperation_ = logicoperation;
		};
		const LogicOperation* const logicoperation()
		{
			return logicoperation_;
		};
		void set_unitaryoperators(UnitaryOperators* unitaryoperators)
		{
			unitaryoperators_ = unitaryoperators;
		};
		const UnitaryOperators* const unitaryoperators()
		{
			return unitaryoperators_;
		};
		void set_command(Command* command)
		{
			command_ = command;
		};
		const Command* const command()
		{
			return command_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif