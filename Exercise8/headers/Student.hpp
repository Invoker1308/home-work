#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Student {

private:

	string FullName;
	int Age;
	string Class;

public:

	Student();

	void setFullName();

	string getFullName();

	void setAge();

	int getAge();

	void setClass();

	string getClass();

	virtual ~Student() {}

};





#endif //STUDENT_H_INCLUDED