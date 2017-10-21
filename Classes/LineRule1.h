#ifndef LINERULE1_H
#define LINERULE1_H

#include "Line.h"
#include "Operation.h"

class LineRule1 : public Line
{
	private:
		Operation* operation_;
	public:
		LineRule1(){}
		LineRule1( Operation* operation):Line(),operation_(operation){}
		virtual ~LineRule1()
		{
			delete operation;
		}
		LineRule1(const LineRule1& line):Line(line),operation_(line->operation_){}
		void set_operation(Operation* operation)
		{
			operation_ = operation;
		}
		const Operation operation const ()
		{
			return operation_;
		}
}
#endif