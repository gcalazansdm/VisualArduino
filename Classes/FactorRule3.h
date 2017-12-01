#ifndef FACTORRULE3_H
#define FACTORRULE3_H

#include "Factor.h"
#include "Elem.h"

class FactorRule3 : public Factor
{
	private:
		Elem* elem_;
	public:
		FactorRule3(){}
		FactorRule3( Elem* elem):Factor(),elem_(elem){}
		virtual ~FactorRule3()
		{
			delete elem;
		}
		FactorRule3(const FactorRule3& factorrule3):Factor(factorrule3),elem_(factor->elem_){}
		void set_elem(Elem* elem)
		{
			elem_ = elem;
		}
		const Elem elem const ()
		{
			return elem_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif