#ifndef FACULTY_MANAGEMENT_H_INCLUDED
#define FACULTY_MANAGEMENT_H_INCLUDED

#include "Student.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FacultyManagement {

private:

	string Name;
	vector<Student*> VecStu;

public:

	FacultyManagement();

	void setName(string Name);

	string getName();

	void setVecStu(Student* Stu);

	vector<Student*> getVecStu();

};

#endif //FACULTY_MANAGEMENT_H_INCLUDED