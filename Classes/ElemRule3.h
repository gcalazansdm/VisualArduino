#ifndef ELEMRULE3_H
#define ELEMRULE3_H

#include "Elem.h"
#include "Eq.h"

class ElemRule3 : public Elem
{
	private:
		Eq* eq_;
	public:
		ElemRule3(){}
		ElemRule3( Eq* eq):Elem(),eq_(eq){}
		virtual ~ElemRule3()
		{
			delete eq;
		}
		ElemRule3(const ElemRule3& elemrule3):Elem(elemrule3),eq_(elem->eq_){}
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		const Eq eq const ()
		{
			return eq_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif