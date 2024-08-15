
#include "../headers/Magazine.hpp"

Magazine::Magazine() {
	cout << "Issue number: ";
	cin >> IssueNumber;
	cout << "Issue month: ";
	cin >> IssueMonth;
}

void Magazine::Display() {
	cout << "Issue number: " << IssueNumber << "  " << "Issue month: " << IssueMonth << endl;
}