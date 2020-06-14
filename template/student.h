#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "person.h"

class Student : public Person {
private:
	int mgrade;
	int mroll_no;
	Student();
public:
	Student(int grade, int roll_no);
	~Student();
	void GetStudent();
	void GetInfo();

	bool operator > (const Student &rhs) const;
	friend std::ostream& operator <<(std::ostream &output,
				  const Student &S);
};
#endif
