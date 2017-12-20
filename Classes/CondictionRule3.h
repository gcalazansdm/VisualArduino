#ifndef CONDICTIONRULE3_H
#define CONDICTIONRULE3_H

#include "Condiction.h"
#include "ForClause.h"

class CondictionRule3 : public Condiction
{
	private:
		ForClause* forclause_;
	public:
		CondictionRule3( ForClause* forclause):Condiction(),forclause_(forclause){};
		virtual ~CondictionRule3()
		{
			delete forclause;
		};
		CondictionRule3(const CondictionRule3& condictionrule3):Condiction(condictionrule3),forclause_(condictionrule3.forclause()){};//olá
		void set_forclause(ForClause* forclause)
		{
			forclause_ = forclause;
		};
		const ForClause* const forclause()
		{
			return forclause_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif