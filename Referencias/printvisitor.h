#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

 #include "Visitor.h"

class PrintVisitor: public Visitor{
	public:
		virtual ~PrintVisitor(){}
		void visit(ExpRule1 *e);
		void visit(ExpRule2 *e);
}

#endif