#include "../headers/Fresher.hpp"

//constructor
Fresher::Fresher() {
	setGraduationDate();
	setGraduationRank();
	setEducation();
}

//set graduation date
void Fresher::setGraduationDate() {
	cout << "Graduation date: ";
	getline(cin, GraduationDate);
}

//get graduation date
string Fresher::getGraduationDate() {
	return GraduationDate;
}

//set graduation rank
void Fresher::setGraduationRank() {
	cout << "Graduation rank: ";
	getline(cin, GraduationRank);
}

//set graduation rank
string Fresher::getGraduationRank() {
	return GraduationRank;
}

//set educaiton
void Fresher::setEducation() {
	cout << "Education: ";
	getline(cin, Education);
}

//get education
string Fresher::getEducation() {
	return Education;
}

//show special information
void Fresher::ShowMe() {
	cout << left << "Graduation date: " << GraduationDate << "  " << "Graduation rank: " << GraduationRank << "  " << "Education: " << Education << endl;
}