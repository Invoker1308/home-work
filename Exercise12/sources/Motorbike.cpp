#include "../headers/Motorbike.hpp"

//constructor
Motorbike::Motorbike() {
	setPower();
}

//set power
void Motorbike::setPower() {
	cout << "Power: ";
	cin >> Power;
}

//get power
int Motorbike::getPower() {
	return Power;
}

//display special information of motorbike
void Motorbike::Display() {
	cout << left << "Power: " << setw(10) << Power << endl;
}