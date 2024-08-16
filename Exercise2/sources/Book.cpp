
#include "../headers/Book.hpp"

//constructor
Book::Book() {
	cout << "Author: ";
	cin.get();
	getline(cin,Author);
	cout << "Pages: ";
	cin >> Pages;
}

//display author and pages of book
void Book::Display() {
	cout << left << "Author: " << setw(20) << Author << "  " << "Pages: " << setw(10) << Pages << endl;
}