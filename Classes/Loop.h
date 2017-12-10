#ifndef LOOP_H
#define LOOP_H

#include "Node.h"

class Loop : public Node
{
	private:
	public:
		Loop():Node(){}
		virtual ~Loop(){}
		Loop(const Loop& loop):Loop(){}
}
#endif