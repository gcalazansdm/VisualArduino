#ifndef LOCALBODYRULE2_H
#define LOCALBODYRULE2_H

#include "LocalBody.h"
#include "Line.h"

class LocalBodyRule2 : public LocalBody
{
	private:
		Line* line_;
	public:
		LocalBodyRule2( Line* line):LocalBody(),line_(line){};
		virtual ~LocalBodyRule2()
		{
			delete line;
		};
		LocalBodyRule2(const LocalBodyRule2& localbodyrule2):LocalBody(localbodyrule2),line_(localbodyrule2.line()){};//olá
		void set_line(Line* line)
		{
			line_ = line;
		};
		const Line* const line()
		{
			return line_;
		};
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif