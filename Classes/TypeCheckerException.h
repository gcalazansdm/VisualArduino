#ifndef TYPECHECKEXCEPTION_H
#define TYPECHECKEXCEPTION_H

#include<string>
#include <exception>

class TypeCheckerException : public std::exception
{
	private:
		std::string msg_;
	public:
		explicit TypeCheckerException(const std::string& msg);
		virtual ~TypeCheckerException(){}
		std::string msg(){
			return msg;
		}
		virtual const char* what() const throw() {
        return msg_.c_str();
    }
};

#endif
