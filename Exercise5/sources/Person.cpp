#include "../headers/Person.hpp"

//constructor
Person::Person() {
	setFullName();
	setAge();
	setId();
}

//set full name
void Person::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
}

//get full name
string Person::getFullName() {
	return FullName;
}

//set age
void Person::setAge() {
	cout << "Age: ";
	cin >> Age;
}

//get age
int Person::getAge() {
	return Age;
}

//set id, id is unique
void Person::setId() {
	cout << "ID: ";
	cin >> Id;
}

//get id
int Person::getId() {
	return Id;
}