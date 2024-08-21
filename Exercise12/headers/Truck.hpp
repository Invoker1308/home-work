#ifndef TRUCK_H_INCLUDED
#define TRUCK_H_INCLUDED

#include "Transportation.hpp"

#include <iostream>
#include <string>

using namespace std;

class Truck : public Transportation {

private:

	int Payload;

public:

	Truck();

	void setPayload();

	int getPayload();

	void Display();

};

#endif //TRUCK_H_INCLUDED