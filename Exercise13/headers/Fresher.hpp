#ifndef FRESHER_H_INCLUDED
#define FRESHER_H_INCLUDED

#include "Employee.hpp"

#include <iostream>
#include <string>

using namespace std;

class Fresher : public Employee {

private:

	string GraduationDate;
	string GraduationRank;
	string Education;

public:

	Fresher();

	void setGraduationDate();

	string getGraduationDate();

	void setGraduationRank();

	string getGraduationRank();

	void setEducation();

	string getEducation();

	void ShowMe();

};


#endif //FRESHER_H_INCLUDED