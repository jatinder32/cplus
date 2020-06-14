#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;
class emp {};
int main()
{
	//static Person P;
	//Person P1(10,20);

	//cout << "P.age = " << P.get_age() << endl;
	//P.set_Person(10, 20);	
	//P.get_Person();
	//P1.get_Person();
	//int x = 10;
	//Test t1(x);	
	//cout<<t1.getT()<<endl;
	//Person Pq[10];
/*
	Player P1(2345, 1000);
	P1.getPlayer();
	Player P2 = P1;
	P2.set_Person(12, 234);
	cout << "===============\n";
	P2.get_Person();
	cout << "===============\n";
	P1.getPlayer(); */

	myString s2((char *)"jatinder");
	s2.printString();
/*
	myString s3 = s2; //copy constutor
	cout << "===============\n";
	s3.printString();
	myString s4; 
	s4 = s3; //assgin constructor
	cout << "===============\n";
	s4.printString();
*/
	vector <myString> vec;
	vec.push_back(myString());
	vec.push_back(s2);
	return 0;
}
