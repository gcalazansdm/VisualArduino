#ifndef FACTORRULE5_H
#define FACTORRULE5_H

#include "Factor.h"
#include "Eq.h"

class FactorRule5 : public Factor
{
	private:
		Const char a_lpar_= '(';
		Eq* eq_;
		Const char a_rpar_= ')';
	public:
		FactorRule5(){}
		FactorRule5( Eq* eq):Factor(),eq_(eq){}
		virtual ~FactorRule5()
		{
			delete eq;
		}
		FactorRule5(const FactorRule5& factor):Factor(factor),eq_(factor->eq_){}
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