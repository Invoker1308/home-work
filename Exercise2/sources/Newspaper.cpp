
#include "../headers/Newspaper.hpp"

Newspaper::Newspaper() {
	cout << "Issue date: ";
	cin >> IssueDate;
}

void Newspaper::Display() {
	cout << "Issue date: " << IssueDate << endl;
}