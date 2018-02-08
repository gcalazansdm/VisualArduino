#ifndef PROGRAM_H
#define PROGRAM_H

#include "Node.h"
#include "MainBody.h"

class program : public Node
{
	private:
		MainBody* mainbody_;
	public:
		program( MainBody* mainbody):Node(),mainbody_(mainbody){}
		virtual ~program()
		{
			delete mainbody_;
		}
		program(const program& program):Node(program),mainbody_(program.mainbody_){}//olá
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		}
		MainBody* mainbody()
		{
			return mainbody_;
		}
		void accept(Visitor *v);
};
#endif