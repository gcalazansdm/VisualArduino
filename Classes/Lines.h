#ifndef LINES_H
#define LINES_H

#include "Node.h"

class Lines : public Node
{
	private:
		Line* line_;
	public:
		Lines(){}
		Lines(Line& line): lines_(line)
		{}
		virtual	~Lines()
		{
			delete line_;
		}
		Lines(const Lines& t): line_(t->line_)
		{}
		void set_Line_(Line* line)
		{
			line_ = line;
		}
		const Line* get_Line()
		{
			return line_;
		}
}


#endif