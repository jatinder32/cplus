#include <iostream>
#include "Person.h"

using namespace std;

class emp {};
int main()
{
	Person P;

	Person P1(10,20);

	//cout << "P.age = " << P.get_age() << endl;
	P.set_Person(10, 20);	
	P.get_Person();
	P1.get_Person();
	int x = 10;
	Test t1(x);	
	cout<<t1.getT()<<endl;
	//Person Pq[10];
	Person *p = new Person[10];

	return 0;
}
