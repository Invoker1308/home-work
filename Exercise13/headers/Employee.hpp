#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include "Certificate.hpp"

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <exception>
#include <stdexcept>

using namespace std;

class Employee {

private:

	int Id;
	string FullName;
	string BirthDay;
	string Phone;
	string Email;
	int EmployeeType;
	static int EmployeeCount;
	vector<Certificate> VecCer;

public:

	Employee();

	void setId();

	int getId();

	void setFullName();

	string getFullName();

	void setBirthDay();

	string getBirthDay();

	void setPhone();

	string getPhone();

	void setEmail();

	string getEmail();

	void setEmployeeType(int EmployeeType);

	void setEmployeeType();

	int getEmployeeType();

	int getEmployeeCount();

	virtual void ShowMe() = 0;

	virtual ~Employee(){}

};

#endif //EMPLOYEE_H_INCLUDED