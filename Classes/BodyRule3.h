#ifndef BODYRULE3_H
#define BODYRULE3_H

#include "Body.h"
#include "Line.h"

class BodyRule3 : public Body
{
	private:
		Line* line_;
		Const char a_semicolon_= ';';
	public:
		BodyRule3(){}
		BodyRule3( Line* line):Body(),line_(line){}
		virtual ~BodyRule3()
		{
			delete line;
		}
		BodyRule3(const BodyRule3& body):Body(body),line_(body->line_){}
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
}
#endif