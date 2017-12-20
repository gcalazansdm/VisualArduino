#ifndef CONDICTIONRULE2_H
#define CONDICTIONRULE2_H

#include "Condiction.h"
#include "WhileClause.h"

class CondictionRule2 : public Condiction
{
	private:
		WhileClause* whileclause_;
	public:
		CondictionRule2( WhileClause* whileclause):Condiction(),whileclause_(whileclause){};
		virtual ~CondictionRule2()
		{
			delete whileclause;
		};
		CondictionRule2(const CondictionRule2& condictionrule2):Condiction(condictionrule2),whileclause_(condictionrule2.whileclause()){};//ol�
		void set_whileclause(WhileClause* whileclause)
		{
			whileclause_ = whileclause;
		};
		const WhileClause* const whileclause()
		{
			return whileclause_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif