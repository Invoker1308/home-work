#include "../headers/School.hpp"

//constructor
School::School() {
	setVecStu();
}

//set vector student
void School::setVecStu() {
}
//get vector student
vector<Student*> School::getVecStu() {
	return VecStu;
}

//add student
void School::AddStudent() {
	VecStu.push_back(new Student);
}

//display all students in school
void School::DisplayAll() {
	cout << left << setw(20) << "Full name" << setw(10) << "Age" << setw(20) << "Hometown" << endl;
	for (int i = 0;i < VecStu.size();i++) {
		cout << left << setw(20) << VecStu[i]->getFullName() << setw(10) << VecStu[i]->getAge() << setw(20) << VecStu[i]->getHometown() << endl;
	}
}

//display students who are 20 years old
void School::DisplayStu20() {
	bool check=0;
	cout << left << setw(20) << "Full name" << setw(10) << "Age" << setw(20) << "Hometown" << endl;
	for (int i = 0;i < VecStu.size();i++) {
		if (VecStu[i]->getAge() == 20) {
			check = 1;
			cout << left << setw(20) << VecStu[i]->getFullName() << setw(10) << VecStu[i]->getAge() << setw(20) << VecStu[i]->getHometown() << endl;
		}
	}
	if (!check)
		cout << "Not found." << endl;
}

//the number of students who are 23 years old and from Da Nang
void School::DisNumStu23DN() {
	int dem = 0;
	for (int i = 0;i < VecStu.size();i++) {
		if (VecStu[i]->getAge() == 23 && VecStu[i]->getHometown() == "Da Nang") {
			dem += 1;
		}
	}
	cout << dem << endl;
}

