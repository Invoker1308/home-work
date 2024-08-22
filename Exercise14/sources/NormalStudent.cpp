#include "../headers/NormalStudent.hpp"

//constructor
NormalStudent::NormalStudent() {
	setEnglishScore();
	setEntryTestScore();
}

//set english score
void NormalStudent::setEnglishScore() {
	cout << "English score: ";
	cin >> EnglishScore;
}

//get english score
int NormalStudent::getEnglishScore() {
	return EnglishScore;
}

//set entry test score
void NormalStudent::setEntryTestScore() {
	cout << "Entry test score: ";
	cin >> EntryTestScore;
}

//get entry test score
int NormalStudent::getEntryTestScore() {
	return EntryTestScore;
}

//show special info
void NormalStudent::ShowMyInfo() {
	cout << left << "English score: " << EnglishScore << "  " << "Entry test score: " << EntryTestScore << endl;
}