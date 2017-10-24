#ifndef LINERULE3_H
#define LINERULE3_H

#include "Line.h"
#include "Condiction.h"

class LineRule3 : public Line
{
	private:
		Condiction* condiction_;
	public:
		LineRule3(){}
		LineRule3( Condiction* condiction):Line(),condiction_(condiction){}
		virtual ~LineRule3()
		{
			delete condiction;
		}
		LineRule3(const LineRule3& linerule3):Line(linerule3),condiction_(line->condiction_){}
		void set_condiction(Condiction* condiction)
		{
			condiction_ = condiction;
		}
		const Condiction condiction const ()
		{
			return condiction_;
		}
}
#endif