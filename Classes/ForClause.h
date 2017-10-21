#ifndef FORCLAUSE_H
#define FORCLAUSE_H

#include "Node.h"

class ForClause : public Node
{
	private:
	public:
		ForClause():Node(){}
		virtual ~ForClause(){}
		ForClause(const ForClause& forclause):ForClause(){}
}
#endif