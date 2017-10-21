#ifndef LOGICCOMPRULE2_h
#define LOGICCOMPRULE2_h
#include "LogicComp.h"classLogicCompRule2: public LogicComp
{
	 private:
		 A_LPAR a_lpar_;
		 LogicComp logiccomp_;
		 A_RPAR a_rpar_;
	 public:
		 LogicComp(){}
		 LogicComp(){}
		 virtual ~LogicComp(){}
		 LogicComp(const LogicComp& logiccomp):LogicComp(){}
}
//Auto Gerated by Gabriel Calazans
#endif