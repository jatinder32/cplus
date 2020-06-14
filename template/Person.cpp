#include "person.h"
#include <iostream>


Person::Person() {

}

Person::Person(const int age, const std::string name)
	: mage(age), mname(name) {}

Person::~Person() {
	std::cout << "Person D: \n";
}

void Person::GetPerson() {
	std::cout << "Person age: " << mage << std::endl;
	std::cout << "Person name: " << mname << std::endl;
}

void Person::GetInfo() {
	std::cout << "Person age: " << mage << std::endl;
	std::cout << "Person name: " << mname << std::endl;
}
