#ifndef LINERULE2_H
#define LINERULE2_H

#include "Line.h"
#include "Var.h"

class LineRule2 : public Line
{
	private:
		Var* var_;
	public:
		LineRule2(){}
		LineRule2( Var* var):Line(),var_(var){}
		virtual ~LineRule2()
		{
			delete var;
		}
		LineRule2(const LineRule2& linerule2):Line(linerule2),var_(line->var_){}
		void set_var(Var* var)
		{
			var_ = var;
		}
		const Var var const ()
		{
			return var_;
		}
		void accept(Visitor *v) {
			v -> visit(this);
		}
};
#endif