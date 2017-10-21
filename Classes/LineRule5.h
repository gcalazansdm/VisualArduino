#ifndef LINERULE5_H
#define LINERULE5_H

#include "Line.h"
#include "ForClause.h"

class LineRule5 : public Line
{
	private:
		ForClause* forclause_;
	public:
		LineRule5(){}
		LineRule5( ForClause* forclause):Line(),forclause_(forclause){}
		virtual ~LineRule5()
		{
			delete forclause;
		}
		LineRule5(const LineRule5& line):Line(line),forclause_(line->forclause_){}
		void set_forclause(ForClause* forclause)
		{
			forclause_ = forclause;
		}
		const ForClause forclause const ()
		{
			return forclause_;
		}
}
#endif