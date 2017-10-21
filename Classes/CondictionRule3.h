#ifndef CONDICTIONRULE3_H
#define CONDICTIONRULE3_H

#include "Condiction.h"
#include "ForClause.h"

class CondictionRule3 : public Condiction
{
	private:
		ForClause* forclause_;
	public:
		CondictionRule3(){}
		CondictionRule3( ForClause* forclause):Condiction(),forclause_(forclause){}
		virtual ~CondictionRule3()
		{
			delete forclause;
		}
		CondictionRule3(const CondictionRule3& condiction):Condiction(condiction),forclause_(condiction->forclause_){}
		void set_forclause(ForClause* forclause)
		{
			forclause_ = forclause;
		}
		const ForClause forclause const ()
		{
			return forclause_;
		}
}
#endif