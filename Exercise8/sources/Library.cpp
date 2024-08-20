#include "../headers/Library.hpp"

//add a new card by id
void Library::AddById() {
	//push a new card to vector
	VecLibCard.push_back(new LibCard);
	//if id already exists, delete new card just added in vector
	for (int i = 0;i < VecLibCard.size() - 1;i++) {
		if (VecLibCard[i]->getCardId() == VecLibCard[VecLibCard.size() - 1]->getCardId()) {
			VecLibCard.pop_back();
			cout << "Card's ID already exists." << endl;
			break;
		}
	}
}

//display all cards in library
void Library::Display() {
	cout << left << setw(10) << "Card's ID" << setw(20) << "Borrow date" << setw(20) << "Due date" << setw(10) << "Book's ID" << setw(20) << "Full name" << setw(10) << "Age" << setw(10) << "Class" << endl;
	for (int i = 0;i < VecLibCard.size();i++) {
		cout << left << setw(10) << VecLibCard[i]->getCardId() << setw(20) << VecLibCard[i]->getBorrowDate() << setw(20) << VecLibCard[i]->getDueDate() << setw(10) << VecLibCard[i]->getBookId() << setw(20) << VecLibCard[i]->getFullName() << setw(10) << VecLibCard[i]->getAge() << setw(10) << VecLibCard[i]->getClass() << endl;
	}
}


//delete card by id
void Library::DeleteById(int id) {
	bool check = 0;
	for (int i = 0;i < VecLibCard.size();i++) {
		if (VecLibCard[i]->getCardId() == id) {
			VecLibCard.erase(VecLibCard.begin() + i);
			check = 1;
		}
	}
	//if id does not exists, inform users
	if (!check)
		cout << "Not found ID." << endl;
}


