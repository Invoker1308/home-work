#ifndef NEIGHBORHOOD_H_INCLUDED
#define NEIGHBORHOOD_H_INCLUDED

#include "Family.hpp"

#include <iostream>
#include <vector>

using namespace std;

class Neighborhood {

private:

	int FamilyNumber;
	vector<Family*> VecFa;

public:

	Neighborhood();

	void setFamilyNumber();

	int getFamilyNumber();

	void setVecFa();

	vector<Family*> getVecFa();

	void DisplayNei();

};

#endif