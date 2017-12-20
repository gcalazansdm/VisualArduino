#ifndef VARIABLESTYPES_H
#define VARIABLESTYPES_H

#include "Node.h"

class VariablesTypes : public Node
{
	private:
	public:
		VariablesTypes():Node(){};
		virtual ~VariablesTypes(){};
		VariablesTypes(const VariablesTypes& variablestypes):VariablesTypes(){};
};
#endif