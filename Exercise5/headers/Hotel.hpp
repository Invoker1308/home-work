#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

#include <vector>
#include <iomanip>

#include "Room.hpp"

class Hotel {

private:

	vector<Room*> vecRoom;

public:

	void AddById();

	void DeleteById(int id);

	void Display();

	void RoomFee(int id);

};


#endif //HOTEl_H_INCLUDED