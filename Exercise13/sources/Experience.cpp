#include "../headers/Experience.hpp"

//constructor
Experience::Experience() {
	setExpInYear();
	setProSkill();
}

//set yoe
void Experience::setExpInYear() {
	cout << "Years on experience: ";
	cin >> ExpInYear;
}

//get yoe
int Experience::getExpInYear() {
	return ExpInYear;
}

//set proskill
void Experience::setProSkill() {
	cout << "Professional skill: ";
	cin.get();
	getline(cin, ProSkill);
}

//get proskill
string Experience::getProSkill() {
	return ProSkill;
}

//show special information
void Experience::ShowMe() {
	cout << left << "Years on experience: " << ExpInYear << "  " << "Proskill: " << ProSkill << endl;
}