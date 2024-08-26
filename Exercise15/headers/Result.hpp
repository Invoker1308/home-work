#ifndef RESULT_H_INCLUDED
#define RESULT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Result {

private:

	string Semester;
	double Gpa;

public:

	Result();

	void setSemester(string Semester);

	string getSemester();

	void setGpa(double Gpa);

	double getGpa();

};

#endif //RESULT_H_INCLUDED