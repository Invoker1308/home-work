#include "../headers/Intern.hpp"

//constructor
Intern::Intern() {
	setMajor();
	setSemester();
	setUniversity();
}

//set major
void Intern::setMajor() {
	cout << "Major: ";
	getline(cin, Major);
}

//get major
string Intern::getMajor() {
	return Major;
}

//set semestor
void Intern::setSemester() {
	cout << "Semester: ";
	getline(cin, Semester);
}

//get semestor
string Intern::getSemester() {
	return Semester;
}

//set university
void Intern::setUniversity() {
	cout << "University: ";
	getline(cin, University);
}

//get university
string Intern::getUniversity() {
	return University;
}

//show special information
void Intern::ShowMe() {
	cout << left << "Major: " << Major << "  " << "Semester: " << Semester << "  " << "University: " << University << endl;

}