#ifndef CONDICTIONRULE2_H
#define CONDICTIONRULE2_H

#include "Condiction.h"
#include "WhileClause.h"

class CondictionRule2 : public Condiction
{
	private:
		WhileClause* whileclause_;
	public:
		CondictionRule2(){}
		CondictionRule2( WhileClause* whileclause):Condiction(),whileclause_(whileclause){}
		virtual ~CondictionRule2()
		{
			delete whileclause;
		}
		CondictionRule2(const CondictionRule2& condiction):Condiction(condiction),whileclause_(condiction->whileclause_){}
		void set_whileclause(WhileClause* whileclause)
		{
			whileclause_ = whileclause;
		}
		const WhileClause whileclause const ()
		{
			return whileclause_;
		}
}
#endif