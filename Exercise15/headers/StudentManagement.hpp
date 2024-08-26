#ifndef STUDENT_MANAGEMENT_H_INCLUDED
#define STUDENT_MANAGEMENT_H_INCLUDED


#include "Student.hpp"
#include "InServiceStudent.hpp"
#include "FacultyManagement.hpp"



#include <vector>
#include <iostream>
#include <iomanip>
#include <exception>
#include <stdexcept>
#include <algorithm>

using namespace std;

class StudentManagement {

public:

	void AddStudent(vector<Student*>& v, int p);

	void ShowInfo(vector<Student*> v);

	void Display(Student* emPtr);

	bool CheckRegular(vector<Student*> v, int id);

	void ShowGpaBySemester(vector<Student*> v, string semester);

	void NumberRegular(vector<FacultyManagement*> v, string Fal);

	void HighestEntry(vector<FacultyManagement*> v);

	void FindInService(vector<FacultyManagement*> v, string TrainLocation);

	void GoodGpa(vector<FacultyManagement*> v);

	void BestGpa(vector<FacultyManagement*> v);

	void SortByType(vector<FacultyManagement*>& v);

	void Statistics(vector<FacultyManagement*>& v);

};


#endif //STUDENT_MANAGEMENT_H_INCLUDED