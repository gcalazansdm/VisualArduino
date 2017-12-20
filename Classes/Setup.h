#ifndef SETUP_H
#define SETUP_H

#include "Node.h"

class Setup : public Node
{
	private:
	public:
		Setup():Node(){};
		virtual ~Setup(){};
		Setup(const Setup& setup):Setup(){};
};
#endif