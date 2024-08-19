#include "../headers/Student.hpp"

//constructor
Student::Student() {
	setFullName();
	setAge();
	setHometown();
}

//set full name
void Student::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
}

//get full name
string Student::getFullName() {
	return FullName;
}

//set age
void Student::setAge() {
	cout << "Age: ";
	cin >> Age;
}

//get age
int Student::getAge() {
	return Age;
}

//set hometown
void Student::setHometown() {
	cout << "Hometown: ";
	cin.get();
	getline(cin, Hometown);
}

//get hometown
string Student::getHometown() {
	return Hometown;
}