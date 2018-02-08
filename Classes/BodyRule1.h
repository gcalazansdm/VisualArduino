#ifndef BODYRULE1_H
#define BODYRULE1_H

#include "Body.h"
#include "LocalBody.h"

class BodyRule1 : public Body
{
	private:
		LocalBody* localbody_;
	public:
		BodyRule1( LocalBody* localbody):Body(),localbody_(localbody){}
		virtual ~BodyRule1()
		{
			delete localbody_;
		}
		BodyRule1(const BodyRule1& bodyrule1):Body(bodyrule1),localbody_(bodyrule1.localbody_){}//olá
		void set_localbody(LocalBody* localbody)
		{
			localbody_ = localbody;
		}
		LocalBody* localbody()
		{
			return localbody_;
		}
		void accept(Visitor *v);
};
#endif