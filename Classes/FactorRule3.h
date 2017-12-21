#ifndef FACTORRULE3_H
#define FACTORRULE3_H

#include "Factor.h"
#include "Elem.h"

class FactorRule3 : public Factor
{
	private:
		Elem* elem_;
	public:
		FactorRule3( Elem* elem):Factor(),elem_(elem){}
		virtual ~FactorRule3()
		{
			delete elem_;
		}
		FactorRule3(const FactorRule3& factorrule3):Factor(factorrule3),elem_(factorrule3.elem_){}//olá
		void set_elem(Elem* elem)
		{
			elem_ = elem;
		}
		const Elem* const elem()
		{
			return elem_;
		}
		void accept(Visitor *v);
};
#endif