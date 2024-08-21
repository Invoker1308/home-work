#include "../headers/Truck.hpp"

Truck::Truck() {
	setPayload();
}

void Truck::setPayload() {
	cout << "Payload: ";
	cin >> Payload;
}

int Truck::getPayload() {
	return Payload;
}

void Truck::Display() {
	cout << left << "Payload: " << setw(10) << Payload << endl;
}