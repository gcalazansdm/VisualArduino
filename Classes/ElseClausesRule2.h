#ifndef ELSECLAUSESRULE2_H
#define ELSECLAUSESRULE2_H

#include "ElseClauses.h"
#include "ElseClause.h"

class ElseClausesRule2 : public ElseClauses
{
	private:
		ElseClause* elseclause_;
	public:
		ElseClausesRule2( ElseClause* elseclause):ElseClauses(),elseclause_(elseclause){};
		virtual ~ElseClausesRule2()
		{
			delete elseclause;
		};
		ElseClausesRule2(const ElseClausesRule2& elseclausesrule2):ElseClauses(elseclausesrule2),elseclause_(elseclausesrule2.elseclause()){};//olá
		void set_elseclause(ElseClause* elseclause)
		{
			elseclause_ = elseclause;
		};
		const ElseClause* const elseclause()
		{
			return elseclause_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif