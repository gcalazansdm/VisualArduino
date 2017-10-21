#ifndef LINE_H
#define LINE_H

#include "Node.h"

class Line : public Node
{
	private:
	public:
		Line():Node(){}
		virtual ~Line(){}
		Line(const Line& line):Line(){}
}
#endif