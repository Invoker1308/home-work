
#include "../headers/Newspaper.hpp"

//constructor
Newspaper::Newspaper() {
	cout << "Issue date: ";
	cin >> IssueDate;
}

//display issue date of newspaper
void Newspaper::Display() {
	cout << left << "Issue date: " << setw(16) << IssueDate << endl;
}