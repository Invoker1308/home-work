#include "../headers/Certificate.hpp"

//contructor
Certificate::Certificate() {
	setId();
	setName();
	setRank();
	setDate();
}

//set id
void Certificate::setId() {
	cout << "ID: ";
	cin >> Id;
}

//get id
int Certificate::getId() {
	return Id;
}

//set name
void Certificate::setName() {
	cout << "Name: ";
	cin.get();
	getline(cin, Name);
}

//get name
string Certificate::getName() {
	return Name;
}

//set rank
void Certificate::setRank() {
	cout << "Rank: ";
	getline(cin, Rank);
}

//get rank
string Certificate::getRank() {
	return Rank;
}

//set date
void Certificate::setDate() {
	cout << "Date: ";
	getline(cin, Date);
}

//get date
string Certificate::getDate() {
	return Date;
}

