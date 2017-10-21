#ifndef LINERULE4_H
#define LINERULE4_H

#include "Line.h"
#include "WhileClause.h"

class LineRule4 : public Line
{
	private:
		WhileClause* whileclause_;
	public:
		LineRule4(){}
		LineRule4( WhileClause* whileclause):Line(),whileclause_(whileclause){}
		virtual ~LineRule4()
		{
			delete whileclause;
		}
		LineRule4(const LineRule4& line):Line(line),whileclause_(line->whileclause_){}
		void set_whileclause(WhileClause* whileclause)
		{
			whileclause_ = whileclause;
		}
		const WhileClause whileclause const ()
		{
			return whileclause_;
		}
}
#endif