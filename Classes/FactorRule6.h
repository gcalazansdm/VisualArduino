#ifndef FACTORRULE6_H
#define FACTORRULE6_H

#include "Factor.h"
#include "Values.h"

class FactorRule6 : public Factor
{
	private:
		Values* values_;
	public:
		FactorRule6(){}
		FactorRule6( Values* values):Factor(),values_(values){}
		virtual ~FactorRule6()
		{
			delete values;
		}
		FactorRule6(const FactorRule6& factor):Factor(factor),values_(factor->values_){}
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