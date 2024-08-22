#ifndef STUDENT_MANAGEMENT_H_INCLUDED
#define STUDENT_MANAGEMENT_H_INCLUDED


#include "Student.hpp"
#include "GoodStudent.hpp"
#include "NormalStudent.hpp"



#include <vector>
#include <iostream>
#include <iomanip>
#include <exception>
#include <stdexcept>
#include <algorithm>

class StudentManagement {

public:

	void AddStudent(vector<Student*>& v, int p);

	void ShowInfo(vector<Student*> v);

	void Display(Student* emPtr);

	void Recruit(vector<Student*> v, int number);

};


#endif //STUDENT_MANAGEMENT_H_INCLUDED