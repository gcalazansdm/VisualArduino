#ifndef NODE_H
#define NODE_H

#include "Visitor.h"

class Node {
	private:
	public:
		Node(){};
		virtual	~Node(){};	
		virtual void accept(Visitor *v) = 0;
};

#endif
