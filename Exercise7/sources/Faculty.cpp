#include "../headers/Faculty.hpp"

//add teacher by id
void Faculty::AddById() {
	//push a new teacher to vector
	VecTe.push_back(new Teacher);
	//if id already exists, delete new teacher just added in vector
	for (int i = 0;i < VecTe.size() - 1;i++) {
		if (VecTe[i]->getId() == VecTe[VecTe.size() - 1]->getId()) {
			VecTe.pop_back();
			cout << "ID already exists." << endl;
			break;
		}
	}
}

//display all teacher in faculty
void Faculty::Display() {
	cout << left << setw(20) << "Full name" << setw(4) << "Age" << setw(16) << "Hometown" << setw(10) << "ID" << setw(20) << "Base salary" << setw(20) << "Bonus salary" << setw(20) << "Fine" << endl;
	for (int i = 0;i < VecTe.size();i++) {
		cout << left << setw(20) << VecTe[i]->getFullName() << setw(4) << VecTe[i]->getAge() << setw(16) << VecTe[i]->getHometown() << setw(10) << VecTe[i]->getId() << setw(20) << VecTe[i]->getBaseSalary() << setw(20) << VecTe[i]->getBonusSalary() << setw(20) << VecTe[i]->getFine() << endl;
	}
}


//delete teacher by id
void Faculty::DeleteById(int id) {
	bool check = 0;
	for (int i = 0;i < VecTe.size();i++) {
		if (VecTe[i]->getId() == id) {
			VecTe.erase(VecTe.begin() + i);
			check = 1;
		}
	}
	//if id does not exists, inform users
	if (!check)
		cout << "Not found ID." << endl;
}


//calculate net salary for teacher by id
void Faculty::CalNetSalary(int id) {
	bool check = 0;
	int i;
	for ( i = 0;i < VecTe.size();i++) {
		if (VecTe[i]->getId() == id) {
			VecTe[i]->setNetSalary(VecTe[i]->getBaseSalary() + VecTe[i]->getBonusSalary() - VecTe[i]->getFine());
			check = 1;
			//break when found teacher need to calculate net salary
			break;
		}
	}
	if (!check)
		cout << "Not found ID." << endl;
	else
		cout << VecTe[i]->getNetSalary() << endl;
}