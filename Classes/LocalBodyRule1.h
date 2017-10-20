#ifndef LOCALBODYRULE1_H
#define LOCALBODYRULE1_H

#include "LocalBody.h"

class LocalBodyRule1 : public LocalBody{
	private:
		LocalBody* localBody_;
	public:
		LocalBodyRule1():localBody_(NULL)
		{}
		LocalBodyRule1(Lines& Lines,LocalBody& localBody):LocalBody(localBody),localBody_(localBody)
		{}
		virtual	~LocalBodyRule1()
		{
			delete localBody_;
		}
		LocalBodyRule1(const LocalBodyRule1& t): localBody_(t->localBody_), LocalBody(t)
		{}	
		void set_LocalBody_(LocalBody* localBody)
		{
			localBody_ = localBody;
		}
		const LocalBody* get_LocalBody_() const
		{
			return LocalBody_;
		}
}

#endif