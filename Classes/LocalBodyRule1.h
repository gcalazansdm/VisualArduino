#ifndef LOCALBODYRULE1_H
#define LOCALBODYRULE1_H

#include "LocalBody.h"
#include "Line.h"
#include "LocalBody.h"

class LocalBodyRule1 : public LocalBody
{
	private:
		Line* line_;
		LocalBody* localbody_;
	public:
		LocalBodyRule1( Line* line,LocalBody* localbody):LocalBody(),line_(line),localbody_(localbody){}
		virtual ~LocalBodyRule1()
		{
			delete line_;
			delete localbody_;
		}
		LocalBodyRule1(const LocalBodyRule1& localbodyrule1):LocalBody(localbodyrule1),line_(localbodyrule1.line_),localbody_(localbodyrule1.localbody_){}//olá
		void set_line(Line* line)
		{
			line_ = line;
		}
		const Line* const line()
		{
			return line_;
		}
		void set_localbody(LocalBody* localbody)
		{
			localbody_ = localbody;
		}
		const LocalBody* const localbody()
		{
			return localbody_;
		}
		void accept(Visitor *v);
};
#endif