#include "../headers/Student.hpp"

//constructor
Student::Student() {
	setFullName();
	setDoB();
	setSex();
	setPhone();
	setUniversity();
	setGradeLevel();
}

//set full name
void Student::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
	if (FullName.size() < 10 || FullName.size() > 50)
		throw std::invalid_argument("InvalidFullNameException");
}

//get full name
string Student::getFullName() {
	return FullName;
}

//set day of birth
void Student::setDoB() {
	cout << "Day of birth (DD/MM/YYYY): ";
	getline(cin, DoB); 
	if (DoB.size() != 10 || stoi(DoB.substr(0, 2)) < 1 || stoi(DoB.substr(0, 2)) > 31 || DoB[2] != '/' || stoi(DoB.substr(3, 5)) < 1 || stoi(DoB.substr(3, 5)) > 12 || DoB[5] != '/' || stoi(DoB.substr(6, 10)) < 1 || stoi(DoB.substr(6, 10)) > 2024)
		throw std::invalid_argument("InvalidDOBException");
}

//get day of birth
string Student::getDoB() {
	return DoB;
}

//set sex
void Student::setSex() {
	cout << "Sex: ";
	getline(cin, Sex);
}

//get sex
string Student::getSex() {
	return Sex;
}

//set phone
void Student::setPhone() {
	cout << "Phone number: ";
	getline(cin, Phone);
	if (Phone.size() != 10 || (Phone.substr(0, 3) != "090" && Phone.substr(0, 3) != "098" && Phone.substr(0, 3) != "091" && Phone.substr(0, 3) != "031" && Phone.substr(0, 3) != "035" && Phone.substr(0, 3) != "038"))
		throw std::invalid_argument("InvalidPhoneNumberException");
}

//get phone
string Student::getPhone() {
	return Phone;
}

//set university
void Student::setUniversity() {
	cout << "University: ";
	getline(cin, University);
}

//get univerity
string Student::getUniversity() {
	return University;
}

//set grade level
void Student::setGradeLevel() {
	cout << "Grade level: ";
	getline(cin, GradeLevel);
}

//get grade level
string Student::getGradeLevel() {
	return GradeLevel;
}

//set student type
void Student::setStuType(int StuType) {
	this->StuType = StuType;
}

//get student type
int Student::getStuType() {
	return StuType;
}