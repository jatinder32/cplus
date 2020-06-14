#include "Person.h"
#include <typeinfo>
#include <iostream>
#include <cstring>

using namespace std;
int Person::count = 0;
int Player::pcount = 0;

myString::myString(myString &&obj)
{
	cout << __PRETTY_FUNCTION__ << endl;
	cout << " ****** move ***** "<< endl;
	size = obj.size;
	str = obj.str;
	obj.size = 0;
	obj.str = NULL;
}

myString::myString(const myString &rhs) {
	cout << __PRETTY_FUNCTION__ << endl;
	cout << " ****** copy ***** "<< endl;
	size = rhs.size;
	str = new char[size + 1];
	strcpy(str, rhs.str);	
}

myString& myString::operator =(const myString &obj) {
	cout << __PRETTY_FUNCTION__ << endl;
	cout << " ****** assginment ***** "<< endl;
	if (this != &obj) {
		delete[] str;
		this->size = obj.size;
		this->str = new char[this->size +1];
		strcpy(this->str, obj.str);
	}

	return *this;
}

myString::myString() {
	cout << __PRETTY_FUNCTION__ << endl;
	str = new char[6];
	strcpy(str, "hello");
}

myString::myString(char *str) {
	cout << __PRETTY_FUNCTION__ << endl;
	size = strlen(str);
	this->str = new char[size + 1];
	strcpy(this->str, str);
}
myString::~myString() {
	cout << __PRETTY_FUNCTION__ << endl;
	delete [] str; 
}

void myString::printString() {
	cout << __PRETTY_FUNCTION__ << endl;
	cout << "str = " << str << endl;
}

/* geeter */
void Person::get_Person() {
	cout << __PRETTY_FUNCTION__ << endl;
	cout << "age: " << age << endl;
	cout << "weight: " << weight << endl;
	cout << "const t: " << t << endl;
	cout << "count " << count << endl;
}

/* paramertr constructor */
Person::Person(int a, int b): age(a), weight(b), t(5) {
	count++;
	cout << __PRETTY_FUNCTION__ << " with parameter" <<  endl;
}

/* default construct */
Person::Person():t(6){
	count++;
	cout << " default  " << __PRETTY_FUNCTION__ << endl;
	age = 10;
	weight = 30;
}

/* default destructor */
Person::~Person() {
	count--;
	cout << __PRETTY_FUNCTION__ << endl;
}

/* setter func */
void Person::set_Person(int age, int weight) {
	cout << __PRETTY_FUNCTION__ << endl;
	this->age = age;
	this->weight = weight;
//	this->get_Person();
}

Player::Player(int id, int salary):id(id), salary(salary), Person(30, 60) {
	pcount++;
	cout << __PRETTY_FUNCTION__ << endl;
}

Player::~Player() {
	pcount--;	
	cout << __PRETTY_FUNCTION__ << endl;
}

void Player::getPlayer() {
	cout << __PRETTY_FUNCTION__ << endl;
	cout << "id  = "  << id << endl;
	cout << "salary  = "  << salary << endl;
	//get_Person();
}
