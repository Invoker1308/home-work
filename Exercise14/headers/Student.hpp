#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

using namespace std;

class Student {

private:

	string FullName;
	string DoB;
	string Sex;
	string Phone;
	string University;
	string GradeLevel;
	int StuType;

public:

	Student();

	void setFullName();

	string getFullName();

	void setDoB();

	string getDoB();

	void setSex();

	string getSex();

	void setPhone();

	string getPhone();

	void setUniversity();

	string getUniversity();

	void setGradeLevel();

	string getGradeLevel();

	void setStuType(int StuType);

	int getStuType();

	virtual void ShowMyInfo() = 0;

	virtual ~Student(){}

};

#endif //STUDENT_H_INCLUDED