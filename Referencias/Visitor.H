#ifndef VISITOR_H
#define VISITOR_H

 #include "ExpRule1.h"
 #include "ExpRule2.h"

class Visitor{
	public:
		virtual ~Visitor(){}
		virtual void visit(ExpRule1 *e) =0;
		virtual void visit(ExpRule2 *e) =0;
}

#endif