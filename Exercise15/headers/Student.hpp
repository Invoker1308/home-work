#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include "Result.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {

private:

	string Faculty;
	int Id;
	string FullName;
	string DoB;
	string YearAdmiss;
	int EntryScore;
	vector<Result*> VecRe;
	int StudentType;

public:

	Student();

	void setFaculty();

	string getFaculty();

	void setId();

	int getId();

	void setFullName();

	string getFullName();

	void setDoB();

	string getDoB();

	void setYearAdmiss();

	string getYearAdmiss();

	void setEntryScore();

	int getEntryScore();

	void setVecRe();

	vector<Result*> getVecRe();

	void setStudentType(int StudentType);

	void setStudentType();

	int getStudentType();

	virtual ~Student(){}

};

#endif //STUDENT_H_INCLUDED