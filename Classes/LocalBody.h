#ifndef LOCALBODY_H
#define LOCALBODY_H

#include "Node.h"
#include "Lines.h"

class LocalBody : public Node
{
	private:
		Lines* lines_;
		const char* comma = ',';
	public:
		LocalBody(){}
		LocalBody(Lines& lines): lines_(lines)
		{}
		virtual	~LocalBody()
		{
			delete lines_;
		}
		LocalBody(const LocalBody& t): lines_(t->lines_)
		{}
		void set_Lines_(Lines* lines)
		{
			lines_ = lines;
		}
		const Lines* get_Lines()
		{
			return lines_;
		}
}


#endif