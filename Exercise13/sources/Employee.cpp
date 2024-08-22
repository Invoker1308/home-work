#include "../headers/Employee.hpp"

//static variable
int Employee::EmployeeCount = 0;

//constructor
Employee::Employee() {
	EmployeeCount += 1;
	setId();
	setFullName();
	setBirthDay();
	setPhone();
	setEmail();
}

//set id
void Employee::setId() {
	cout << "ID: ";
	cin >> Id;
}

//get id
int Employee::getId() {
	return Id;
}
//set full name
void Employee::setFullName() {
	cout << "Full name: ";
	cin.get();
	getline(cin, FullName);
}

//get full name
string Employee::getFullName() {
	return FullName;
}

//set birthday
void Employee::setBirthDay() {
	cout << "Birthday(DD/MM/YYYY): ";
	getline(cin, BirthDay);
	//birthday exception
	if (stoi(BirthDay.substr(0, 2)) < 1 || stoi(BirthDay.substr(0, 2)) > 31)
		throw std::invalid_argument("Birthday exception: Day is wrong");
	else if (stoi(BirthDay.substr(3, 5)) < 1 || stoi(BirthDay.substr(3, 5)) > 12)
		throw std::invalid_argument("Birthday exception: Month is wrong");
	else {
		if (stoi(BirthDay.substr(3, 5)) == 2)
			if (stoi(BirthDay.substr(0, 2)) < 1 || stoi(BirthDay.substr(0, 2)) > 28)
				throw std::invalid_argument("Birthday exception: Day is wrong");
		if (stoi(BirthDay.substr(3, 5)) == 4)
			if (stoi(BirthDay.substr(0, 2)) < 1 || stoi(BirthDay.substr(0, 2)) > 30)
				throw std::invalid_argument("Birthday exception: Day is wrong");
		if (stoi(BirthDay.substr(3, 5)) == 6)
			if (stoi(BirthDay.substr(0, 2)) < 1 || stoi(BirthDay.substr(0, 2)) > 30)
				throw std::invalid_argument("Birthday exception: Day is wrong");
		if (stoi(BirthDay.substr(3, 5)) == 9)
			if (stoi(BirthDay.substr(0, 2)) < 1 || stoi(BirthDay.substr(0, 2)) > 30)
				throw std::invalid_argument("Birthday exception: Day is wrong");
		if (stoi(BirthDay.substr(3, 5)) == 11)
			if (stoi(BirthDay.substr(0, 2)) < 1 || stoi(BirthDay.substr(0, 2)) > 30)
				throw std::invalid_argument("Birthday exception: Day is wrong");
	}
	if (stoi(BirthDay.substr(6, 10)) < 1 || stoi(BirthDay.substr(6, 10)) > 2024)
		throw std::invalid_argument("Birthday exception: Year is wrong");
}

//get birthday
string Employee::getBirthDay() {
	return BirthDay;
}

//set phone
void Employee::setPhone() {
	cout << "Phone: ";
	getline(cin, Phone);
	//phone exception
	if (Phone.size() != 10)
		throw std::invalid_argument("Phone exception: Phone is wrong");
}

//get phone
string Employee::getPhone() {
	return Phone;
}

//set email
void Employee::setEmail() {
	cout << "Email (@gmail.com): ";
	getline(cin, Email);
	//email exception
	string s = "@gmail.com";
	if (strstr(Email.c_str(), s.c_str()) == nullptr) {
		throw std::invalid_argument("Email exception: Email is wrong");
	}
}

//get email
string Employee::getEmail() {
	return Email;
}

//get count
int Employee::getEmployeeCount() {
	return EmployeeCount;
}

//set type
void Employee::setEmployeeType(int EmployeeType) {
	this->EmployeeType = EmployeeType;
}

//set type
void Employee::setEmployeeType() {
	cout << "Type of employee: ";
	cin >> EmployeeType;
}

//get type
int Employee::getEmployeeType() {
	return EmployeeType;
}

