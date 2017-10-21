#ifndef BODYRULE1_h
#define BODYRULE1_h
#include "Body.h"classBodyRule1: public Body
{
	 private:
		 A_LKEY a_lkey_;
		 LocalBody localbody_;
		 A_RKEY a_rkey_;
	 public:
		 Body(){}
		 Body(){}
		 virtual ~Body(){}
		 Body(const Body& body):Body(){}
}
//Auto Gerated by Gabriel Calazans
#endif