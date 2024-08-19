#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED

#include "Person.hpp"

#include <iostream>
#include <string>

using namespace std;

class Teacher : public Person {

private:

	int BaseSalary;
	int BonusSalary;
	int Fine;
	int NetSalary;

public:

	Teacher();

	void setBaseSalary();

	int getBaseSalary();

	void setBonusSalary();

	int getBonusSalary();

	void setFine();

	int getFine();

	void setNetSalary(int net);

	int getNetSalary();

};

#endif //TEACHER_H_INCLUDED