#include "../headers/Teacher.hpp"

//constructor
Teacher::Teacher() {
	setBaseSalary();
	setBonusSalary();
	setFine();
	setNetSalary(0);
}

//set base salary 
void Teacher::setBaseSalary() {
	cout << "Base salary: ";
	cin >> BaseSalary;
}

//get base salary 
int Teacher::getBaseSalary() {
	return BaseSalary;
}

//set bonus salary 
void Teacher::setBonusSalary() {
	cout << "Bonus salary: ";
	cin >> BonusSalary;
}

//get bonus salary 
int Teacher::getBonusSalary() {
	return BonusSalary;
}

//set fine
void Teacher::setFine() {
	cout << "Fine: ";
	cin >> Fine;
}

//get fine
int Teacher::getFine() {
	return Fine;
}

//set net salary
void Teacher::setNetSalary(int net) {
	NetSalary = net;
}

//get net salary
int Teacher::getNetSalary() {
	return NetSalary;
}