
#include "../headers/Book.hpp"

Book::Book() {
	cout << "Author: ";
	cin >> Author;
	cout << "Pages: ";
	cin >> Pages;
}

void Book::Display() {
	cout << "Author: " << Author << "  " << "Pages: " << Pages << endl;
}