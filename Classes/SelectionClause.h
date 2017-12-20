#ifndef SELECTIONCLAUSE_H
#define SELECTIONCLAUSE_H

#include "Node.h"

class SelectionClause : public Node
{
	private:
	public:
		SelectionClause():Node(){};
		virtual ~SelectionClause(){};
		SelectionClause(const SelectionClause& selectionclause):SelectionClause(){};
};
#endif