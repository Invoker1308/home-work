#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include "Person.hpp"

#include <iostream>

using namespace std;

class Room {

private:

	int RoomNumber;
	int RentalDays;
	char RoomType;
	Person* PerInfo;

public:

	Room();

	void setRoomNumber();

	int getRoomNumber();

	void setRentalDays();

	int getRentalDays();

	void setRoomType();

	char getRoomType();

	void setPerInfo();

	Person* getPerInfo();

};

#endif //ROOM_H_INCLUDED