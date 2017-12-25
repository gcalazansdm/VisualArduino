#ifndef VALUESRULE7_H
#define VALUESRULE7_H

#include "Values.h"
#include <string>

class ValuesRule7 : public Values
{
	private:
		std::string l_id_;
	public:
		ValuesRule7( std::string l_id):Values(),l_id_(l_id){}
		virtual ~ValuesRule7()
		{
		}
		ValuesRule7(const ValuesRule7& valuesrule7):Values(valuesrule7),l_id_(valuesrule7.l_id_){}//olá
		void set_l_id(std::string l_id)
		{
			l_id_ = l_id;
		}
		std::string l_id()
		{
			return l_id_;
		}
		void accept(Visitor *v);
};
#endif