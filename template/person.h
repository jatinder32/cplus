#ifndef __PERSON_H_
#define __PERSON_H_

#include <string>

class Person {
private:
	int mage;
	std::string mname;
	Person();
public:
	Person(const int age, const std::string name);
	virtual ~Person();
	void GetPerson();
	virtual void GetInfo();
};

#endif
