#include "../headers/Student.hpp"

//constructor
Student::Student() {
	setFullName();
	setAge();
	setClass();
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

//set class
void Student::setClass() {
	cout << "Class: ";
	cin.get();
	getline(cin, Class);
}

//get class
string Student::getClass() {
	return Class;
}

