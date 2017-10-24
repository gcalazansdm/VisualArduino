#ifndef BODYRULE1_H
#define BODYRULE1_H

#include "Body.h"
#include "LocalBody.h"

class BodyRule1 : public Body
{
	private:
		Const char a_lkey_= '{';
		LocalBody* localbody_;
		Const char a_rkey_= '}';
	public:
		BodyRule1(){}
		BodyRule1( LocalBody* localbody):Body(),localbody_(localbody){}
		virtual ~BodyRule1()
		{
			delete localbody;
		}
		BodyRule1(const BodyRule1& bodyrule1):Body(bodyrule1),localbody_(body->localbody_){}
		char a_lkey const ()
		{
			return a_lkey_;
		}
		void set_localbody(LocalBody* localbody)
		{
			localbody_ = localbody;
		}
		const LocalBody localbody const ()
		{
			return localbody_;
		}
		char a_rkey const ()
		{
			return a_rkey_;
		}
}
#endif