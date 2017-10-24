#ifndef ELEMRULE3_H
#define ELEMRULE3_H

#include "Elem.h"
#include "Eq.h"

class ElemRule3 : public Elem
{
	private:
		Const char a_lpar_= '(';
		Eq* eq_;
		Const char a_rpar_= ')';
	public:
		ElemRule3(){}
		ElemRule3( Eq* eq):Elem(),eq_(eq){}
		virtual ~ElemRule3()
		{
			delete eq;
		}
		ElemRule3(const ElemRule3& elemrule3):Elem(elemrule3),eq_(elem->eq_){}
		char a_lpar const ()
		{
			return a_lpar_;
		}
		void set_eq(Eq* eq)
		{
			eq_ = eq;
		}
		const Eq eq const ()
		{
			return eq_;
		}
		char a_rpar const ()
		{
			return a_rpar_;
		}
}
#endif