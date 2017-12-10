#ifndef PARAMETER_H
#define PARAMETER_H

#include "Node.h"

class Parameter : public Node
{
	private:
	public:
		Parameter():Node(){}
		virtual ~Parameter(){}
		Parameter(const Parameter& parameter):Parameter(){}
}
#endif