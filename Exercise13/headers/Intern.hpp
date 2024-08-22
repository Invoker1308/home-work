#ifndef INTERN_H_INCLUDED
#define INTERN_H_INCLUDED

#include "Employee.hpp"

#include <iostream>
#include <string>

using namespace std;

class Intern : public Employee {

private:

	string Major;
	string Semester;
	string University;

public:

	Intern();

	void setMajor();

	string getMajor();

	void setSemester();

	string getSemester();

	void setUniversity();

	string getUniversity();

	void ShowMe();

};


#endif //INTERN_H_INCLUDED