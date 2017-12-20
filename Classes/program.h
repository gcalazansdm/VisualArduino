#ifndef PROGRAM_H
#define PROGRAM_H

#include "Node.h"
#include "MainBody.h"

class program : public Node
{
	private:
		MainBody* mainbody_;
	public:
		program(){};
		program( MainBody* mainbody):Node(),mainbody_(mainbody){};
		virtual ~program()
		{
			delete mainbody;
		};
		program(const program& program):Node(program),mainbody_(program->mainbody_){};
		void set_mainbody(MainBody* mainbody)
		{
			mainbody_ = mainbody;
		};
		const MainBody mainbody const ()
		{
			return mainbody_;
		};
		void accept(Visitor *v) {
			v -> visit(this);
		};
};
#endif