#include "../headers/GoodStudent.hpp"

//constructor
GoodStudent::GoodStudent() {
	setGpa();
	setBestReward();
}

//set gpa
void GoodStudent::setGpa() {
	cout << "Gpa: ";
	cin >> Gpa;
}

//get gpa
int GoodStudent::getGpa() {
	return Gpa;
}

//set best reward
void GoodStudent::setBestReward() {
	cout << "Best reward: ";
	cin.get();
	getline(cin, BestReward);
}

//get best reward
string GoodStudent::getBestReward() {
	return BestReward;
}

//show special info
void GoodStudent::ShowMyInfo() {
	cout << left << "Gpa: " << Gpa << "  " << "Best reward: " << BestReward << endl;
}