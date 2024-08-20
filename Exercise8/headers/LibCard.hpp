#ifndef LIB_CARD_H_INCLUDED
#define LIB_CARD_H_INCLUDED

#include "Student.hpp"

#include <iostream>
#include <string>

using namespace std;

class LibCard : public Student {

private:

	int CardId;
	string BorrowDate;
	string DueDate;
	int BookId;

public:

	LibCard();

	void setCardId();

	int getCardId();

	void setBorrowDate();

	string getBorrowDate();

	void setDueDate();

	string getDueDate();

	void setBookId();

	int getBookId();

};





#endif //LIB_CARD_H_INCLUDED