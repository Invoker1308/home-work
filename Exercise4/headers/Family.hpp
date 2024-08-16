#ifndef FAMILY_H_INCLUDED
#define FAMILY_H_INCLUDED

#include "Person.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

class Family {

private:

	int Member;
	int HouseNumber;
	vector<Person*> VecPer;

public:

	Family();

	void setMember();

	int getNumber();

	void setHouseNumber();

	int getHouseNumber();

	void setVecPer();

	vector<Person*> getVecPer();

	void DisplayFa();

};



#endif //FAMILY_H_INCLUDED