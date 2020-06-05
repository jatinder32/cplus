#ifndef _PERSON_H
#define _PERSON_H

class Person {
private:
        int age;
        int weight;
	const int t;
public:
        Person();
        Person(int a, int b);
        ~Person();
        void get_Person();
	void set_Person(int age, int weight);
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
#endif
