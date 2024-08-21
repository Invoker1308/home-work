#include "../headers/Transportation.hpp"

//constructor
Transportation::Transportation() {
	setId();
	setCompany();
	setYear();
	setPrice();
	setColor();
}

//set id for Transportation
void Transportation::setId() {
	cout << "Id: ";
	cin >> Id;
}

//get Transportation's id
int Transportation::getId() {
	return Id;
}

//set company for transportation
void Transportation::setCompany() {
	cout << "Company: ";
	cin.get();
	getline(cin, Company);
}

//get transportation's company
string Transportation::getCompany() {
	return Company;
}

//set year released for transportation
void Transportation::setYear() {
	cout << "Year: ";
	cin >> Year;
}

//get transportation's year released
int Transportation::getYear() {
	return Year;
}

//set price
void Transportation::setPrice() {
	cout << "Price: ";
	cin >> Price;
}

//get price
int Transportation::getPrice() {
	return Price;
}

//set color
void Transportation::setColor() {
	cout << "Color: ";
	cin.get();
	getline(cin, Color);
}

//get color
string Transportation::getColor() {
	return Color;
}

//set type for transportation
void Transportation::setType(int x) {
	Type = x;
}

//get type
int Transportation::getType() {
	return Type;
}