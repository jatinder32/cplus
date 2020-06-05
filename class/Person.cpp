#include "Person.h"
#include <iostream>

using namespace std;
/* geeter */
void Person::get_Person() {
	cout << "age: " << age << endl;
	cout << "weight: " << weight << endl;
	cout << "const t: " << t << endl;
}
/* paramertr constructor */
Person::Person(int a, int b): age(a), weight(b), t(5) {
	cout << "paramertzied called" << endl;
}

/* default construct */
Person::Person():t(6){
	cout << "defual constructor called" << endl;
	age = 10;
	weight = 30;
}

/* default destructor */
Person::~Person() {
	cout << "defual destructor called" << endl;
}

/* setter func */
void Person::set_Person(int age, int weight) {
	this->age = age;
	this->weight = weight;
//	this->get_Person();
}
