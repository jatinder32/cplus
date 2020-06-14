#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>

class Person {
private:
        int age;
        int weight;
	const int t;
	static int count;
public:
        Person();
        Person(int a, int b);
        ~Person();
        void get_Person();
	void set_Person(int age, int weight);
	static void ptest() {
		count = 0;
	}
};

class Player : public Person {
private:
	int id;
	int salary;
	static int pcount;
public:
	Player(int id, int salary);
	~Player();
	void getPlayer();
	void setPlayer();

};

class Test { 
	int &t; 
public: 
	Test(int &t):t(t) {}  //Initializer list must be used 
	int getT() { return t; } 
}; 

class Fred {
public:
	Fred(int i, int j);      // Assume there is no default constructor
};


class myString {
private:
	char *str;
	int size;
public:
	myString();
	myString(char *);
	~myString();
	myString(const myString &rhs); //copy
	myString& operator = (const myString &obj); //assginement
	myString(myString && obj);
	void printString();
};









#endif
