#ifndef BODYRULE2_H
#define BODYRULE2_H

#include "Body.h"

class BodyRule2 : public Body
{
	private:
		Const char a_lkey_= '{';
		Const char a_rkey_= '}';
	public:
		BodyRule2(){}
		BodyRule2():Body(){}
		virtual ~BodyRule2()
		{
		}
		BodyRule2(const BodyRule2& body):Body(body){}
		char a_lkey const ()
		{
			return a_lkey_;
		}
		char a_rkey const ()
		{
			return a_rkey_;
		}
}
#endif