#ifndef VARFORRULE4_H
#define VARFORRULE4_H

#include "VarFor.h"
#include "LogicComp.h"

class VarForRule4 : public VarFor
{
	private:
		LogicComp* logiccomp_;
	public:
		VarForRule4(){}
		VarForRule4( LogicComp* logiccomp):VarFor(),logiccomp_(logiccomp){}
		virtual ~VarForRule4()
		{
			delete logiccomp;
		}
		VarForRule4(const VarForRule4& varfor):VarFor(varfor),logiccomp_(varfor->logiccomp_){}
		void set_logiccomp(LogicComp* logiccomp)
		{
			logiccomp_ = logiccomp;
		}
		const LogicComp logiccomp const ()
		{
			return logiccomp_;
		}
}
#endif