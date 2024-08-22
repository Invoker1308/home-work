#ifndef NORMAL_STUDENT_H_INCLUDED
#define NORMAL_STUDENT_H_INCLUDED

#include "Student.hpp"

#include <iostream>
#include <string>

using namespace std;

class NormalStudent : public Student {

private:

	int EnglishScore;
	int EntryTestScore;

public:

	NormalStudent();

	void setEnglishScore();

	int getEnglishScore();

	void setEntryTestScore();

	int getEntryTestScore();

	void ShowMyInfo();

};

#endif //NORMAL_STUDENT_H_INCLUDED