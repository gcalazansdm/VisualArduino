#ifndef LINERULE3_H
#define LINERULE3_H

#include "Line.h"
#include "Condiction.h"

class LineRule3 : public Line
{
	private:
		Condiction* condiction_;
	public:
		LineRule3( Condiction* condiction):Line(),condiction_(condiction){};
		virtual ~LineRule3()
		{
			delete condiction;
		};
		LineRule3(const LineRule3& linerule3):Line(linerule3),condiction_(linerule3.condiction()){};//olá
		void set_condiction(Condiction* condiction)
		{
			condiction_ = condiction;
		};
		const Condiction* const condiction()
		{
			return condiction_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif