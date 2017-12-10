#ifndef VAR_H
#define VAR_H

#include "Node.h"

class Var : public Node
{
	private:
	public:
		Var():Node(){}
		virtual ~Var(){}
		Var(const Var& var):Var(){}
}
#endif