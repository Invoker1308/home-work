
#include "../headers/Candidate.hpp"

//constructor
Candidate::Candidate() {
	setId();
	setFullName();
	setAddress();
	setPriorityLevel();
}

//set id for candidate
void Candidate::setId() {
	cout << "Id: ";
	cin >> Id;
}

//get candidate's id
int Candidate::getId() {
	return Id;
}

//set full name for candidate
void Candidate::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
}

//get candidate's full name
string Candidate::getFullName() {
	return FullName;
}

//set address for candidate
void Candidate::setAddress() {
	cout << "Address: ";
	getline(cin, Address);
}

//get candidate's address
string Candidate::getAddress() {
	return Address;
}

//set priority level for candidate
void Candidate::setPriorityLevel() {
	cout << "Priority level: ";
	cin >> PriorityLevel;
}

//get candidate's priority level
int Candidate::getPriorityLevel() {
	return PriorityLevel;
}

//set group for candidate: 1 = A, 2 = B, 3 = C
void Candidate::setGroup(int gr) {
	Group = gr;
}

//get candidate's group
int Candidate::getGroup() {
	return Group;
}




