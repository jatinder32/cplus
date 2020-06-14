#include "student.h"
#include <iostream>

Student::Student(int grade, int roll_no)
	:mgrade(grade), mroll_no(roll_no), Person(15, "test") {}

Student::~Student() {
	 std::cout << "Student D \n";


}

void Student::GetStudent() {
	 std::cout << "Student grade: " << mgrade << std::endl;
	 std::cout << "Student roll_no: " << mroll_no << std::endl;

}

void Student::GetInfo() {
	 std::cout << "Student grade: " << mgrade << std::endl;
	 std::cout << "Student roll_no: " << mroll_no << std::endl;

}


bool Student::operator >(const Student &rhs) const
{
	if(this->mgrade >= rhs.mgrade)
		return true;
	else
		return false;
}

std::ostream& operator <<(std::ostream &output,
				   const Student &S)
{
	output << " S: garde :" << S.mgrade << std::endl;  
	output << " S: rollno :" << S.mroll_no << std::endl;  
	return output;


} 
