#include "template.h"
#include "person.h"
#include "student.h"

int main()
{
	std::cout << maxOf<int>(5,3) << std::endl;
	std::cout << maxOf<char>('x', 'z') << std::endl;

	std::string j = "jatinder";
	std::string k = "mumar";
	std::cout << maxOf<std::string>(j,k) << std::endl;

	
	std::cout << pi<int> << std::endl;
	std::cout << areaOfCircle<float>(3) << std::endl;
	//std::string name = "jatinder";
//	Person p(30, "name");

//	p.GetPerson();

//	Student S(10, 32);
//	S.GetStudent();
//	S.GetPerson();

		
	const Student S3(10, 32);
	const Student S2(19, 32);
	std::cout << maxOf<Student>(S3,S2) << std::endl;
	Person *S1 = new Student(10, 32);
	S1->GetInfo();
	delete S1;
	return 0;
}
