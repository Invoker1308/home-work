#include "../headers/Family.hpp"

//constructor
Family::Family() {
	setMember();
	setHouseNumber();
	setVecPer();
}

//set member for family
void Family::setMember() {
	cout << "Member: ";
	cin >> Member;
}

//get family's number
int Family::getNumber() {
	return Member;
}

//set house number
void Family::setHouseNumber() {
	cout << "House number: ";
	cin >> HouseNumber;
}

//get house number
int Family::getHouseNumber() {
	return HouseNumber;
}

//set vector person for people in family
void Family::setVecPer() {
	for (int i = 0;i < Member;i++) {
		VecPer.push_back(new Person);
	}
}
//get vector person
vector<Person*> Family::getVecPer() {
	return VecPer;
}

//display information about family
void Family::DisplayFa() {
	cout << "Member: " << Member << endl;
	cout << "House number: " << HouseNumber << endl;
	cout << left << setw(20) << "Full name" << setw(10) << "Age" << setw(10) << "Job" << setw(10) << "ID" << endl;
	for (int i = 0;i < Member;i++) {
		VecPer[i]->DisplayPer();
	}
}