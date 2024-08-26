#ifndef REGULAR_STUDENT_H_INCLUDED
#define REGULAR_STUDENT_H_INCLUDED

#include "Student.hpp"

#include <iostream>
#include <string>

using namespace std;

class InServiceStudent : public Student {

private:

	string TrainLocation;

public:

	InServiceStudent();

	void setTrainLocation();

	string getTrainLocation();

	void ShowMyInfo();

};

#endif //REGULAR_STUDENT_H_INCLUDED