#ifndef TYPECHECKEXCEPTION_H
#define TYPECHECKEXCEPTION_H

class TypeCheckerException
{
	private:
		std::string msg_;
	public:
		TypeCheckerException(std::string &s):msg_(s){}
		virtual ~TypeCheckerException(){}
		std::string msg(){
			return msg;
		}
}

#endif