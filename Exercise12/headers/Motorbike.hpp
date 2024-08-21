#ifndef MOTORBIKE_H_INCLUDED
#define MOTORBIKE_H_INCLUDED

#include "Transportation.hpp"

#include <iostream>
#include <string>

using namespace std;

class Motorbike : public Transportation {

private:

	int Power;

public:

	Motorbike();

	void setPower();

	int getPower();

	void Display();

};

#endif //MOTORBIKE_H_INCLUDED