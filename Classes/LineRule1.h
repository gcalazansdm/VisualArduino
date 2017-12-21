#ifndef LINERULE1_H
#define LINERULE1_H

#include "Line.h"
#include "Operation.h"

class LineRule1 : public Line
{
	private:
		Operation* operation_;
	public:
		LineRule1( Operation* operation):Line(),operation_(operation){}
		virtual ~LineRule1()
		{
			delete operation_;
		}
		LineRule1(const LineRule1& linerule1):Line(linerule1),operation_(linerule1.operation_){}//olá
		void set_operation(Operation* operation)
		{
			operation_ = operation;
		}
		const Operation* const operation()
		{
			return operation_;
		}
		void accept(Visitor *v);
};
#endif