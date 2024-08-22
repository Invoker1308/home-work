#ifndef EMPLOYEE_MANAGEMENT_H_INCLUDED
#define EMPLOYEE_MANAGEMENT_H_INCLUDED


#include "Employee.hpp"
#include "Experience.hpp"
#include "Fresher.hpp"
#include "Intern.hpp"



#include <vector>
#include <set>
#include <iostream>
#include <iomanip>
#include <exception>
#include <stdexcept>



class EmployeeManagement {

private:

	multiset<int> UniqueId;

public:

	bool AddEmployee(vector<Employee*>& v, int p);

	void ShowInfo(vector<Employee*> v);

	void Display(Employee* emPtr);

	void DeleteEmployee(vector<Employee*>& v, int delId);

	void FindIntern(vector<Employee*> v);

	void FindExperience(vector<Employee*> v);

	void FindFresher(vector<Employee*> v);

	void EditInfor(vector<Employee*> v, int id);

	void EmployeeManagement::EditExperience(Experience* em);

	void EmployeeManagement::EditFresher(Fresher* em);

	void EmployeeManagement::EditIntern(Intern* em);

};


#endif //EMPLOYEE_MANAGEMENT_H_INCLUDED