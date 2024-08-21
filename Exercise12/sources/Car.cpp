#include "../headers/Car.hpp"

//constructor
Car::Car() {
	setSeatNumber();
	setEngineType();
}

//set number of seats
void Car::setSeatNumber() {
	cout << "Number of seats: ";
	cin >> SeatNumber;
}

//get number of seats
int Car::getSeatNumber() {
	return SeatNumber;
}

//set engine type
void Car::setEngineType() {
	cout << "Type of engine: ";
	cin.get();
	getline(cin, EngineType);
}

//get engine type
string Car::getEngineType() {
	return EngineType;
}

//display special information of car
void Car::Display() {
	cout << left << "Seats: " << setw(4) << SeatNumber << "  " << "Engine: " << setw(10) << EngineType << endl;
}