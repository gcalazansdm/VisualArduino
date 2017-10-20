#ifndef PARAMETERS_H
#define PARAMETERS_H

#include "Node.h"
#include "Var.h"

class Parameters : public Node{
	private:
		Var* variavel_;
	public:
		Parameters():variavel_(NULL){}
		Parameters(Var& variavel):variavel_(variavel){}
		virtual	~Parameters()
		{
			delete variavel_;
		}
		Parameters(const Parameters& t): variavel_(t->variavel_)
		{}	
		void set_Variavel_(Var& v)
		{
            v_ = v;
        }
		const Var* variavel_() const 
		{
			return variavel_;
		}
}


#endif