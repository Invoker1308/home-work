#ifndef GOOD_STUDENT_H_INCLUDED
#define GOOD_STUDENT_H_INCLUDED

#include "Student.hpp"

#include <iostream>
#include <string>

using namespace std;

class GoodStudent : public Student {

private:

	int Gpa;
	string BestReward;

public:

	GoodStudent();

	void setGpa();

	int getGpa();

	void setBestReward();

	string getBestReward();

	void ShowMyInfo();

};

#endif //GOOD_STUDENT_H_INCLUDED