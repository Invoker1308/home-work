#include "../headers/FacultyManagement.hpp"

//constructor
FacultyManagement::FacultyManagement() {
}

//set faculty's name
void FacultyManagement::setName(string Name) {
	this->Name = Name;
}

//get faculty's name
string FacultyManagement::getName() {
	return Name;
}

//set vector student*
void FacultyManagement::setVecStu(Student* Stu) {
	VecStu.push_back(Stu);
}

//get vector student*
vector<Student*> FacultyManagement::getVecStu(){
	return VecStu;
}