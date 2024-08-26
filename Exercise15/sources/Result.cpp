#include "../headers/Result.hpp"

//constructor
Result::Result() {}

//set semester
void Result::setSemester(string Semester) {
	this->Semester = Semester;
}

//get semester
string Result::getSemester() {
	return Semester;
}

//set gpa
void Result::setGpa(double Gpa) {
	this->Gpa = Gpa;
}

//get gpa
double Result::getGpa() {
	return Gpa; 
}