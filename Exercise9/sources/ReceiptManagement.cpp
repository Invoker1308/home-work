#include "../headers/ReceiptManagement.hpp"

//Add a new receipt by meter's ID
void ReceiptManagement::AddById() {
	//push a new receipt to vector
	VecRe.push_back(new Receipt);
	//if id already exists, delete new receipt just added in vector
	for (int i = 0;i < VecRe.size() - 1;i++) {
		if (VecRe[i]->getMeterId() == VecRe[VecRe.size() - 1]->getMeterId()) {
			VecRe.pop_back();
			cout << "ID already exists." << endl;
			break;
		}
	}
}

//display all receipts
void ReceiptManagement::Display() {
	cout << left << setw(20) << "Full name" << setw(20) << "House number" << setw(12) << "Meter's ID" << setw(10) << "Previous" << setw(10) << "Current" << endl;
	for (int i = 0;i < VecRe.size();i++) {
		cout << left << setw(20) << VecRe[i]->getFullName() << setw(20) << VecRe[i]->getHouseNumber() << setw(12) << VecRe[i]->getMeterId() << setw(10) << VecRe[i]->getPrevious() << setw(10) << VecRe[i]->getCurrent()  << endl;
	}
}


//delete receipt by id
void ReceiptManagement::DeleteById(int id) {
	bool check = 0;
	for (int i = 0;i < VecRe.size();i++) {
		if (VecRe[i]->getMeterId() == id) {
			VecRe.erase(VecRe.begin() + i);
			check = 1;
		}
	}
	//if meter's id does not exists, inform users
	if (!check)
		cout << "Not found ID." << endl;
}


//Calculate the due for customer by meter's ID
void ReceiptManagement::CalculateDue(int id) {
	bool check = 0;
	int i;
	for (i = 0;i < VecRe.size();i++) {
		if (VecRe[i]->getMeterId() == id) {
			VecRe[i]->setDue((VecRe[i]->getCurrent() - VecRe[i]->getPrevious())*5);
			check = 1;
			//break when found customer need to calculate due
			break;
		}
	}
	if (!check)
		cout << "Not found ID." << endl;
	else
		cout << VecRe[i]->getDue() << endl;
}

//edit customer's information
void ReceiptManagement::EditInfor(int id) {
	bool check = 0;
	int op;
	cout << "Choose a information you want to edit:" << endl;
	cout << "1.Full name" << endl;
	cout << "2.House number" << endl;
	cout << "3.Meter's ID" << endl;
	cout << "Your option: ";
	cin >> op;
	//if users choose option don't have, rechoose
	while (op < 1 || op > 5) {
		cout << "Please select a feature from 1 to 3." << endl;
		cout << "Your option: ";
		cin >> op;
	}
	for (int i = 0;i < VecRe.size();i++) {
		if (VecRe[i]->getMeterId() == id) {
			if (op == 1)
				VecRe[i]->setFullName();
			if (op == 2)
				VecRe[i]->setHouseNumber();
			if (op == 3)
				VecRe[i]->setMeterId();
			check = 1;
			break;
		}
	}
	if (!check)
		cout << "Not found ID." << endl;
}