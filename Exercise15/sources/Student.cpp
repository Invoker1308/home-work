#include "../headers/Student.hpp"

//constructor
Student::Student() {
	setFaculty();
	setId();
	setFullName();
	setDoB();
	setYearAdmiss();
	setEntryScore();
	setVecRe();
}

//set faculty
void Student::setFaculty() {
	cout << "Faculty: ";
	cin.get();
	getline(cin, Faculty);
}

//get faculty
string Student::getFaculty() {
	return Faculty;
}

//set id
void Student::setId() {
	cout << "ID: ";
	cin >> Id;
}

//get id
int Student::getId() {
	return Id;
}

//set full name
void Student::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
	if (FullName.size() < 10 || FullName.size() > 50)
		throw std::invalid_argument("InvalidFullNameException");
}

//get full name
string Student::getFullName() {
	return FullName;
}

//set day of birth
void Student::setDoB() {
	cout << "Day of birth: ";
	getline(cin, DoB);
	if (DoB.size() != 10 || stoi(DoB.substr(0, 2)) < 1 || stoi(DoB.substr(0, 2)) > 31 || DoB[2] != '/' || stoi(DoB.substr(3, 5)) < 1 || stoi(DoB.substr(3, 5)) > 12 || DoB[5] != '/' || stoi(DoB.substr(6, 10)) < 1 || stoi(DoB.substr(6, 10)) > 2024)
		throw std::invalid_argument("InvalidDOBException");
}

//get day of birth
string Student::getDoB() {
	return DoB;
}

//set year admiss
void Student::setYearAdmiss() {
	cout << "Year admission: ";
	getline(cin, YearAdmiss);
}

//get year admiss
string Student::getYearAdmiss() {
	return YearAdmiss;
}

//set entry score
void Student::setEntryScore() {
	cout << "Entry score: ";
	cin >> EntryScore;
}

//get entry score
int Student::getEntryScore() {
	return EntryScore;
}

//set vector result
void Student::setVecRe() {
	cout << "Number of semesters to enter gpa: ";
	int NumSemester;
	cin >> NumSemester;
	string Seme;
	double SemeGpa;
	for (int i = 0;i < NumSemester;i++) {
		VecRe.push_back(new Result);
		cout << i + 1 << "." << endl;
		cout << "Semester: ";
		cin.get();
		getline(cin, Seme);
		cout << "Gpa: ";
		cin >> SemeGpa;
		VecRe[i]->setSemester(Seme);
		VecRe[i]->setGpa(SemeGpa);
	}
}

//get vector result
vector<Result*> Student::getVecRe() {
	return VecRe;
}

//set type
void Student::setStudentType(int StudentType) {
	this->StudentType = StudentType;
}

//set type
void Student::setStudentType() {
	cout << "Type of student: ";
	cin >> StudentType;
}

//get type
int Student::getStudentType() {
	return StudentType;
}
