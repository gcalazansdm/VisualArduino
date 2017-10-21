#ifndef MAINBODY_H
#define MAINBODY_H

#include "Node.h"

class MainBody : public Node
{
	private:
	public:
		MainBody():Node(){}
		virtual ~MainBody(){}
		MainBody(const MainBody& mainbody):MainBody(){}
}
#endif