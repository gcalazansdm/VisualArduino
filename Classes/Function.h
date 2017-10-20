#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
#include "Node.h"
#include "Parameters.h"
#include "VariablesTypes.h"

class Function : public Node
{
	private:
		const std::string function_ = "funcao";
		std::string id_;
		const char parEsq_ = '(';
		Parameters* parametros_;
		const char parDir_ = ')'; 
		VariablesTypes* variablesTypes_;
	public:
		Function(){}
		Function(std::string id, Parameters& parametros,VariablesTypes& variablesTypes): id_(id), parametros_(parametros),variablesTypes_(variablesTypes)
		{}
		virtual	~Function(){
			delete id_;
			delete parametros_;
			delete variablesTypes_;
			delete function;
		}
		Function(const Function& t): id_(t->id_), parametros_(t->parametros_),variablesTypes_(t->variablesTypes_)
		{}
		void set_id_(std::string& id)
        {
            id_ = id;
        }
		void set_variablesTypes_(VariablesTypes& variablesTypes)
        {
            variablesTypes_ = variablesTypes;
        }void set_parametros_(Parameters& parametros)
        {
            parametros_ = parametros;
        }
		const std::string function_() const 
		{
			return function;
		}
		const std::string id_() const 
		{
			return function;
		}
		const Parameters* parametros_() const 
		{
			return parametros_;
		}
		const char parEsq_() const 
		{
			return parEsq;
		}
		const char parDir_() const 
		{
			return parDir;
		}
		const VariablesTypes* variablesTypes_() const 
		{
			return variablesTypes_;
		}

}

#endif