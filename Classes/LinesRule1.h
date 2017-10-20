#ifndef LINESRULE1_H
#define LINESRULE1_H

#include "Lines.h"

class LinesRule1 : public Lines
{
	private:
		Lines* lines_;
	public:
		LinesRule1(){}
		LinesRule1(Line& line,Lines& lines): Line(line), lines_(lines)
		{}
		virtual	~LinesRule1()
		{
			delete lines_;
		}
		LinesRule1(const LinesRule1& t): lines_(t->lines_),Lines(t)
		{}
		void set_Lines_(Lines* lines)
		{
			lines_ = lines;
		}
		const Line* get_Line()
		{
			return lines_;
		}
}


#endif