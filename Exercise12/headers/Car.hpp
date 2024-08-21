#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include "Transportation.hpp"

#include <iostream>
#include <string>

using namespace std;

class Car : public Transportation {

private:

	int SeatNumber;
	string EngineType;

public:

	Car();

	void setSeatNumber();

	int getSeatNumber();

	void setEngineType();

	string getEngineType();

	void Display();

};

#endif //CAR_H_INCLUDED