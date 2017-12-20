#ifndef BODYRULE2_H
#define BODYRULE2_H

#include "Body.h"

class BodyRule2 : public Body
{
	private:
	public:
		BodyRule2():Body(){};
		virtual ~BodyRule2()
		{
		};
		BodyRule2(const BodyRule2& bodyrule2):Body(bodyrule2){};//olá
		void accept(Visitor *v) {
			v->visit(this);
		};
};
#endif