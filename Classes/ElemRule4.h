#ifndef ELEMRULE4_H
#define ELEMRULE4_H

#include "Elem.h"
#include "Values.h"

class ElemRule4 : public Elem
{
	private:
		Values* values_;
	public:
		ElemRule4( Values* values):Elem(),values_(values){};
		virtual ~ElemRule4()
		{
			delete values;
		};
		ElemRule4(const ElemRule4& elemrule4):Elem(elemrule4),values_(elemrule4.values()){};//olá
		void set_values(Values* values)
		{
			values_ = values;
		};
		const Values* const values()
		{
			return values_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif