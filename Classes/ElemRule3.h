#ifndef ELEMRULE3_H
#define ELEMRULE3_H

#include "Elem.h"
#include "Eq.h"

class ElemRule3 : public Elem
{
	private:
		Eq* eq_;
	public:
		ElemRule3( Eq* eq):Elem(),eq_(eq){}
		virtual ~ElemRule3()
		{
			delete eq_;
		}
		ElemRule3(const ElemRule3& elemrule3):Elem(elemrule3),eq_(elemrule3.eq_){}//ol�
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		Eq* eq()
		{
			return eq_;
		}
		void accept(Visitor *v);
};
#endif