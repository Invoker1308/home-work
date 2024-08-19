#ifndef SCHOOL_H_INCLUDED
#define SCHOOL_H_INCLUDED

#include "Student.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

class School {

private:

	vector<Student*> VecStu;

public:

	School();

	void AddStudent();

	void DisplayAll();

	void DisplayStu20();

	void DisNumStu23DN();

	void setVecStu();

	vector<Student*> getVecStu();

};



#endif //SCHOOL_H_INCLUDED