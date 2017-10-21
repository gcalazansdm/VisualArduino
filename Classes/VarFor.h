#ifndef VARFOR_H
#define VARFOR_H

#include "Node.h"

class VarFor : public Node
{
	private:
	public:
		VarFor():Node(){}
		virtual ~VarFor(){}
		VarFor(const VarFor& varfor):VarFor(){}
}
#endif