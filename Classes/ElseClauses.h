#ifndef ELSECLAUSES_H
#define ELSECLAUSES_H

#include "Node.h"

class ElseClauses : public Node
{
	private:
	public:
		ElseClauses():Node(){}
		virtual ~ElseClauses(){}
		ElseClauses(const ElseClauses& elseclauses):ElseClauses(){}
}
#endif