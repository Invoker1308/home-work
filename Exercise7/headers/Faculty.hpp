#ifndef FACULTY_H_INCLUDED
#define FACULTY_H_INCLUDED

#include "Teacher.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Faculty {

private:

	vector<Teacher*> VecTe;

public:

	void AddById();

	void Display();

	void DeleteById(int id);

	void CalNetSalary(int id);

};

#endif //FACULTY_H_INCLUDED