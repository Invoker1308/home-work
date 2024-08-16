#include "../headers/Neighborhood.hpp"

//constructor
Neighborhood::Neighborhood() {
	setFamilyNumber();
	setVecFa();
}

//set number of family in neighborhood
void Neighborhood::setFamilyNumber() {
	cout << "Family number: ";
	cin >> FamilyNumber;
}

//get number of family in neighborhood
int Neighborhood::getFamilyNumber() {
	return FamilyNumber;
}

//set vector family 
void Neighborhood::setVecFa() {
	for (int i = 0;i < FamilyNumber;i++) {
		cout << "Family number " << i + 1 << endl;
		VecFa.push_back(new Family);
	}
}

//get vector family
vector<Family*> Neighborhood::getVecFa() {
	return VecFa;
}

//display families in neighborhood
void Neighborhood::DisplayNei() {
	cout << "---------------------------------------------------------------" << endl;
	cout << "Family number: " << FamilyNumber << endl;
	for (int i = 0;i < FamilyNumber;i++) {
		cout << "Family number " << i + 1 << endl;
		VecFa[i]->DisplayFa();
	}
}