#ifndef EXPERIENCE_H_INCLUDED
#define EXPERIENCE_H_INCLUDED

#include "Employee.hpp"

#include <iostream>
#include <string>

using namespace std;

class Experience : public Employee {

private:

	int ExpInYear;
	string ProSkill;

public:

	Experience();

	void setExpInYear();

	int getExpInYear();

	void setProSkill();

	string getProSkill();

	void ShowMe();

};


#endif //EXPERIENCE_H_INCLUDED