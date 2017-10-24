#ifndef ELEMRULE4_H
#define ELEMRULE4_H

#include "Elem.h"
#include "Values.h"

class ElemRule4 : public Elem
{
	private:
		Values* values_;
	public:
		ElemRule4(){}
		ElemRule4( Values* values):Elem(),values_(values){}
		virtual ~ElemRule4()
		{
			delete values;
		}
		ElemRule4(const ElemRule4& elemrule4):Elem(elemrule4),values_(elem->values_){}
		void set_values(Values* values)
		{
			values_ = values;
		}
		const Values values const ()
		{
			return values_;
		}
}
#endif