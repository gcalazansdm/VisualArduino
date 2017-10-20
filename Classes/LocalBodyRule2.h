#ifndef LOCALBODYRULE2_H
#define LOCALBODYRULE2_H

#include "LocalBody.h"

class LocalBodyRule2 : public LocalBody{
	private:
	public:
		LocalBodyRule2():
		{}
		LocalBodyRule2(Lines& lines):LocalBody(lines)
		{}
		virtual	~LocalBodyRule2()
		{}
		LocalBodyRule2(const LocalBodyRule2& t): LocalBody(t)
		{}	
}

#endif