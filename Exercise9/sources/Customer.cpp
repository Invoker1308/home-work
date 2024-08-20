#include "../headers/Customer.hpp"

//constructor
Customer::Customer() {
	setFullName();
	setHouseNumber();
	setMeterId();
}

//set full name
void Customer::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
}

//get full name
string Customer::getFullName() {
	return FullName;
}

//set house number
void Customer::setHouseNumber() {
	cout << "House number: ";
	cin >> HouseNumber;
}

//get house number
int Customer::getHouseNumber() {
	return HouseNumber;
}

//set meter's id
void Customer::setMeterId() {
	cout << "Meter's ID: ";
	cin >> MeterId;
}

//get meter's id
int Customer::getMeterId() {
	return MeterId;
}