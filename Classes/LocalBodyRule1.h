#ifndef LOCALBODYRULE1_H
#define LOCALBODYRULE1_H

#include "LocalBody.h"
#include "Line.h"
#include "LocalBody.h"

class LocalBodyRule1 : public LocalBody
{
	private:
		Line* line_;
		Const char a_semicolon_= ';';
		LocalBody* localbody_;
	public:
		LocalBodyRule1(){}
		LocalBodyRule1( Line* line,LocalBody* localbody):LocalBody(),line_(line),localbody_(localbody){}
		virtual ~LocalBodyRule1()
		{
			delete line;
			delete localbody;
		}
		LocalBodyRule1(const LocalBodyRule1& localbodyrule1):LocalBody(localbodyrule1),line_(localbody->line_),localbody_(localbody->localbody_){}
		void set_line(Line* line)
		{
			line_ = line;
		}
		const Line line const ()
		{
			return line_;
		}
		char a_semicolon const ()
		{
			return a_semicolon_;
		}
		void set_localbody(LocalBody* localbody)
		{
			localbody_ = localbody;
		}
		const LocalBody localbody const ()
		{
			return localbody_;
		}
}
#endif