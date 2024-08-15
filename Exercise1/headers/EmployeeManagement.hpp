#ifndef EMPLOYEE_MANAGEMENT_H_INCLUDED
#define EMPLOYEE_MANAGEMENT_H_INCLUDED

#include <iomanip>
#include <vector>
#include <iostream>
#include "Employee.hpp"
#include "InheritEmployee.hpp"

using namespace std;


class EmployeeManagemnt {

public:

    // add new employee to vector
    void AddEmployee(vector<Employee*>& v, int p);

    //search employee in vector
    void SearchEmployee(vector<Employee*> v);

    //display the list of employee
    void DisplayList(vector<Employee*> v);

    //display an employee
    void Display(Employee* emPtr, int i);

};


#endif // EMPLOYEE_MANAGEMENT_H_INCLUDED