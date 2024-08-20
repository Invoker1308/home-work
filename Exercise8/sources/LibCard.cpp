#include "../headers/LibCard.hpp"

//constructor
LibCard::LibCard() {
	setCardId();
	setBorrowDate();
	setDueDate();
	setBookId();
}

//set card's id
void LibCard::setCardId() {
	cout << "Card's ID: ";
	cin >> CardId;
}

//get card's id
int LibCard::getCardId() {
	return CardId;
}

//set borrow date
void LibCard::setBorrowDate() {
	cout << "Borrow date: ";
	cin.get();
	getline(cin, BorrowDate);
}

//get borrow date
string LibCard::getBorrowDate() {
	return BorrowDate;
}

//set due date
void LibCard::setDueDate() {
	cout << "Due date: ";
	getline(cin, DueDate);
}

//get due date
string LibCard::getDueDate() {
	return DueDate;
}

//set book's id
void LibCard::setBookId() {
	cout << "Book's ID: ";
	cin >> BookId;
}

//get book's id
int LibCard::getBookId() {
	return BookId;
}


