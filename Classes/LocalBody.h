#ifndef LOCALBODY_H
#define LOCALBODY_H

#include "Node.h"

class LocalBody : public Node
{
	private:
	public:
		LocalBody():Node(){}
		virtual ~LocalBody(){}
		LocalBody(const LocalBody& localbody):LocalBody(){}
}
#endif