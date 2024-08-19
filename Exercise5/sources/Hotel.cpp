#include "../headers//Hotel.hpp"

//add room by id
void Hotel::AddById() {
	//push new room to vector
	vecRoom.push_back(new Room);
	//if id already exists, delete new room just added in vector
	for (int i = 0;i < vecRoom.size()-1;i++) {
		if (vecRoom[i]->getPerInfo()->getId() == vecRoom[vecRoom.size() - 1]->getPerInfo()->getId()) {
			vecRoom.pop_back();
			cout << "ID already exists." << endl;
			break;
		}
	}
}

//display all rooms in hotel
void Hotel::Display() {
	cout << left << setw(8) << "Room" << setw(16) << "Rental days" << setw(10) << "Room type" << setw(20) << "Full name" << setw(10) << "Age" << setw(16) << "ID" << endl;
	for (int i = 0;i < vecRoom.size();i++) {
		cout << left << setw(8) << vecRoom[i]->getRoomNumber() << setw(16) << vecRoom[i]->getRentalDays() << setw(10) << vecRoom[i]->getRoomType() << setw(20) << vecRoom[i]->getPerInfo()->getFullName() << setw(10) << vecRoom[i]->getPerInfo()->getAge() << setw(16) << vecRoom[i]->getPerInfo()->getId() << endl;
	}
}

//delete room by id
void Hotel::DeleteById(int id) {
	bool check = 0;
	for (int i = 0;i < vecRoom.size();i++) {
		if (vecRoom[i]->getPerInfo()->getId() == id) {
			vecRoom.erase(vecRoom.begin() + i);
			check = 1;
		}
	}
	//if id does not exists, inform users
	if (!check)
		cout << "Not found ID." << endl;
}

//calculate room fee
void Hotel::RoomFee(int id) {
	bool check = 0;
	for (int i = 0;i < vecRoom.size();i++) {
		//check type of room
		if (vecRoom[i]->getPerInfo()->getId() == id) {
			if (vecRoom[i]->getRoomType() == 'A')
				cout << "Room fee: " << 500 * vecRoom[i]->getRentalDays() << "$" << endl;
			if (vecRoom[i]->getRoomType() == 'B')
				cout << "Room fee: " << 300 * vecRoom[i]->getRentalDays() << "$" << endl;
			if (vecRoom[i]->getRoomType() == 'C')
				cout << "Room fee: " << 100 * vecRoom[i]->getRentalDays() << "$" << endl;
			check = 1;
			break;
		}
	}
	if (!check)
		cout << "Not found ID." << endl;
}