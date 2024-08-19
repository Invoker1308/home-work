#include "../headers/Room.hpp"

//constructor
Room::Room() {
	setRoomNumber();
	setRentalDays();
	setRoomType();
	setPerInfo();
}

//set room number
void Room::setRoomNumber() {
	cout << "Number of room: ";
	cin >> RoomNumber;
}

//get room number
int Room::getRoomNumber() {
	return RoomNumber;
}

//set rental days
void Room::setRentalDays() {
	cout << "Rental days: ";
	cin >> RentalDays;
}

//get rental days
int Room::getRentalDays() {
	return RentalDays;
}

//set type of room
void Room::setRoomType() {
	int i;
	cout << "Room type: " << endl;
	cout << "1. Type A" << endl;
	cout << "2. Type B" << endl;
	cout << "3. Type C" << endl;
	cout << "Your option: ";
	cin >> i;
	// if i < 1 or > 3 rechoose
	while (i < 1 || i > 3) {
		cout << "Please select from 1 to 3." << endl;
		cout << "Your options: ";
		cin >> i;
	}
	// i = 1 : A
	// i = 2 : B
	// i = 3 : C
	RoomType = i - 1 + 'A';
}

//get type of room
char Room::getRoomType() {
	return RoomType;
}

//set vector person information
void Room::setPerInfo() {
	PerInfo = new Person;
}

//get vector person information
Person* Room::getPerInfo() {
	return PerInfo;
}