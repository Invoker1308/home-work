#include "../headers/Person.hpp"

//constructor
Person::Person() {
	setFullName();
	setAge();
	setJob();
	setId();
}

//set name for person
void Person::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
}

//get name
string Person::getFullName() {
	return FullName;
}

//set age for person
void Person::setAge() {
	cout << "Age: ";
	cin >> Age;
}

//get age
int Person::getAge() {
	return Age;
}

//set job for person
void Person::setJob() {
	cout << "Job: ";
	cin.get();
	getline(cin, Job);
}

//get job
string Person::getJob() {
	return Job;
}

//set id for person
void Person::setId() {
	cout << "Id: ";
	cin >> Id;
}

//get id
int Person::getId() {
	return Id;
}

//display person 
void Person::DisplayPer() {
	cout << left << setw(20) << FullName << setw(10) << Age << setw(10) << Job << setw(10) << Id << endl;
	/*cout << "Full name: " << FullName << endl;
	cout << "Age: " << Age << endl;
	cout << "Job: " << Job << endl;
	cout << "ID: " << Id << endl;*/
}