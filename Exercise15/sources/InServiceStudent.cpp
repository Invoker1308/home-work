#include "../headers/InServiceStudent.hpp"

//constructor
InServiceStudent::InServiceStudent() {
	setTrainLocation();
}

//set train location
void InServiceStudent::setTrainLocation() {
	cout << "Train location: ";
	cin.get();
	getline(cin, TrainLocation);
}

//get train location
string InServiceStudent::getTrainLocation(){
	return TrainLocation;
}

//show special info
void InServiceStudent::ShowMyInfo() {
	cout << "Train location: " << TrainLocation << endl;
}