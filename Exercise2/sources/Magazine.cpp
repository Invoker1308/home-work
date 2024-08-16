
#include "../headers/Magazine.hpp"

//constructor
Magazine::Magazine() {
	cout << "Issue number: ";
	cin >> IssueNumber;
	cout << "Issue month: ";
	cin >> IssueMonth;
}

//display issue number and month of magazine
void Magazine::Display() {
	cout << left << "Issue number: " << setw(14) << IssueNumber << "  " << "Issue month: " << setw(4) << IssueMonth << endl;
}