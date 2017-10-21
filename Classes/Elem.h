#ifndef ELEM_H
#define ELEM_H

#include "Node.h"

class Elem : public Node
{
	private:
	public:
		Elem():Node(){}
		virtual ~Elem(){}
		Elem(const Elem& elem):Elem(){}
}
#endif